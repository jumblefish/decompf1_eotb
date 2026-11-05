// 02e76d  sub_2e76d  body=39  callers=1
// params: undefined sub_2e76d(void)

void sub_2e76d(void)

{
  char *pcVar1;
  undefined1 uVar2;
  short sVar3;
  BADSPACEBASE *in_SP;
  byte in_DBR;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  uVar2 = uBus02e771;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf5) = uBus02e771;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7) = uVar2;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf8) = 0;
  sVar3 = 0xf;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xe7;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x85;
  sub_2e4d5();
  pcVar1 = (char *)((uint3)in_DBR * 0x10000 + 0xf6);
  *pcVar1 = *pcVar1 + '\x01';
  pcVar1 = (char *)((uint3)in_DBR * 0x10000 + 0xf8);
  *pcVar1 = *pcVar1 + '\x01';
  do {
  } while (sVar3 != 1);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420c) = 0;
  unknown_native_status_pull();
  return;
}


