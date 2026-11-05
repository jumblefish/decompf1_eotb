// 02e722  sub_2e722  body=75  callers=1
// params: undefined sub_2e722(void)

void sub_2e722(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
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
  uVar3 = uBus02e726;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf5) = uBus02e726;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7) = uVar3;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6) = 0xf;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf8) = 0xf;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xfa) = 0xf;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf9) = 1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xfb) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420b) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420c) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4310) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4311) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4312) = 0xf5;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4313) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4314) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420c) = 2;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xe7;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x62;
  sub_2e4d5();
  pcVar1 = (char *)((uint3)in_DBR * 0x10000 + 0xf6);
  *pcVar1 = *pcVar1 + -1;
  pcVar1 = (char *)((uint3)in_DBR * 0x10000 + 0xf8);
  cVar2 = *pcVar1 + -1;
  *pcVar1 = cVar2;
  do {
  } while (cVar2 != '\0');
  unknown_native_status_pull();
  return;
}


