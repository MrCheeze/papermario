.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.section .rodata

dlabel D_E0050560
.double 0.94

dlabel D_E0050568
.double 0.05

dlabel D_E0050570
.double -0.1, 0.0

.section .text

glabel sweat_update
/* 35C1A8 E00501D8 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 35C1AC E00501DC AFBF0010 */  sw        $ra, 0x10($sp)
/* 35C1B0 E00501E0 8C83000C */  lw        $v1, 0xc($a0)
/* 35C1B4 E00501E4 8C620024 */  lw        $v0, 0x24($v1)
/* 35C1B8 E00501E8 2442FFFF */  addiu     $v0, $v0, -1
/* 35C1BC E00501EC 04410005 */  bgez      $v0, .LE0050204
/* 35C1C0 E00501F0 AC620024 */   sw       $v0, 0x24($v1)
/* 35C1C4 E00501F4 0C080128 */  jal       shim_remove_effect
/* 35C1C8 E00501F8 00000000 */   nop
/* 35C1CC E00501FC 080140AE */  j         .LE00502B8
/* 35C1D0 E0050200 00000000 */   nop
.LE0050204:
/* 35C1D4 E0050204 C4620018 */  lwc1      $f2, 0x18($v1)
/* 35C1D8 E0050208 3C01E005 */  lui       $at, %hi(D_E0050560)
/* 35C1DC E005020C D42A0560 */  ldc1      $f10, %lo(D_E0050560)($at)
/* 35C1E0 E0050210 460010A1 */  cvt.d.s   $f2, $f2
/* 35C1E4 E0050214 462A1082 */  mul.d     $f2, $f2, $f10
/* 35C1E8 E0050218 00000000 */  nop
/* 35C1EC E005021C C4640004 */  lwc1      $f4, 4($v1)
/* 35C1F0 E0050220 C4600018 */  lwc1      $f0, 0x18($v1)
/* 35C1F4 E0050224 C4680008 */  lwc1      $f8, 8($v1)
/* 35C1F8 E0050228 46002100 */  add.s     $f4, $f4, $f0
/* 35C1FC E005022C C460001C */  lwc1      $f0, 0x1c($v1)
/* 35C200 E0050230 C466000C */  lwc1      $f6, 0xc($v1)
/* 35C204 E0050234 46004200 */  add.s     $f8, $f8, $f0
/* 35C208 E0050238 C4600020 */  lwc1      $f0, 0x20($v1)
/* 35C20C E005023C 46003180 */  add.s     $f6, $f6, $f0
/* 35C210 E0050240 C460001C */  lwc1      $f0, 0x1c($v1)
/* 35C214 E0050244 E4640004 */  swc1      $f4, 4($v1)
/* 35C218 E0050248 3C01E005 */  lui       $at, %hi(D_E0050568)
/* 35C21C E005024C D4240568 */  ldc1      $f4, %lo(D_E0050568)($at)
/* 35C220 E0050250 46000021 */  cvt.d.s   $f0, $f0
/* 35C224 E0050254 46240001 */  sub.d     $f0, $f0, $f4
/* 35C228 E0050258 E4680008 */  swc1      $f8, 8($v1)
/* 35C22C E005025C E466000C */  swc1      $f6, 0xc($v1)
/* 35C230 E0050260 46200020 */  cvt.s.d   $f0, $f0
/* 35C234 E0050264 E460001C */  swc1      $f0, 0x1c($v1)
/* 35C238 E0050268 462010A0 */  cvt.s.d   $f2, $f2
/* 35C23C E005026C E4620018 */  swc1      $f2, 0x18($v1)
/* 35C240 E0050270 3C01E005 */  lui       $at, %hi(D_E0050570)
/* 35C244 E0050274 D4220570 */  ldc1      $f2, %lo(D_E0050570)($at)
/* 35C248 E0050278 46000021 */  cvt.d.s   $f0, $f0
/* 35C24C E005027C 4622003C */  c.lt.d    $f0, $f2
/* 35C250 E0050280 00000000 */  nop
/* 35C254 E0050284 45000006 */  bc1f      .LE00502A0
/* 35C258 E0050288 00000000 */   nop
/* 35C25C E005028C 3C01BDCC */  lui       $at, 0xbdcc
/* 35C260 E0050290 3421CCCD */  ori       $at, $at, 0xcccd
/* 35C264 E0050294 44810000 */  mtc1      $at, $f0
/* 35C268 E0050298 00000000 */  nop
/* 35C26C E005029C E460001C */  swc1      $f0, 0x1c($v1)
.LE00502A0:
/* 35C270 E00502A0 C4600020 */  lwc1      $f0, 0x20($v1)
/* 35C274 E00502A4 46000021 */  cvt.d.s   $f0, $f0
/* 35C278 E00502A8 462A0002 */  mul.d     $f0, $f0, $f10
/* 35C27C E00502AC 00000000 */  nop
/* 35C280 E00502B0 46200020 */  cvt.s.d   $f0, $f0
/* 35C284 E00502B4 E4600020 */  swc1      $f0, 0x20($v1)
.LE00502B8:
/* 35C288 E00502B8 8FBF0010 */  lw        $ra, 0x10($sp)
/* 35C28C E00502BC 03E00008 */  jr        $ra
/* 35C290 E00502C0 27BD0018 */   addiu    $sp, $sp, 0x18
