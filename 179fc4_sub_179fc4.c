// 179fc4  sub_179fc4  body=29  callers=1
// params: undefined sub_179fc4(void)

/* WARNING: Removing unreachable block (bus,0x179fce) */

void sub_179fc4(void)

{
  byte bVar1;
  undefined2 in_X;
  ushort in_Y;
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
  *(char *)ZEXT23(&uStack_1) = (char)((ushort)in_X >> 8);
  *(char *)ZEXT23(&uStack_2) = (char)in_X;
  bVar1 = *(byte *)((uint3)in_DBR * 0x10000 + (uint3)in_Y);
  do {
  } while ((bVar1 & 0xfe) == 0);
  do {
  } while (bVar1 != 0xd);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


