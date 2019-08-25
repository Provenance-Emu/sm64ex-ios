# Macros for disassembled sequence files. This file was automatically generated by seq_decoder.py.
# To regenerate it, run: ./tools/seq_decoder.py --emit-asm-macros >seq_macros.inc

# seq commands

.macro seq_testchdisabled a
    .byte 0x0 + \a
.endm

.macro seq_subvariation a=0
    .byte 0x50 + \a
.endm

.macro seq_setvariation a=0
    .byte 0x70 + \a
.endm

.macro seq_getvariation a=0
    .byte 0x80 + \a
.endm

.macro seq_startchannel a, b
    .byte 0x90 + \a
    .byte (\b - sequence_start) >> 8, (\b - sequence_start) & 0xff
.endm

.macro seq_subtract a
    .byte 0xc8
    .byte \a
.endm

.macro seq_bitand a
    .byte 0xc9
    .byte \a
.endm

.macro seq_setval a
    .byte 0xcc
    .byte \a
.endm

.macro seq_setnoteallocationpolicy a
    .byte 0xd0
    .byte \a
.endm

.macro seq_setshortnotedurationtable a
    .byte 0xd1
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_setshortnotevelocitytable a
    .byte 0xd2
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_setmutebhv a
    .byte 0xd3
    .byte \a
.endm

.macro seq_mute
    .byte 0xd4
.endm

.macro seq_setmutescale a
    .byte 0xd5
    .byte \a
.endm

.macro seq_disablechannels a
    .byte 0xd6
    .byte \a >> 8, \a & 0xff
.endm

.macro seq_initchannels a
    .byte 0xd7
    .byte \a >> 8, \a & 0xff
.endm

.macro seq_changevol a
    .byte 0xda
    .byte \a
.endm

.macro seq_setvol a
    .byte 0xdb
    .byte \a
.endm

.macro seq_addtempo a
    .byte 0xdc
    .byte \a
.endm

.macro seq_settempo a
    .byte 0xdd
    .byte \a
.endm

.macro seq_transposerel a
    .byte 0xde
    .byte \a
.endm

.macro seq_transpose a
    .byte 0xdf
    .byte \a
.endm

.macro seq_bgez a
    .byte 0xf5
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_loopend
    .byte 0xf7
.endm

.macro seq_loop a
    .byte 0xf8
    .byte \a
.endm

.macro seq_bltz a
    .byte 0xf9
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_beqz a
    .byte 0xfa
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_jump a
    .byte 0xfb
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_call a
    .byte 0xfc
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro seq_delay a
    .byte 0xfd
    var \a
.endm

.macro seq_delay1
    .byte 0xfe
.endm

.macro seq_end
    .byte 0xff
.endm

.ifdef VERSION_EU

.macro seq_unreservenotes
    .byte 0xf0
.endm

.macro seq_reservenotes a
    .byte 0xf1
    .byte \a
.endm

.else

.macro seq_unreservenotes
    .byte 0xf1
.endm

.macro seq_reservenotes a
    .byte 0xf2
    .byte \a
.endm

.endif

# chan commands

.macro chan_testlayerfinished a
    .byte 0x0 + \a
.endm

.macro chan_startchannel a, b
    .byte 0x10 + \a
    .byte (\b - sequence_start) >> 8, (\b - sequence_start) & 0xff
.endm

.macro chan_disablechannel a
    .byte 0x20 + \a
.endm

.macro chan_iowriteval2 a, b
    .byte 0x30 + \a
    .byte \b
.endm

.macro chan_ioreadval2 a, b
    .byte 0x40 + \a
    .byte \b
.endm

.macro chan_ioreadvalsub a
    .byte 0x50 + \a
.endm

.macro chan_iowriteval a
    .byte 0x70 + \a
.endm

.macro chan_ioreadval a
    .byte 0x80 + \a
.endm

.macro chan_setlayer a, b
    .byte 0x90 + \a
    .byte (\b - sequence_start) >> 8, (\b - sequence_start) & 0xff
.endm

.macro chan_freelayer a
    .byte 0xa0 + \a
.endm

.macro chan_dynsetlayer a
    .byte 0xb0 + \a
.endm

.macro chan_setinstr a
    .byte 0xc1
    .byte \a
.endm

.macro chan_setdyntable a
    .byte 0xc2
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_largenotesoff
    .byte 0xc3
.endm

.macro chan_largenoteson
    .byte 0xc4
.endm

.macro chan_dynsetdyntable
    .byte 0xc5
.endm

.macro chan_setbank a
    .byte 0xc6
    .byte \a
.endm

.macro chan_subtract a
    .byte 0xc8
    .byte \a
.endm

.macro chan_bitand a
    .byte 0xc9
    .byte \a
.endm

.macro chan_setmutebhv a
    .byte 0xca
    .byte \a
.endm

.macro chan_readseq a
    .byte 0xcb
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_setval a
    .byte 0xcc
    .byte \a
.endm

.macro chan_stereoheadseteffects a
    .byte 0xd0
    .byte \a
.endm

.macro chan_setnoteallocationpolicy a
    .byte 0xd1
    .byte \a
.endm

.macro chan_setsustain a
    .byte 0xd2
    .byte \a
.endm

.macro chan_pitchbend a
    .byte 0xd3
    .byte \a
.endm

.macro chan_setreverb a
    .byte 0xd4
    .byte \a
.endm

.macro chan_setupdatesperframe_unimplemented a
    .byte 0xd6
    .byte \a
.endm

.macro chan_setvibratorate a
    .byte 0xd7
    .byte \a
.endm

.macro chan_setvibratoextent a
    .byte 0xd8
    .byte \a
.endm

.macro chan_setdecayrelease a
    .byte 0xd9
    .byte \a
.endm

.macro chan_setenvelope a
    .byte 0xda
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_transpose a
    .byte 0xdb
    .byte \a
.endm

.macro chan_setpanmix a
    .byte 0xdc
    .byte \a
.endm

.macro chan_setpan a
    .byte 0xdd
    .byte \a
.endm

.macro chan_freqscale a
    .byte 0xde
    .byte \a >> 8, \a & 0xff
.endm

.macro chan_setvol a
    .byte 0xdf
    .byte \a
.endm

.macro chan_setvolscale a
    .byte 0xe0
    .byte \a
.endm

.macro chan_setvibratoratelinear a, b, c
    .byte 0xe1
    .byte \a
    .byte \b
    .byte \c
.endm

.macro chan_setvibratoextentlinear a, b, c
    .byte 0xe2
    .byte \a
    .byte \b
    .byte \c
.endm

.macro chan_setvibratodelay a
    .byte 0xe3
    .byte \a
.endm

.macro chan_dyncall
    .byte 0xe4
.endm

.macro chan_hang
    .byte 0xf3
.endm

.macro chan_bgez a
    .byte 0xf5
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_break
    .byte 0xf6
.endm

.macro chan_loopend
    .byte 0xf7
.endm

.macro chan_loop a
    .byte 0xf8
    .byte \a
.endm

.macro chan_bltz a
    .byte 0xf9
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_beqz a
    .byte 0xfa
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_jump a
    .byte 0xfb
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_call a
    .byte 0xfc
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro chan_delay a
    .byte 0xfd
    var \a
.endm

.macro chan_delay1
    .byte 0xfe
.endm

.macro chan_end
    .byte 0xff
.endm

.macro chan_writeseq val, pos, offset
    .byte 0xc7, \val
    .byte (\pos - sequence_start + \offset) >> 8, (\pos - sequence_start + \offset) & 0xff
.endm

.macro chan_writeseq_nextinstr val, offset
    .byte 0xc7, \val
    .byte (writeseq\@ - sequence_start + \offset) >> 8, (writeseq\@ - sequence_start + \offset) & 0xff
    writeseq\@:
.endm

.macro layer_portamento a, b, c
    .byte 0xc7, \a, \b
    .if ((\a & 0x80) == 0)
        var \c
    .else
        .byte \c
    .endif
.endm

.macro chan_delay_long a
    .byte 0xfd
    var_long \a
.endm

.ifdef VERSION_EU

.macro chan_setnotepriority a
    .byte 0xe9
    .byte \a
.endm

.macro chan_unreservenotes
    .byte 0xf0
.endm

.macro chan_reservenotes a
    .byte 0xf1
    .byte \a
.endm

.else

.macro chan_setnotepriority a
    .byte 0x60 + \a
.endm

.macro chan_unreservenotes
    .byte 0xf1
.endm

.macro chan_reservenotes a
    .byte 0xf2
    .byte \a
.endm

.endif

# layer commands

.macro layer_note0 a, b, c, d
    .byte 0x0 + \a
    var \b
    .byte \c
    .byte \d
.endm

.macro layer_note1 a, b, c
    .byte 0x40 + \a
    var \b
    .byte \c
.endm

.macro layer_note2 a, b, c
    .byte 0x80 + \a
    .byte \b
    .byte \c
.endm

.macro layer_delay a
    .byte 0xc0
    var \a
.endm

.macro layer_setshortnotevelocity a
    .byte 0xc1
    .byte \a
.endm

.macro layer_transpose a
    .byte 0xc2
    .byte \a
.endm

.macro layer_setshortnotedefaultplaypercentage a
    .byte 0xc3
    var \a
.endm

.macro layer_somethingon
    .byte 0xc4
.endm

.macro layer_somethingoff
    .byte 0xc5
.endm

.macro layer_setinstr a
    .byte 0xc6
    .byte \a
.endm

.macro layer_disableportamento
    .byte 0xc8
.endm

.macro layer_setshortnoteduration a
    .byte 0xc9
    .byte \a
.endm

.macro layer_setpan a
    .byte 0xca
    .byte \a
.endm

.macro layer_setshortnotevelocityfromtable a
    .byte 0xd0 + \a
.endm

.macro layer_setshortnotedurationfromtable a
    .byte 0xe0 + \a
.endm

.macro layer_loopend
    .byte 0xf7
.endm

.macro layer_loop a
    .byte 0xf8
    .byte \a
.endm

.macro layer_jump a
    .byte 0xfb
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro layer_call a
    .byte 0xfc
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm

.macro layer_end
    .byte 0xff
.endm

.macro layer_delay_long a
    .byte 0xc0
    var_long \a
.endm

.macro layer_note1_long a, b, c
    .byte 0x40 + \a
    var_long \b
    .byte \c
.endm

# envelope commands

.macro envelope_disable a
    .byte 0x0, 0x0
    .byte \a >> 8, \a & 0xff
.endm

.macro envelope_hang a
    .byte 0xff, 0xff
    .byte \a >> 8, \a & 0xff
.endm

.macro envelope_goto a
    .byte 0xff, 0xfe
    .byte \a >> 8, \a & 0xff
.endm

.macro envelope_restart a
    .byte 0xff, 0xfd
    .byte \a >> 8, \a & 0xff
.endm

.macro envelope_line a, b
    .byte \a >> 8, \a & 0xff
    .byte \b >> 8, \b & 0xff
.endm

# other commands

.macro var_long x
     .byte (0x80 | (\x & 0x7f00) >> 8), (\x & 0xff)
.endm

.macro var x
    .if (\x >= 0x80)
        var_long \x
    .else
        .byte \x
    .endif
.endm

.macro sound_ref a
    .byte (\a - sequence_start) >> 8, (\a - sequence_start) & 0xff
.endm