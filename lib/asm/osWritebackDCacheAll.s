.set noat      // allow manual use of $at
.set noreorder // don't insert nops after branches

#include "macros.inc"


.section .text, "ax"

glabel osWritebackDCacheAll
    lui   $t0, 0x8000
    addiu $t1, $t0, 0x1F80
.L80322020:
    cache 1, 0x00($t0)
    cache 1, 0x10($t0)
    cache 1, 0x20($t0)
    cache 1, 0x30($t0)
    cache 1, 0x40($t0)
    cache 1, 0x50($t0)
    cache 1, 0x60($t0)
    cache 1, 0x70($t0)
    bne   $t0, $t1, .L80322020
     addiu $t0, $t0, 0x80
    jr    $ra
     nop
