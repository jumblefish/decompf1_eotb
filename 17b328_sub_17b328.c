// 17b328  sub_17b328  body=13  callers=1
// params: undefined sub_17b328(void)

void sub_17b328(void)

{
  BADSPACEBASE *in_SP;
  byte in_DBR;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x85) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x86) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x8d) = 0;
  unknown_native_status_pull();
  return;
}


