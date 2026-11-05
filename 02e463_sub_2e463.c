// 02e463  sub_2e463  body=57  callers=1
// params: undefined sub_2e463(void)

void sub_2e463(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  short sVar4;
  BADSPACEBASE *in_SP;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte in_DBR;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  undefined1 *puVar3;
  
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd2) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xd3) = 0x24;
  *(undefined1 *)ZEXT23(&stack0x0000) = 2;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xe4;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x6f;
  puVar5 = &uStack_3;
  sub_99bf();
  *(undefined1 *)ZEXT23(puVar5) = 2;
  *(undefined1 *)ZEXT23(puVar5 + -1) = 0xe4;
  *(undefined1 *)ZEXT23(puVar5 + -2) = 0x73;
  puVar6 = puVar5 + -3;
  func_0x009bb0();
  *(undefined1 *)ZEXT23(puVar6) = 0;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 1;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xec);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x210f) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xeb);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = uVar1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x210f) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xed);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xec);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = uVar1;
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xeb);
  puVar3 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xec);
  sVar4 = CONCAT11(*puVar3,*puVar2) + 1;
  *puVar2 = (char)sVar4;
  *puVar3 = (char)((ushort)sVar4 >> 8);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xec);
  puVar3 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xed);
  sVar4 = CONCAT11(*puVar3,*puVar2) + -1;
  *puVar2 = (char)sVar4;
  *puVar3 = (char)((ushort)sVar4 >> 8);
  do {
  } while (CONCAT11(*(undefined1 *)ZEXT23(puVar6),*(undefined1 *)ZEXT23(puVar6 + -1)) != 1);
  return;
}


