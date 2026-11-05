// 02e2b3  sub_2e2b3  body=48  callers=1
// params: undefined sub_2e2b3(void)

void sub_2e2b3(void)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  BADSPACEBASE *in_SP;
  byte in_DBR;
  undefined1 uStack_1;
  
  sVar3 = CONCAT11(uBus02e2b8,uBus02e2b7);
  sVar2 = CONCAT11(*(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6),
                   *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf5)) + 1;
  uVar4 = (undefined1)sVar2;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = uVar4;
  uVar1 = (undefined1)((ushort)sVar2 >> 8);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = uVar1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = 0;
  *(undefined1 *)ZEXT23(&stack0x0000) = uVar1;
  *(undefined1 *)ZEXT23(&uStack_1) = uVar4;
  do {
  } while (sVar3 != 1);
  *(undefined1 *)ZEXT23(&stack0x0000) = *(undefined1 *)ZEXT23(&stack0x0000);
  *(undefined1 *)ZEXT23(&uStack_1) = *(undefined1 *)ZEXT23(&uStack_1);
  uVar1 = *(undefined1 *)ZEXT23(&uStack_1);
  uVar4 = *(undefined1 *)ZEXT23(&stack0x0000);
  sVar2 = CONCAT11(uVar4,uVar1) + -1;
  *(char *)((uint3)in_DBR * 0x10000 + 0x2110) = (char)sVar2;
  *(char *)((uint3)in_DBR * 0x10000 + 0x2111) = (char)((ushort)sVar2 >> 8);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = 0;
  sVar2 = CONCAT11(uVar4,uVar1) + -2;
  uVar4 = (undefined1)sVar2;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = uVar4;
  uVar1 = (undefined1)((ushort)sVar2 >> 8);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = uVar1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf5) = uVar4;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6) = uVar1;
  return;
}


