// 02ef5a  sub_2ef5a  body=170  callers=1
// params: undefined sub_2ef5a(void)

void sub_2ef5a(void)

{
  undefined1 *puVar1;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  ushort in_DP;
  BADSPACEBASE *in_SP;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  byte in_DBR;
  byte bVar21;
  undefined1 in_DF;
  uint in_register_00000040;
  undefined1 uStack_2;
  undefined1 uStack_1;
  undefined1 *puVar2;
  
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x212c) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x212d) = 0;
  *(undefined1 *)ZEXT23(&stack0x0000) = 0xef;
  *(undefined1 *)ZEXT23(&uStack_1) = 0x5f;
  puVar9 = &uStack_2;
  sub_2e28c();
  *(undefined1 *)ZEXT23(puVar9) = 2;
  *(undefined1 *)ZEXT23(puVar9 + -1) = 0xef;
  *(undefined1 *)ZEXT23(puVar9 + -2) = 99;
  puVar10 = puVar9 + -3;
  func_0x009c69();
  *(undefined1 *)ZEXT23(puVar10) = 0xef;
  *(undefined1 *)ZEXT23(puVar10 + -1) = 0x66;
  puVar11 = puVar10 + -2;
  sub_2f024();
  *(undefined1 *)ZEXT23(puVar11) = 0xef;
  *(undefined1 *)ZEXT23(puVar11 + -1) = 0x69;
  puVar12 = puVar11 + -2;
  sub_2e3db();
  *(undefined1 *)ZEXT23(puVar12) = 0xef;
  *(undefined1 *)ZEXT23(puVar12 + -1) = 0x6f;
  puVar13 = puVar12 + -2;
  sub_2e5e9();
  cVar8 = (char)in_DP;
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && cVar8 == '\0') {
    uVar7 = in_DP | 0xe6;
  }
  else {
    uVar7 = in_DP + 0xe6;
  }
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && cVar8 == '\0') {
    uVar3 = in_DP | 0xe7;
  }
  else {
    uVar3 = in_DP + 0xe7;
  }
  uVar6 = CONCAT11(*(undefined1 *)(uint3)uVar3,*(undefined1 *)(uint3)uVar7) | 0x2020;
  *(undefined1 *)(uint3)uVar7 = (char)uVar6;
  *(undefined1 *)(uint3)uVar3 = (char)(uVar6 >> 8);
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && cVar8 == '\0') {
    uVar7 = in_DP | 0xe6;
  }
  else {
    uVar7 = in_DP + 0xe6;
  }
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && cVar8 == '\0') {
    uVar3 = in_DP | 0xe7;
  }
  else {
    uVar3 = in_DP + 0xe7;
  }
  uVar6 = CONCAT11(*(undefined1 *)(uint3)uVar3,*(undefined1 *)(uint3)uVar7) | 0x2010;
  *(undefined1 *)(uint3)uVar7 = (char)uVar6;
  *(undefined1 *)(uint3)uVar3 = (char)(uVar6 >> 8);
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && cVar8 == '\0') {
    uVar7 = in_DP | 0xe6;
  }
  else {
    uVar7 = in_DP + 0xe6;
  }
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && cVar8 == '\0') {
    in_DP = in_DP | 0xe7;
  }
  else {
    in_DP = in_DP + 0xe7;
  }
  uVar3 = CONCAT11(*(undefined1 *)(uint3)in_DP,*(undefined1 *)(uint3)uVar7) | 0x2080;
  *(undefined1 *)(uint3)uVar7 = (char)uVar3;
  *(undefined1 *)(uint3)in_DP = (char)(uVar3 >> 8);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd2) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd3) = 8;
  bVar21 = *(byte *)ZEXT23(puVar13 + 1);
  *(undefined1 *)ZEXT23(puVar13 + 1) = 2;
  *(undefined1 *)ZEXT23(puVar13) = 0xef;
  *(undefined1 *)ZEXT23(puVar13 + -1) = 0x9b;
  puVar14 = puVar13 + -2;
  sub_99bf();
  *(undefined1 *)ZEXT23(puVar14) = 0xef;
  *(undefined1 *)ZEXT23(puVar14 + -1) = 0xa1;
  puVar15 = puVar14 + -2;
  sub_2e5e9();
  *(undefined1 *)ZEXT23(puVar15) = 2;
  *(undefined1 *)ZEXT23(puVar15 + -1) = 0xef;
  *(undefined1 *)ZEXT23(puVar15 + -2) = 0xa5;
  puVar16 = puVar15 + -3;
  func_0x009bb0();
  *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xeb) = 0x14;
  *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xec) = 0;
  *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xed) = 0x12;
  *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xee) = 0;
  *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xef) = 0x8c;
  *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xf0) = 0;
  *(undefined1 *)ZEXT23(puVar16) = 0xef;
  *(undefined1 *)ZEXT23(puVar16 + -1) = 0xc6;
  puVar17 = puVar16 + -2;
  sub_2e5e9();
  *(undefined1 *)ZEXT23(puVar17) = 0xef;
  *(undefined1 *)ZEXT23(puVar17 + -1) = 0xcf;
  puVar18 = puVar17 + -2;
  sub_2e5c4();
  *(undefined1 *)ZEXT23(puVar18) = 2;
  *(undefined1 *)ZEXT23(puVar18 + -1) = 0xef;
  *(undefined1 *)ZEXT23(puVar18 + -2) = 0xd8;
  puVar19 = puVar18 + -3;
  func_0x009bb0();
  puVar1 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xeb);
  puVar2 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xec);
  sVar5 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar5;
  *puVar2 = (char)((ushort)sVar5 >> 8);
  puVar1 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xeb);
  puVar2 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xec);
  sVar5 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar5;
  *puVar2 = (char)((ushort)sVar5 >> 8);
  puVar1 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xed);
  puVar2 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xee);
  sVar5 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar5;
  *puVar2 = (char)((ushort)sVar5 >> 8);
  puVar1 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xed);
  puVar2 = (undefined1 *)((uint3)bVar21 * 0x10000 + 0xee);
  sVar5 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar5;
  *puVar2 = (char)((ushort)sVar5 >> 8);
  uVar7 = CONCAT11(*(undefined1 *)((uint3)bVar21 * 0x10000 + 0xf0),
                   *(undefined1 *)((uint3)bVar21 * 0x10000 + 0xef));
  if ((bool)in_DF) {
    uVar4 = ((uint)uVar7 & 0xf) + 2;
    if (9 < uVar4) {
      uVar4 = ((uint)uVar7 & 0xf) + 8;
    }
    uVar4 = ((uint)uVar7 & 0xf0) + 0x40 + (uint)(0xf < uVar4) * 0x10 + (uVar4 & 0xf);
    if (0x9f < uVar4) {
      uVar4 = uVar4 + 0x60;
    }
    uVar4 = ((uint)uVar7 & 0xf00) + (uint)(0xff < uVar4) * 0x100 + (uVar4 & 0xff);
    if (0x9ff < uVar4) {
      uVar4 = uVar4 + 0x600;
    }
    uVar4 = ((uint)uVar7 & 0xf000) + (uint)(0xfff < uVar4) * 0x1000 + (uVar4 & 0xfff);
  }
  else {
    uVar4 = (uint)uVar7 + 0x42;
  }
  if ((bool)in_DF && 0x9fff < uVar4) {
    uVar4 = uVar4 + 0x6000;
  }
  *(char *)((uint3)bVar21 * 0x10000 + 0xef) = (char)uVar4;
  *(char *)((uint3)bVar21 * 0x10000 + 0xf0) = (char)(uVar4 >> 8);
  do {
  } while (*(char *)ZEXT23(puVar19 + 1) != '\x01');
  *(undefined1 *)ZEXT23(puVar19 + 1) = 0xef;
  *(undefined1 *)ZEXT23(puVar19) = 0xfe;
  puVar20 = puVar19 + -1;
  sub_2e5e9();
  *(undefined1 *)ZEXT23(puVar20) = 2;
  *(undefined1 *)ZEXT23(puVar20 + -1) = 0xf0;
  *(undefined1 *)ZEXT23(puVar20 + -2) = 2;
  func_0x009bb0();
  return;
}


