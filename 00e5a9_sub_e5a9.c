// 00e5a9  sub_e5a9  body=5  callers=1
// params: undefined sub_e5a9(void)

/* WARNING: Removing unreachable block (bus,0x008001) */
/* WARNING: Removing unreachable block (bus,0x00810d) */
/* WARNING: Removing unreachable block (bus,0x008123) */
/* WARNING: Removing unreachable block (bus,0x008024) */
/* WARNING: Removing unreachable block (bus,0x00804d) */
/* WARNING: Removing unreachable block (bus,0x00804f) */
/* WARNING: Removing unreachable block (bus,0x00807f) */
/* WARNING: Removing unreachable block (bus,0x008081) */
/* WARNING: Removing unreachable block (bus,0x00810b) */
/* WARNING: Removing unreachable block (bus,0x008125) */
/* WARNING: Removing unreachable block (bus,0x008195) */
/* WARNING: Removing unreachable block (bus,0x008197) */
/* WARNING: Removing unreachable block (bus,0x0081b5) */

void sub_e5a9(void)

{
  undefined1 in_PBR;
  BADSPACEBASE *in_SP;
  byte bVar1;
  char in_VF;
  char in_DF;
  char in_IF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
                    /* WARNING: Do nothing block with infinite loop */
  *(undefined1 *)ZEXT23(&stack0x0000) = in_PBR;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xe5;
  *(undefined1 *)ZEXT23(&uStack_2) = 0xae;
  *(byte *)ZEXT23(&uStack_3) =
       ((bBus00e5ab & 0x80) != 0) << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 |
       (CONCAT11(bBus00e5ab,uBus00e5aa) == 0) << 1 | in_CF;
  *(undefined1 *)(uint3)(ushort)Reset = 0;
  bVar1 = *(byte *)(uint3)(ushort)Reset;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2100) = 0x80;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2181) = 0;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2182) = 0;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2183) = 0;
  *(undefined1 *)((uint3)bVar1 * 0x10000 + 0x2180) = 0;
  do {
  } while( true );
}


