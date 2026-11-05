// 00a86c  sub_a86c  body=7  callers=1
// params: undefined sub_a86c(void)

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

void sub_a86c(void)

{
  ushort uVar1;
  undefined1 in_PBR;
  short in_X;
  ushort in_DP;
  BADSPACEBASE *in_SP;
  byte bVar3;
  char in_VF;
  char in_DF;
  char in_IF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  ushort uVar2;
  
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && (char)in_DP == '\0') {
    uVar1 = in_DP | in_X + 0xa8U & 0xff;
  }
  else {
    uVar1 = in_DP + in_X + 0xa8U;
  }
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && (char)in_DP == '\0') {
    uVar2 = in_DP | in_X + 0xa9U & 0xff;
  }
  else {
    uVar2 = in_DP + in_X + 0xa9U;
  }
  *(undefined1 *)(uint3)uVar1 = 0;
  *(undefined1 *)(uint3)uVar2 = 0;
  *(undefined1 *)ZEXT23(&stack0x0000) = in_PBR;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xa8;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x73;
  *(byte *)ZEXT23(&uStack_3) =
       ((bBus00a86e & 0x80) != 0) << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 |
       (CONCAT11(bBus00a86e,uBus00a86d) == 0) << 1 | in_CF;
  *(undefined1 *)(uint3)(ushort)Reset = 0;
  bVar3 = *(byte *)(uint3)(ushort)Reset;
  *(undefined1 *)((uint3)bVar3 * 0x10000 + 0x2100) = 0x80;
  *(undefined1 *)((uint3)bVar3 * 0x10000 + 0x2181) = 0;
  *(undefined1 *)((uint3)bVar3 * 0x10000 + 0x2182) = 0;
  *(undefined1 *)((uint3)bVar3 * 0x10000 + 0x2183) = 0;
  *(undefined1 *)((uint3)bVar3 * 0x10000 + 0x2180) = 0;
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


