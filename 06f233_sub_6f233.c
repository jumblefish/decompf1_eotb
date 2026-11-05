// 06f233  sub_6f233  body=221  callers=1
// params: undefined sub_6f233(void)

/* WARNING: Removing unreachable block (bus,0x06f24d) */
/* WARNING: Removing unreachable block (bus,0x06f26e) */
/* WARNING: Removing unreachable block (bus,0x06f270) */
/* WARNING: Removing unreachable block (bus,0x06f292) */
/* WARNING: Removing unreachable block (bus,0x06f294) */
/* WARNING: Removing unreachable block (bus,0x06f2f7) */
/* WARNING: Removing unreachable block (bus,0x06f2f9) */
/* WARNING: Removing unreachable block (bus,0x06f2fd) */
/* WARNING: Removing unreachable block (bus,0x06f302) */
/* WARNING: Removing unreachable block (bus,0x06f304) */
/* WARNING: Removing unreachable block (bus,0x06f30e) */
/* WARNING: Removing unreachable block (bus,0x06f30f) */

void sub_6f233(void)

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
  *(undefined *)((uint3)*(byte *)ZEXT23(&uStack_2) * 0x10000 + 0xb36) =
       (&UNK_00f310)[(uint3)*(byte *)ZEXT23(&uStack_2) * 0x10000];
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


