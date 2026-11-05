// 02e2e3  sub_2e2e3  body=83  callers=1
// params: undefined sub_2e2e3(void)

void sub_2e2e3(void)

{
  undefined1 *puVar1;
  short sVar3;
  short sVar4;
  BADSPACEBASE *in_SP;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte in_DBR;
  undefined1 uStack_2;
  undefined1 uStack_1;
  undefined1 *puVar2;
  
  sVar4 = CONCAT11(uBus02e2e5,uBus02e2e4);
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7);
  sVar3 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar3;
  *puVar2 = (char)((ushort)sVar3 >> 8);
  *(undefined1 *)ZEXT23(&stack0x0000) = 0xe2;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xeb;
  puVar5 = &uStack_2;
  func_0x02e33d();
  do {
  } while (sVar4 != 1);
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7);
  sVar3 = CONCAT11(*puVar2,*puVar1) + 1;
  *puVar1 = (char)sVar3;
  *puVar2 = (char)((ushort)sVar3 >> 8);
  *(undefined1 *)ZEXT23(puVar5) = 0xe2;
  *(undefined1 *)ZEXT23(puVar5 + -1) = 0xf9;
  puVar6 = puVar5 + -2;
  func_0x02e33d();
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7);
  sVar3 = CONCAT11(*puVar2,*puVar1) + 1;
  *puVar1 = (char)sVar3;
  *puVar2 = (char)((ushort)sVar3 >> 8);
  *(undefined1 *)ZEXT23(puVar6) = 0xe2;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 0xff;
  func_0x02e33d();
  return;
}


