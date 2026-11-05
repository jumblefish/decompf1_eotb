// 02e49c  sub_2e49c  body=50  callers=1
// params: undefined sub_2e49c(void)

void sub_2e49c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 in_PBR;
  ushort uVar4;
  short sVar5;
  ushort in_DP;
  BADSPACEBASE *in_SP;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte in_DBR;
  char in_VF;
  char in_DF;
  char in_IF;
  uint in_register_00000040;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd2) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd3) = 0x24;
  sVar5 = 0x2c0e;
  *(undefined1 *)ZEXT23(&stack0x0000) = 2;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xe4;
  *(undefined1 *)ZEXT23(&uStack_2) = 0xa8;
  puVar6 = &uStack_3;
  sub_99bf();
  *(undefined1 *)ZEXT23(puVar6) = 2;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 0xe4;
  *(undefined1 *)ZEXT23(puVar6 + -2) = 0xac;
  puVar7 = puVar6 + -3;
  func_0x009bb0();
  *(undefined1 *)ZEXT23(puVar7) = 0;
  *(undefined1 *)ZEXT23(puVar7 + -1) = 1;
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && (char)in_DP == '\0') {
    uVar4 = in_DP | sVar5 + 0xe4U & 0xff;
  }
  else {
    uVar4 = in_DP + sVar5 + 0xe4U;
  }
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && (char)in_DP == '\0') {
    in_DP = in_DP | sVar5 + 0xe5U & 0xff;
  }
  else {
    in_DP = in_DP + sVar5 + 0xe5U;
  }
  uVar1 = *(undefined1 *)(uint3)uVar4;
  uVar2 = *(undefined1 *)(uint3)in_DP;
  uVar3 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xec);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xeb);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = uVar3;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = 0;
  uVar3 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xed);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x210f) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xec);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = uVar3;
  uVar4 = CONCAT11(uBusebee22,uBusebee21) | 0x8dff;
  *(undefined1 *)ZEXT23(puVar7 + -2) = in_PBR;
  *(undefined1 *)ZEXT23(puVar7 + -3) = 0xe4;
  *(undefined1 *)ZEXT23(puVar7 + -4) = 0xce;
  *(byte *)ZEXT23(puVar7 + -5) =
       ((uVar4 & 0x8000) != 0) << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | (uVar4 == 0) << 1 |
       -1 < 0x2006 - (int)CONCAT11(uVar2,uVar1);
  Reset();
  return;
}


