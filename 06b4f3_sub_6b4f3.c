// 06b4f3  sub_6b4f3  body=125  callers=1
// params: undefined sub_6b4f3(void)

/* WARNING: Removing unreachable block (bus,0x06b51b) */
/* WARNING: Removing unreachable block (bus,0x06b526) */
/* WARNING: Removing unreachable block (bus,0x06b50e) */
/* WARNING: Removing unreachable block (bus,0x06b519) */
/* WARNING: Removing unreachable block (bus,0x06b528) */
/* WARNING: Removing unreachable block (bus,0x06b53d) */
/* WARNING: Removing unreachable block (bus,0x06b53f) */
/* WARNING: Removing unreachable block (bus,0x06b56e) */

void sub_6b4f3(void)

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
  *(undefined1 *)ZEXT23(&uStack_2) = 6;
                    /* WARNING: Read-only address (bus,0x7eee8c) is written */
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


