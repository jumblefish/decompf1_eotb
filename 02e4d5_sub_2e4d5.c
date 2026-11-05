// 02e4d5  sub_2e4d5  body=30  callers=4
// params: undefined sub_2e4d5(void)

void sub_2e4d5(void)

{
  undefined1 in_A;
  char cVar1;
  BADSPACEBASE *in_SP;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte in_DBR;
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
  *(undefined1 *)ZEXT23(&uStack_1) = in_A;
  *(undefined1 *)ZEXT23(&uStack_2) = 2;
  *(undefined1 *)ZEXT23(&uStack_3) = 0xe4;
  *(undefined1 *)ZEXT23(&uStack_4) = 0xdc;
  puVar2 = &uStack_5;
  sub_17b328();
  *(undefined1 *)ZEXT23(puVar2 + 1) = *(undefined1 *)ZEXT23(puVar2 + 1);
  wai();
  cVar1 = *(char *)((uint3)in_DBR * 0x10000 + 0xcf);
  do {
  } while (cVar1 != '\0');
  *(undefined1 *)ZEXT23(puVar2) = 2;
  *(undefined1 *)ZEXT23(puVar2 + -1) = 0xe4;
  *(undefined1 *)ZEXT23(puVar2 + -2) = 0xe8;
  puVar3 = puVar2 + -3;
  sub_17b335();
  do {
  } while (cVar1 != '\0');
  do {
  } while (*(char *)ZEXT23(puVar3 + 1) != '\x01');
  unknown_native_status_pull();
  return;
}


