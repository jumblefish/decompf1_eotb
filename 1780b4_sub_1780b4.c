// 1780b4  sub_1780b4  body=193  callers=1
// params: undefined sub_1780b4(void)

/* WARNING: Removing unreachable block (bus,0x1780ec) */
/* WARNING: Removing unreachable block (bus,0x1780f3) */
/* WARNING: Removing unreachable block (bus,0x178147) */

void sub_1780b4(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  BADSPACEBASE *in_SP;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte in_DBR;
  byte bVar13;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc94);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xa31) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc93);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xa32) = uVar1;
  uVar4 = CONCAT11(*(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc94),
                   *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc93));
  do {
  } while (uVar4 == 0);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc98) = 0;
  *(undefined1 *)ZEXT23(&uStack_1) = 0x17;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x80;
  *(undefined1 *)ZEXT23(&uStack_3) = 200;
  puVar5 = &uStack_4;
  sub_69d3a();
  *(undefined1 *)ZEXT23(puVar5) = 0x17;
  *(undefined1 *)ZEXT23(puVar5 + -1) = 0x80;
  *(undefined1 *)ZEXT23(puVar5 + -2) = 0xd1;
  puVar6 = puVar5 + -3;
  sub_69957();
  *(undefined *)((uint3)in_DBR * 0x10000 + 0xc95) = (&UNK_7eaa03)[uVar4];
  uVar4 = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd4) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd5) = 0;
  *(undefined1 *)ZEXT23(puVar6) = 0x17;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 0x80;
  *(undefined1 *)ZEXT23(puVar6 + -2) = 0xe7;
  puVar7 = puVar6 + -3;
  sub_69957();
  do {
  } while (((&UNK_7eaa02)[uVar4] & 0x80) == 0);
  do {
  } while ((*(byte *)((uint3)in_DBR * 0x10000 + 0xa33) & 1) == 0);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd4) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd5) = 6;
  wai();
  *(byte *)ZEXT23(puVar7) = in_DBR;
  *(byte *)ZEXT23(puVar7 + -1) =
       in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_CF;
  *(undefined1 *)ZEXT23(puVar7 + -2) = 3;
  bVar13 = *(byte *)ZEXT23(puVar7 + -2);
  uVar4 = 0x6e20;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2116) = 0x20;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2117) = 0x6e;
  *(undefined1 *)ZEXT23(puVar7 + -2) = 0x17;
  *(undefined1 *)ZEXT23(puVar7 + -3) = 0x81;
  *(undefined1 *)ZEXT23(puVar7 + -4) = 0x15;
  puVar8 = puVar7 + -5;
  sub_69957();
  *(char *)((uint3)bVar13 * 0x10000 + 0x4f3) = (char)uVar4;
  *(char *)((uint3)bVar13 * 0x10000 + 0x4f4) = (char)(uVar4 >> 8);
  *(undefined1 *)ZEXT23(puVar8) = 0x81;
  *(undefined1 *)ZEXT23(puVar8 + -1) = 0x20;
  puVar9 = puVar8 + -2;
  sub_178195();
  *(undefined1 *)ZEXT23(puVar9) = 0x81;
  *(undefined1 *)ZEXT23(puVar9 + -1) = 0x26;
  puVar10 = puVar9 + -2;
  sub_178195();
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2116) = 0x20;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2117) = 0x6f;
  *(undefined1 *)ZEXT23(puVar10) = 0x81;
  *(undefined1 *)ZEXT23(puVar10 + -1) = 0x32;
  puVar11 = puVar10 + -2;
  sub_178195();
  *(undefined1 *)ZEXT23(puVar11) = 0x81;
  *(undefined1 *)ZEXT23(puVar11 + -1) = 0x38;
  puVar12 = puVar11 + -2;
  sub_178195();
  uVar4 = ((byte)(&UNK_00c473)[(uint3)bVar13 * 0x10000 + (uint3)uVar4] & 0x1c) << 7;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2102) = 1;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2103) = 0;
  if ((bool)in_DF) {
    uVar2 = (uint)uVar4 + 0x142;
    if (0x9ff < uVar2) {
      uVar2 = (uint)uVar4 + 0x742;
    }
    uVar2 = (uint)(0xfff < uVar2) * 0x1000 + 0x3000 + (uVar2 & 0xfff);
  }
  else {
    uVar2 = (uint)uVar4 + 0x30e2;
  }
  if ((bool)in_DF && 0x9fff < uVar2) {
    uVar2 = uVar2 + 0x6000;
  }
  uVar4 = CONCAT11(*(undefined1 *)((uint3)bVar13 * 0x10000 + 0xd5),
                   *(undefined1 *)((uint3)bVar13 * 0x10000 + 0xd4));
  if ((bool)in_DF) {
    uVar3 = (uVar2 & 0xf) + ((uint)uVar4 & 0xf);
    if (9 < uVar3) {
      uVar3 = uVar3 + 6;
    }
    uVar3 = (uVar2 & 0xf0) + ((uint)uVar4 & 0xf0) + (uint)(0xf < uVar3) * 0x10 + (uVar3 & 0xf);
    if (0x9f < uVar3) {
      uVar3 = uVar3 + 0x60;
    }
    uVar3 = (uVar2 & 0xf00) + ((uint)uVar4 & 0xf00) + (uint)(0xff < uVar3) * 0x100 + (uVar3 & 0xff);
    if (0x9ff < uVar3) {
      uVar3 = uVar3 + 0x600;
    }
    uVar2 = (uVar2 & 0xf000) + ((uint)uVar4 & 0xf000) + (uint)(0xfff < uVar3) * 0x1000 +
            (uVar3 & 0xfff);
  }
  else {
    uVar2 = uVar2 + uVar4;
  }
  if ((bool)in_DF && 0x9fff < uVar2) {
    uVar2 = uVar2 + 0x6000;
  }
  *(char *)((uint3)bVar13 * 0x10000 + 0x2104) = (char)uVar2;
  *(char *)((uint3)bVar13 * 0x10000 + 0x2104) = (char)uVar2;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2102) = 1;
  *(undefined1 *)((uint3)bVar13 * 0x10000 + 0x2103) = 0;
  unknown_native_status_pull();
  bVar13 = *(byte *)ZEXT23(puVar12 + 2);
  do {
  } while (CONCAT11(*(undefined1 *)((uint3)bVar13 * 0x10000 + 0xc94),
                    *(undefined1 *)((uint3)bVar13 * 0x10000 + 0xc93)) != 0);
  (&UNK_00164b)[(uint3)bVar13 * 0x10000] = 0;
  *(undefined1 *)ZEXT23(puVar12 + 2) = 0x17;
  *(undefined1 *)ZEXT23(puVar12 + 1) = 0x81;
  *(undefined1 *)ZEXT23(puVar12) = 0x72;
  sub_917b();
  unknown_native_status_pull();
  return;
}


