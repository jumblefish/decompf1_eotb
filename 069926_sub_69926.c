// 069926  sub_69926  body=49  callers=2
// params: undefined sub_69926(void)

void sub_69926(void)

{
  undefined1 uVar1;
  undefined1 in_A;
  undefined1 in_YLow;
  BADSPACEBASE *in_SP;
  undefined1 *puVar2;
  byte in_DBR;
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
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4202) = in_A;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4203) = in_YLow;
  *(undefined1 *)ZEXT23(&uStack_1) = 0x99;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x32;
  puVar2 = &uStack_3;
  sub_6c4eb();
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4217);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xcda) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4216);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xcdb) = uVar1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4203) = 0;
  *(undefined1 *)ZEXT23(puVar2) = 0x99;
  *(undefined1 *)ZEXT23(puVar2 + -1) = 0x46;
  sub_6c4eb();
  unknown_native_status_pull();
  return;
}


