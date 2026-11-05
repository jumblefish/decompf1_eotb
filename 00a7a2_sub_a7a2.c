// 00a7a2  sub_a7a2  body=184  callers=1
// params: undefined sub_a7a2(void)

/* WARNING: Removing unreachable block (bus,0x00a7d8) */
/* WARNING: Removing unreachable block (bus,0x00a7d9) */
/* WARNING: Removing unreachable block (bus,0x00a7cf) */
/* WARNING: Removing unreachable block (bus,0x00a7d6) */
/* WARNING: Removing unreachable block (bus,0x00a7db) */
/* WARNING: Removing unreachable block (bus,0x00a858) */
/* WARNING: Removing unreachable block (bus,0x00a859) */

void sub_a7a2(void)

{
  BADSPACEBASE *in_SP;
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
  *(undefined1 *)ZEXT23(&uStack_1) = uBus00a7a8;
  bVar1 = *(byte *)ZEXT23(&uStack_1);
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0xd4) = 0;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0xd5) = 0x10;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xa7;
  *(undefined1 *)ZEXT23(&uStack_2) = 0xb6;
  func_0x008d2f();
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2116) = 0x6a;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2117) = 1;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2118) = 1;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2119) = 0;
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


