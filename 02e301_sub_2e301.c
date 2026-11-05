// 02e301  sub_2e301  body=30  callers=1
// params: undefined sub_2e301(void)

void sub_2e301(void)

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
  
  sVar4 = CONCAT11(uBus02e303,uBus02e302);
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf8);
  sVar3 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar3;
  *puVar2 = (char)((ushort)sVar3 >> 8);
  *(undefined1 *)ZEXT23(&stack0x0000) = 0xe3;
  *(undefined1 *)ZEXT23(&uStack_1) = 9;
  puVar5 = &uStack_2;
  func_0x02e33d();
  do {
  } while (sVar4 != 1);
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf8);
  sVar3 = CONCAT11(*puVar2,*puVar1) + 1;
  *puVar1 = (char)sVar3;
  *puVar2 = (char)((ushort)sVar3 >> 8);
  *(undefined1 *)ZEXT23(puVar5) = 0xe3;
  *(undefined1 *)ZEXT23(puVar5 + -1) = 0x17;
  puVar6 = puVar5 + -2;
  func_0x02e33d();
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf8);
  sVar3 = CONCAT11(*puVar2,*puVar1) + 1;
  *puVar1 = (char)sVar3;
  *puVar2 = (char)((ushort)sVar3 >> 8);
  *(undefined1 *)ZEXT23(puVar6) = 0xe3;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 0x1d;
  func_0x02e33d();
  return;
}


