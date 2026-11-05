// 0ca67a  sub_ca67a  body=49  callers=1
// params: undefined sub_ca67a(void)

void sub_ca67a(void)

{
  BADSPACEBASE *in_SP;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_DBR;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(undefined1 *)ZEXT23(&uStack_1) = in_DBR;
  *(undefined1 *)ZEXT23(&uStack_2) = 0xc;
  *(undefined1 *)ZEXT23(&uStack_2) = 0xc;
  *(undefined1 *)ZEXT23(&uStack_3) = 0xa6;
  *(undefined1 *)ZEXT23(&uStack_4) = 0x8d;
  puVar1 = &uStack_5;
  sub_1d8000();
  *(undefined1 *)ZEXT23(puVar1) = 0xc;
  *(undefined1 *)ZEXT23(puVar1 + -1) = 0xa6;
  *(undefined1 *)ZEXT23(puVar1 + -2) = 0x96;
  puVar2 = puVar1 + -3;
  sub_1d8000();
  *(undefined1 *)ZEXT23(puVar2) = 0xc;
  *(undefined1 *)ZEXT23(puVar2 + -1) = 0xa6;
  *(undefined1 *)ZEXT23(puVar2 + -2) = 0xa2;
  sub_1d8000();
  unknown_native_status_pull();
  return;
}


