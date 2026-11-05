// 02e604  sub_2e604  body=28  callers=2
// params: undefined sub_2e604(void)

/* WARNING: Removing unreachable block (bus,0x02e61d) */
/* WARNING: Removing unreachable block (bus,0x02e61e) */
/* WARNING: Removing unreachable block (bus,0x02e61f) */

void sub_2e604(void)

{
  undefined1 in_A;
  ushort in_X;
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
  *(byte *)ZEXT23(&uStack_1) = in_DBR;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2121) = in_A;
  *(undefined1 *)ZEXT23(&uStack_2) = 2;
  wai();
  *(undefined1 *)((uint3)*(byte *)ZEXT23(&uStack_2) * 0x10000 + 0x2122) =
       *(undefined1 *)((uint3)*(byte *)ZEXT23(&uStack_2) * 0x10000 + (uint3)in_X);
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


