.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel pause_tabs_draw_stats_805418
/* 805418 80244B98 27BDFFD8 */  addiu     $sp, $sp, -0x28
/* 80541C 80244B9C 0000202D */  daddu     $a0, $zero, $zero
/* 805420 80244BA0 3C05FD05 */  lui       $a1, 0xfd05
/* 805424 80244BA4 34A50F80 */  ori       $a1, $a1, 0xf80
/* 805428 80244BA8 AFBF0024 */  sw        $ra, 0x24($sp)
/* 80542C 80244BAC 0C0B1EAF */  jal       evt_get_variable
/* 805430 80244BB0 AFB00020 */   sw       $s0, 0x20($sp)
/* 805434 80244BB4 0000202D */  daddu     $a0, $zero, $zero
/* 805438 80244BB8 27A50010 */  addiu     $a1, $sp, 0x10
/* 80543C 80244BBC 0040802D */  daddu     $s0, $v0, $zero
/* 805440 80244BC0 27A60014 */  addiu     $a2, $sp, 0x14
/* 805444 80244BC4 0C0470AC */  jal       mdl_get_copied_vertices
/* 805448 80244BC8 27A70018 */   addiu    $a3, $sp, 0x18
/* 80544C 80244BCC 8FA20018 */  lw        $v0, 0x18($sp)
/* 805450 80244BD0 1840002C */  blez      $v0, .L80244C84
/* 805454 80244BD4 0000302D */   daddu    $a2, $zero, $zero
/* 805458 80244BD8 240AFFB2 */  addiu     $t2, $zero, -0x4e
/* 80545C 80244BDC 2409FFF0 */  addiu     $t1, $zero, -0x10
/* 805460 80244BE0 0040402D */  daddu     $t0, $v0, $zero
/* 805464 80244BE4 8FA70014 */  lw        $a3, 0x14($sp)
/* 805468 80244BE8 8FA50010 */  lw        $a1, 0x10($sp)
.L80244BEC:
/* 80546C 80244BEC 84A20000 */  lh        $v0, ($a1)
/* 805470 80244BF0 144A000F */  bne       $v0, $t2, .L80244C30
/* 805474 80244BF4 00061900 */   sll      $v1, $a2, 4
/* 805478 80244BF8 00E32021 */  addu      $a0, $a3, $v1
/* 80547C 80244BFC 84A20002 */  lh        $v0, 2($a1)
/* 805480 80244C00 14400007 */  bnez      $v0, .L80244C20
/* 805484 80244C04 94A30002 */   lhu      $v1, 2($a1)
/* 805488 80244C08 06010002 */  bgez      $s0, .L80244C14
/* 80548C 80244C0C 0200102D */   daddu    $v0, $s0, $zero
/* 805490 80244C10 26020003 */  addiu     $v0, $s0, 3
.L80244C14:
/* 805494 80244C14 00021083 */  sra       $v0, $v0, 2
/* 805498 80244C18 0809131C */  j         .L80244C70
/* 80549C 80244C1C 00621023 */   subu     $v0, $v1, $v0
.L80244C20:
/* 8054A0 80244C20 06010011 */  bgez      $s0, .L80244C68
/* 8054A4 80244C24 0200102D */   daddu    $v0, $s0, $zero
/* 8054A8 80244C28 0809131A */  j         .L80244C68
/* 8054AC 80244C2C 26020003 */   addiu    $v0, $s0, 3
.L80244C30:
/* 8054B0 80244C30 54490011 */  bnel      $v0, $t1, .L80244C78
/* 8054B4 80244C34 24C60001 */   addiu    $a2, $a2, 1
/* 8054B8 80244C38 00E32021 */  addu      $a0, $a3, $v1
/* 8054BC 80244C3C 84A20002 */  lh        $v0, 2($a1)
/* 8054C0 80244C40 94A30002 */  lhu       $v1, 2($a1)
/* 8054C4 80244C44 14400006 */  bnez      $v0, .L80244C60
/* 8054C8 80244C48 0200102D */   daddu    $v0, $s0, $zero
/* 8054CC 80244C4C 06020001 */  bltzl     $s0, .L80244C54
/* 8054D0 80244C50 26020003 */   addiu    $v0, $s0, 3
.L80244C54:
/* 8054D4 80244C54 00021083 */  sra       $v0, $v0, 2
/* 8054D8 80244C58 0809131C */  j         .L80244C70
/* 8054DC 80244C5C 00621023 */   subu     $v0, $v1, $v0
.L80244C60:
/* 8054E0 80244C60 04420001 */  bltzl     $v0, .L80244C68
/* 8054E4 80244C64 24420003 */   addiu    $v0, $v0, 3
.L80244C68:
/* 8054E8 80244C68 00021083 */  sra       $v0, $v0, 2
/* 8054EC 80244C6C 00621021 */  addu      $v0, $v1, $v0
.L80244C70:
/* 8054F0 80244C70 A4820002 */  sh        $v0, 2($a0)
/* 8054F4 80244C74 24C60001 */  addiu     $a2, $a2, 1
.L80244C78:
/* 8054F8 80244C78 00C8102A */  slt       $v0, $a2, $t0
/* 8054FC 80244C7C 1440FFDB */  bnez      $v0, .L80244BEC
/* 805500 80244C80 24A50010 */   addiu    $a1, $a1, 0x10
.L80244C84:
/* 805504 80244C84 3C03800A */  lui       $v1, %hi(gMasterGfxPos)
/* 805508 80244C88 2463A66C */  addiu     $v1, $v1, %lo(gMasterGfxPos)
/* 80550C 80244C8C 8C620000 */  lw        $v0, ($v1)
/* 805510 80244C90 0000202D */  daddu     $a0, $zero, $zero
/* 805514 80244C94 0040802D */  daddu     $s0, $v0, $zero
/* 805518 80244C98 24420008 */  addiu     $v0, $v0, 8
/* 80551C 80244C9C AC620000 */  sw        $v0, ($v1)
/* 805520 80244CA0 3C02DE00 */  lui       $v0, 0xde00
/* 805524 80244CA4 0C0470BB */  jal       mdl_get_copied_gfx
/* 805528 80244CA8 AE020000 */   sw       $v0, ($s0)
/* 80552C 80244CAC AE020004 */  sw        $v0, 4($s0)
/* 805530 80244CB0 8FBF0024 */  lw        $ra, 0x24($sp)
/* 805534 80244CB4 8FB00020 */  lw        $s0, 0x20($sp)
/* 805538 80244CB8 03E00008 */  jr        $ra
/* 80553C 80244CBC 27BD0028 */   addiu    $sp, $sp, 0x28
