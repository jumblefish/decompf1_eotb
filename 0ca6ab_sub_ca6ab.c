// 0ca6ab  sub_ca6ab  body=20  callers=2
// params: undefined sub_ca6ab(void)

void sub_ca6ab(void)

{
  BADSPACEBASE *in_SP;
  undefined1 in_DBR;
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
  *(undefined1 *)ZEXT23(&uStack_1) = in_DBR;
  *(undefined1 *)ZEXT23(&uStack_2) = 0xc;
  do {
  } while (*(char *)((uint3)*(byte *)ZEXT23(&uStack_2) * 0x10000 + 0xa36) != '\0');
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


