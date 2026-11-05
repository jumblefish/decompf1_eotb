// 02f024  sub_2f024  body=32  callers=3
// params: undefined sub_2f024(void)

/* WARNING: Removing unreachable block (bus,0x02f041) */
/* WARNING: Removing unreachable block (bus,0x02f042) */
/* WARNING: Removing unreachable block (bus,0x02f043) */

void sub_2f024(void)

{
  BADSPACEBASE *in_SP;
  undefined1 in_DBR;
  byte bVar1;
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
  *(undefined1 *)ZEXT23(&uStack_2) = uBus02f02b;
  bVar1 = *(byte *)ZEXT23(&uStack_2);
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x3000) = 0x32;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x3001) = 0x20;
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


