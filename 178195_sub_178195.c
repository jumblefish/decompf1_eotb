// 178195  sub_178195  body=26  callers=1
// params: undefined sub_178195(void)

/* WARNING: Removing unreachable block (bus,0x1781ad) */

void sub_178195(void)

{
  undefined1 uVar1;
  uint3 uVar2;
  ushort in_C;
  undefined2 in_X;
  BADSPACEBASE *in_SP;
  byte in_DBR;
  undefined1 uStack_1;
  
  *(char *)ZEXT23(&stack0x0000) = (char)((ushort)in_X >> 8);
  *(char *)ZEXT23(&uStack_1) = (char)in_X;
  uVar2 = (uint3)((in_C & CONCAT11(uBus178198,uBus178197)) << 5);
  uVar1 = (&UNK_00c813)[(uint3)in_DBR * 0x10000 + uVar2];
  *(undefined *)((uint3)in_DBR * 0x10000 + 0x2118) = (&UNK_00c812)[(uint3)in_DBR * 0x10000 + uVar2];
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2119) = uVar1;
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


