// 02e620  sub_2e620  body=25  callers=1
// params: undefined sub_2e620(void)

/* WARNING: Removing unreachable block (bus,0x02e70e) */
/* WARNING: Removing unreachable block (bus,0x02e71d) */
/* WARNING: Removing unreachable block (bus,0x02e71f) */
/* WARNING: Removing unreachable block (bus,0x02e720) */

void sub_2e620(void)

{
  undefined1 uVar1;
  BADSPACEBASE *in_SP;
  undefined1 in_DBR;
  byte bVar2;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(undefined1 *)ZEXT23(&stack0x0000) = in_DBR;
  *(byte *)ZEXT23(&uStack_1) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(undefined1 *)ZEXT23(&uStack_2) = uBus02e625;
  bVar2 = *(byte *)ZEXT23(&uStack_2);
  *(undefined1 *)((uint3)bVar2 * 0x10000 + 0x2116) = 0;
  *(undefined1 *)((uint3)bVar2 * 0x10000 + 0x2117) = 0x5c;
  *(undefined1 *)((uint3)bVar2 * 0x10000 + 0x2100) = 0x80;
  uVar1 = (&UNK_00e967)[(uint3)bVar2 * 0x10000];
  *(undefined *)((uint3)bVar2 * 0x10000 + 0x2118) = (&UNK_00e966)[(uint3)bVar2 * 0x10000];
  *(undefined1 *)((uint3)bVar2 * 0x10000 + 0x2119) = uVar1;
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


