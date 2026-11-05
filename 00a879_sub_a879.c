// 00a879  sub_a879  body=17  callers=1
// params: undefined sub_a879(void)

/* WARNING: Removing unreachable block (bus,0x00a889) */

void sub_a879(void)

{
  BADSPACEBASE *in_SP;
  byte in_DBR;
  undefined1 uStack_1;
  
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2100) = 1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2101) = 0;
  *(undefined1 *)ZEXT23(&stack0x0000) = 0xa8;
  *(undefined1 *)ZEXT23(&uStack_1) = 0x82;
  sub_a85a();
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


