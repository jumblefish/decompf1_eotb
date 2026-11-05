// 02e3db  sub_2e3db  body=30  callers=2
// params: undefined sub_2e3db(void)

/* WARNING: Removing unreachable block (bus,0x02e3f6) */
/* WARNING: Removing unreachable block (bus,0x02e3f7) */
/* WARNING: Removing unreachable block (bus,0x02e3f8) */

void sub_2e3db(void)

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
  *(undefined1 *)ZEXT23(&uStack_2) = uBus02e3e0;
  bVar1 = *(byte *)ZEXT23(&uStack_2);
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x35c0) = 0x33;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x35c1) = 0x20;
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


