.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_802400C8_800948
/* 800948 802400C8 27BDFF80 */  addiu     $sp, $sp, -0x80
/* 80094C 802400CC AFBE0078 */  sw        $fp, 0x78($sp)
/* 800950 802400D0 0080F02D */  daddu     $fp, $a0, $zero
/* 800954 802400D4 AFB5006C */  sw        $s5, 0x6c($sp)
/* 800958 802400D8 3C15F840 */  lui       $s5, 0xf840
/* 80095C 802400DC 36B55C05 */  ori       $s5, $s5, 0x5c05
/* 800960 802400E0 3C07F840 */  lui       $a3, 0xf840
/* 800964 802400E4 34E76200 */  ori       $a3, $a3, 0x6200
/* 800968 802400E8 24040030 */  addiu     $a0, $zero, 0x30
/* 80096C 802400EC AFBF007C */  sw        $ra, 0x7c($sp)
/* 800970 802400F0 AFB70074 */  sw        $s7, 0x74($sp)
/* 800974 802400F4 AFB60070 */  sw        $s6, 0x70($sp)
/* 800978 802400F8 AFB40068 */  sw        $s4, 0x68($sp)
/* 80097C 802400FC AFB30064 */  sw        $s3, 0x64($sp)
/* 800980 80240100 AFB20060 */  sw        $s2, 0x60($sp)
/* 800984 80240104 AFB1005C */  sw        $s1, 0x5c($sp)
/* 800988 80240108 AFB00058 */  sw        $s0, 0x58($sp)
/* 80098C 8024010C 0C00AB39 */  jal       heap_malloc
/* 800990 80240110 AFA70050 */   sw       $a3, 0x50($sp)
/* 800994 80240114 2404000C */  addiu     $a0, $zero, 0xc
/* 800998 80240118 0C00AB39 */  jal       heap_malloc
/* 80099C 8024011C 0040B82D */   daddu    $s7, $v0, $zero
/* 8009A0 80240120 03C0202D */  daddu     $a0, $fp, $zero
/* 8009A4 80240124 3C05F840 */  lui       $a1, 0xf840
/* 8009A8 80240128 AFA20054 */  sw        $v0, 0x54($sp)
/* 8009AC 8024012C AC400000 */  sw        $zero, ($v0)
/* 8009B0 80240130 8FA70054 */  lw        $a3, 0x54($sp)
/* 8009B4 80240134 34A55C87 */  ori       $a1, $a1, 0x5c87
/* 8009B8 80240138 ACE00004 */  sw        $zero, 4($a3)
/* 8009BC 8024013C ACE00008 */  sw        $zero, 8($a3)
/* 8009C0 80240140 AEE00000 */  sw        $zero, ($s7)
/* 8009C4 80240144 AEE0000C */  sw        $zero, 0xc($s7)
/* 8009C8 80240148 AEE00018 */  sw        $zero, 0x18($s7)
/* 8009CC 8024014C 0C0B1EAF */  jal       evt_get_variable
/* 8009D0 80240150 AEE00024 */   sw       $zero, 0x24($s7)
/* 8009D4 80240154 1440005E */  bnez      $v0, .L802402D0
/* 8009D8 80240158 03C0202D */   daddu    $a0, $fp, $zero
/* 8009DC 8024015C 0000982D */  daddu     $s3, $zero, $zero
/* 8009E0 80240160 0260882D */  daddu     $s1, $s3, $zero
/* 8009E4 80240164 24140001 */  addiu     $s4, $zero, 1
/* 8009E8 80240168 27B20010 */  addiu     $s2, $sp, 0x10
/* 8009EC 8024016C 0000202D */  daddu     $a0, $zero, $zero
.L80240170:
/* 8009F0 80240170 0C0B1EAF */  jal       evt_get_variable
/* 8009F4 80240174 02B12821 */   addu     $a1, $s5, $s1
/* 8009F8 80240178 0000202D */  daddu     $a0, $zero, $zero
/* 8009FC 8024017C 8FA70050 */  lw        $a3, 0x50($sp)
/* 800A00 80240180 0040802D */  daddu     $s0, $v0, $zero
/* 800A04 80240184 0C0B1EAF */  jal       evt_get_variable
/* 800A08 80240188 00F12821 */   addu     $a1, $a3, $s1
/* 800A0C 8024018C 56140007 */  bnel      $s0, $s4, .L802401AC
/* 800A10 80240190 26310001 */   addiu    $s1, $s1, 1
/* 800A14 80240194 54400005 */  bnel      $v0, $zero, .L802401AC
/* 800A18 80240198 26310001 */   addiu    $s1, $s1, 1
/* 800A1C 8024019C AE510000 */  sw        $s1, ($s2)
/* 800A20 802401A0 26520004 */  addiu     $s2, $s2, 4
/* 800A24 802401A4 26730001 */  addiu     $s3, $s3, 1
/* 800A28 802401A8 26310001 */  addiu     $s1, $s1, 1
.L802401AC:
/* 800A2C 802401AC 2E220010 */  sltiu     $v0, $s1, 0x10
/* 800A30 802401B0 1440FFEF */  bnez      $v0, .L80240170
/* 800A34 802401B4 0000202D */   daddu    $a0, $zero, $zero
/* 800A38 802401B8 12600039 */  beqz      $s3, .L802402A0
/* 800A3C 802401BC 0000A82D */   daddu    $s5, $zero, $zero
/* 800A40 802401C0 27B40010 */  addiu     $s4, $sp, 0x10
/* 800A44 802401C4 2672FFFF */  addiu     $s2, $s3, -1
/* 800A48 802401C8 8FB60054 */  lw        $s6, 0x54($sp)
/* 800A4C 802401CC 02E0802D */  daddu     $s0, $s7, $zero
.L802401D0:
/* 800A50 802401D0 0C00A67F */  jal       rand_int
/* 800A54 802401D4 0240202D */   daddu    $a0, $s2, $zero
/* 800A58 802401D8 3C05F5DE */  lui       $a1, 0xf5de
/* 800A5C 802401DC 34A501A9 */  ori       $a1, $a1, 0x1a9
/* 800A60 802401E0 0040882D */  daddu     $s1, $v0, $zero
/* 800A64 802401E4 00111080 */  sll       $v0, $s1, 2
/* 800A68 802401E8 02821021 */  addu      $v0, $s4, $v0
/* 800A6C 802401EC 8C460000 */  lw        $a2, ($v0)
/* 800A70 802401F0 3C078024 */  lui       $a3, %hi(D_80247F88_808808)
/* 800A74 802401F4 24E77F88 */  addiu     $a3, $a3, %lo(D_80247F88_808808)
/* 800A78 802401F8 00061840 */  sll       $v1, $a2, 1
/* 800A7C 802401FC 00661821 */  addu      $v1, $v1, $a2
/* 800A80 80240200 00031880 */  sll       $v1, $v1, 2
/* 800A84 80240204 00671821 */  addu      $v1, $v1, $a3
/* 800A88 80240208 8C620000 */  lw        $v0, ($v1)
/* 800A8C 8024020C 3C078008 */  lui       $a3, %hi(gItemTable)
/* 800A90 80240210 24E778E0 */  addiu     $a3, $a3, %lo(gItemTable)
/* 800A94 80240214 AE020000 */  sw        $v0, ($s0)
/* 800A98 80240218 00021140 */  sll       $v0, $v0, 5
/* 800A9C 8024021C 00471021 */  addu      $v0, $v0, $a3
/* 800AA0 80240220 8442000C */  lh        $v0, 0xc($v0)
/* 800AA4 80240224 03C0202D */  daddu     $a0, $fp, $zero
/* 800AA8 80240228 AE020004 */  sw        $v0, 4($s0)
/* 800AAC 8024022C 8C620008 */  lw        $v0, 8($v1)
/* 800AB0 80240230 02A52821 */  addu      $a1, $s5, $a1
/* 800AB4 80240234 AE020008 */  sw        $v0, 8($s0)
/* 800AB8 80240238 8FA70050 */  lw        $a3, 0x50($sp)
/* 800ABC 8024023C 26B50001 */  addiu     $s5, $s5, 1
/* 800AC0 80240240 00E61021 */  addu      $v0, $a3, $a2
/* 800AC4 80240244 0C0B2026 */  jal       evt_set_variable
/* 800AC8 80240248 AEC20000 */   sw       $v0, ($s6)
/* 800ACC 8024024C 26D60004 */  addiu     $s6, $s6, 4
/* 800AD0 80240250 2AA20003 */  slti      $v0, $s5, 3
/* 800AD4 80240254 10400012 */  beqz      $v0, .L802402A0
/* 800AD8 80240258 2610000C */   addiu    $s0, $s0, 0xc
/* 800ADC 8024025C 0232102A */  slt       $v0, $s1, $s2
/* 800AE0 80240260 1040000C */  beqz      $v0, .L80240294
/* 800AE4 80240264 0240202D */   daddu    $a0, $s2, $zero
/* 800AE8 80240268 00111880 */  sll       $v1, $s1, 2
.L8024026C:
/* 800AEC 8024026C 26220001 */  addiu     $v0, $s1, 1
/* 800AF0 80240270 0040882D */  daddu     $s1, $v0, $zero
/* 800AF4 80240274 00111080 */  sll       $v0, $s1, 2
/* 800AF8 80240278 02821021 */  addu      $v0, $s4, $v0
/* 800AFC 8024027C 8C420000 */  lw        $v0, ($v0)
/* 800B00 80240280 02831821 */  addu      $v1, $s4, $v1
/* 800B04 80240284 AC620000 */  sw        $v0, ($v1)
/* 800B08 80240288 0224102A */  slt       $v0, $s1, $a0
/* 800B0C 8024028C 1440FFF7 */  bnez      $v0, .L8024026C
/* 800B10 80240290 00111880 */   sll      $v1, $s1, 2
.L80240294:
/* 800B14 80240294 2673FFFF */  addiu     $s3, $s3, -1
/* 800B18 80240298 1660FFCD */  bnez      $s3, .L802401D0
/* 800B1C 8024029C 2652FFFF */   addiu    $s2, $s2, -1
.L802402A0:
/* 800B20 802402A0 03C0202D */  daddu     $a0, $fp, $zero
/* 800B24 802402A4 3C05F5DE */  lui       $a1, 0xf5de
/* 800B28 802402A8 34A501AC */  ori       $a1, $a1, 0x1ac
/* 800B2C 802402AC 0C0B2026 */  jal       evt_set_variable
/* 800B30 802402B0 02A0302D */   daddu    $a2, $s5, $zero
/* 800B34 802402B4 03C0202D */  daddu     $a0, $fp, $zero
/* 800B38 802402B8 3C05F840 */  lui       $a1, 0xf840
/* 800B3C 802402BC 34A55C87 */  ori       $a1, $a1, 0x5c87
/* 800B40 802402C0 0C0B2026 */  jal       evt_set_variable
/* 800B44 802402C4 24060001 */   addiu    $a2, $zero, 1
/* 800B48 802402C8 080900DC */  j         .L80240370
/* 800B4C 802402CC AFC00090 */   sw       $zero, 0x90($fp)
.L802402D0:
/* 800B50 802402D0 3C05F5DE */  lui       $a1, 0xf5de
/* 800B54 802402D4 0C0B1EAF */  jal       evt_get_variable
/* 800B58 802402D8 34A501AC */   ori      $a1, $a1, 0x1ac
/* 800B5C 802402DC 0040A82D */  daddu     $s5, $v0, $zero
/* 800B60 802402E0 1AA00021 */  blez      $s5, .L80240368
/* 800B64 802402E4 0000882D */   daddu    $s1, $zero, $zero
/* 800B68 802402E8 3C13F5DE */  lui       $s3, 0xf5de
/* 800B6C 802402EC 367301A9 */  ori       $s3, $s3, 0x1a9
/* 800B70 802402F0 3C168024 */  lui       $s6, %hi(D_80247F88_808808)
/* 800B74 802402F4 26D67F88 */  addiu     $s6, $s6, %lo(D_80247F88_808808)
/* 800B78 802402F8 3C148008 */  lui       $s4, %hi(gItemTable)
/* 800B7C 802402FC 269478E0 */  addiu     $s4, $s4, %lo(gItemTable)
/* 800B80 80240300 8FB20054 */  lw        $s2, 0x54($sp)
/* 800B84 80240304 02E0802D */  daddu     $s0, $s7, $zero
.L80240308:
/* 800B88 80240308 03C0202D */  daddu     $a0, $fp, $zero
/* 800B8C 8024030C 0C0B1EAF */  jal       evt_get_variable
/* 800B90 80240310 02332821 */   addu     $a1, $s1, $s3
/* 800B94 80240314 0040302D */  daddu     $a2, $v0, $zero
/* 800B98 80240318 00061840 */  sll       $v1, $a2, 1
/* 800B9C 8024031C 00661821 */  addu      $v1, $v1, $a2
/* 800BA0 80240320 00031880 */  sll       $v1, $v1, 2
/* 800BA4 80240324 00761821 */  addu      $v1, $v1, $s6
/* 800BA8 80240328 8C620000 */  lw        $v0, ($v1)
/* 800BAC 8024032C AE020000 */  sw        $v0, ($s0)
/* 800BB0 80240330 00021140 */  sll       $v0, $v0, 5
/* 800BB4 80240334 00541021 */  addu      $v0, $v0, $s4
/* 800BB8 80240338 8442000C */  lh        $v0, 0xc($v0)
/* 800BBC 8024033C AE020004 */  sw        $v0, 4($s0)
/* 800BC0 80240340 8C620008 */  lw        $v0, 8($v1)
/* 800BC4 80240344 26310001 */  addiu     $s1, $s1, 1
/* 800BC8 80240348 AE020008 */  sw        $v0, 8($s0)
/* 800BCC 8024034C 8FA70050 */  lw        $a3, 0x50($sp)
/* 800BD0 80240350 2610000C */  addiu     $s0, $s0, 0xc
/* 800BD4 80240354 00E61021 */  addu      $v0, $a3, $a2
/* 800BD8 80240358 AE420000 */  sw        $v0, ($s2)
/* 800BDC 8024035C 0235102A */  slt       $v0, $s1, $s5
/* 800BE0 80240360 1440FFE9 */  bnez      $v0, .L80240308
/* 800BE4 80240364 26520004 */   addiu    $s2, $s2, 4
.L80240368:
/* 800BE8 80240368 24020001 */  addiu     $v0, $zero, 1
/* 800BEC 8024036C AFC20090 */  sw        $v0, 0x90($fp)
.L80240370:
/* 800BF0 80240370 AFD50084 */  sw        $s5, 0x84($fp)
/* 800BF4 80240374 8FA70054 */  lw        $a3, 0x54($sp)
/* 800BF8 80240378 AFC70088 */  sw        $a3, 0x88($fp)
/* 800BFC 8024037C AFD7008C */  sw        $s7, 0x8c($fp)
/* 800C00 80240380 8FBF007C */  lw        $ra, 0x7c($sp)
/* 800C04 80240384 8FBE0078 */  lw        $fp, 0x78($sp)
/* 800C08 80240388 8FB70074 */  lw        $s7, 0x74($sp)
/* 800C0C 8024038C 8FB60070 */  lw        $s6, 0x70($sp)
/* 800C10 80240390 8FB5006C */  lw        $s5, 0x6c($sp)
/* 800C14 80240394 8FB40068 */  lw        $s4, 0x68($sp)
/* 800C18 80240398 8FB30064 */  lw        $s3, 0x64($sp)
/* 800C1C 8024039C 8FB20060 */  lw        $s2, 0x60($sp)
/* 800C20 802403A0 8FB1005C */  lw        $s1, 0x5c($sp)
/* 800C24 802403A4 8FB00058 */  lw        $s0, 0x58($sp)
/* 800C28 802403A8 24020002 */  addiu     $v0, $zero, 2
/* 800C2C 802403AC 03E00008 */  jr        $ra
/* 800C30 802403B0 27BD0080 */   addiu    $sp, $sp, 0x80
/* 800C34 802403B4 00000000 */  nop
/* 800C38 802403B8 00000000 */  nop
/* 800C3C 802403BC 00000000 */  nop
