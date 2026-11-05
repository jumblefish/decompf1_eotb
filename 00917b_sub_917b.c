// 00917b  sub_917b  body=130  callers=2
// params: undefined sub_917b(void)

/* WARNING: Removing unreachable block (bus,0x0091c5) */
/* WARNING: Removing unreachable block (bus,0x009186) */
/* WARNING: Removing unreachable block (bus,0x0091a2) */
/* WARNING: Removing unreachable block (bus,0x0091e1) */

void sub_917b(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  BADSPACEBASE *in_SP;
  byte in_DBR;
  bool in_DF;
  undefined1 uStack_1;
  
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2102) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2103) = 0;
  bVar1 = *(byte *)((uint3)in_DBR * 0x10000 + 0xd0);
  do {
  } while ((bVar1 & 0x80) == 0);
  sVar4 = (bVar1 ^ 0xff7f) + 1;
  *(char *)ZEXT23(&stack0x0000) = (char)((ushort)sVar4 >> 8);
  *(char *)ZEXT23(&uStack_1) = (char)sVar4;
  uVar5 = (ushort)*(byte *)((uint3)in_DBR * 0x10000 + 0x87);
  uVar2 = CONCAT11(*(undefined1 *)ZEXT23(&stack0x0000),*(undefined1 *)ZEXT23(&uStack_1));
  if (in_DF) {
    uVar3 = ((uint)uVar5 & 0xf) + ((uint)uVar2 & 0xf);
    if (9 < uVar3) {
      uVar3 = uVar3 + 6;
    }
    uVar3 = ((uint)uVar5 & 0xf0) + ((uint)uVar2 & 0xf0) + (uint)(0xf < uVar3) * 0x10 + (uVar3 & 0xf)
    ;
    if (0x9f < uVar3) {
      uVar3 = uVar3 + 0x60;
    }
    uVar3 = ((uint)uVar2 & 0xf00) + (uint)(0xff < uVar3) * 0x100 + (uVar3 & 0xff);
    if (0x9ff < uVar3) {
      uVar3 = uVar3 + 0x600;
    }
    uVar3 = ((uint)uVar2 & 0xf000) + (uint)(0xfff < uVar3) * 0x1000 + (uVar3 & 0xfff);
  }
  else {
    uVar3 = (uint)uVar5 + (uint)uVar2;
  }
  if (in_DF && 0x9fff < uVar3) {
    uVar3 = uVar3 + 0x6000;
  }
  do {
  } while ((int)(short)uVar3 + -0xf7 < 0);
  do {
  } while ((uVar3 & 0x8000) != 0);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x87) = 8;
  bVar1 = ~(&UNK_00164b)[(uint3)in_DBR * 0x10000];
  if (in_DF) {
    uVar3 = ((uint)bVar1 & 0xf) + 9;
    if (uVar3 < 0x10) {
      uVar3 = ((uint)bVar1 & 0xf) + 3;
    }
    uVar3 = ((uint)bVar1 & 0xf0) + (uint)(0xf < uVar3) * 0x10 + (uVar3 & 0xf);
  }
  else {
    uVar3 = (uint)bVar1 + 9;
  }
  if (in_DF && uVar3 < 0x100) {
    uVar3 = uVar3 - 0x60;
  }
  *(char *)((uint3)in_DBR * 0x10000 + 0x2104) = (char)uVar3;
  bVar1 = *(byte *)((uint3)in_DBR * 0x10000 + 0xd1);
  do {
  } while ((bVar1 & 0x80) == 0);
  sVar4 = (bVar1 ^ 0xff7f) + 1;
  *(char *)ZEXT23(&stack0x0000) = (char)((ushort)sVar4 >> 8);
  *(char *)ZEXT23(&uStack_1) = (char)sVar4;
  uVar5 = (ushort)*(byte *)((uint3)in_DBR * 0x10000 + 0x88);
  uVar2 = CONCAT11(*(undefined1 *)ZEXT23(&stack0x0000),*(undefined1 *)ZEXT23(&uStack_1));
  if (in_DF) {
    uVar3 = ((uint)uVar5 & 0xf) + ((uint)uVar2 & 0xf);
    if (9 < uVar3) {
      uVar3 = uVar3 + 6;
    }
    uVar3 = ((uint)uVar5 & 0xf0) + ((uint)uVar2 & 0xf0) + (uint)(0xf < uVar3) * 0x10 + (uVar3 & 0xf)
    ;
    if (0x9f < uVar3) {
      uVar3 = uVar3 + 0x60;
    }
    uVar3 = ((uint)uVar2 & 0xf00) + (uint)(0xff < uVar3) * 0x100 + (uVar3 & 0xff);
    if (0x9ff < uVar3) {
      uVar3 = uVar3 + 0x600;
    }
    uVar3 = ((uint)uVar2 & 0xf000) + (uint)(0xfff < uVar3) * 0x1000 + (uVar3 & 0xfff);
  }
  else {
    uVar3 = (uint)uVar5 + (uint)uVar2;
  }
  if (in_DF && 0x9fff < uVar3) {
    uVar3 = uVar3 + 0x6000;
  }
  do {
  } while ((int)(short)uVar3 + -0xd8 < 0);
  do {
  } while ((uVar3 & 0x8000) != 0);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x88) = 8;
  bVar1 = ~(&UNK_00164b)[(uint3)in_DBR * 0x10000];
  if (in_DF) {
    uVar3 = ((uint)bVar1 & 0xf) + 9;
    if (uVar3 < 0x10) {
      uVar3 = ((uint)bVar1 & 0xf) + 3;
    }
    uVar3 = ((uint)bVar1 & 0xf0) + (uint)(0xf < uVar3) * 0x10 + (uVar3 & 0xf);
  }
  else {
    uVar3 = (uint)bVar1 + 9;
  }
  if (in_DF && uVar3 < 0x100) {
    uVar3 = uVar3 - 0x60;
  }
  *(char *)((uint3)in_DBR * 0x10000 + 0x2104) = (char)uVar3;
  return;
}


