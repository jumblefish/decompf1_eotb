// 069957  sub_69957  body=16  callers=1
// params: undefined sub_69957(void)

void sub_69957(void)

{
  undefined1 in_A;
  BADSPACEBASE *in_SP;
  undefined1 in_DBR;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(undefined1 *)ZEXT23(&uStack_1) = in_DBR;
  *(undefined1 *)ZEXT23(&uStack_2) = in_A;
  *(undefined1 *)ZEXT23(&uStack_3) = uBus06995d;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x99;
  *(undefined1 *)ZEXT23(&uStack_3) = 99;
  sub_69926();
  unknown_native_status_pull();
  return;
}


