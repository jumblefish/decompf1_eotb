// 02f012  sub_2f012  body=5  callers=2
// params: undefined sub_2f012(void)

void sub_2f012(void)

{
  byte bVar1;
  undefined1 in_PBR;
  short sVar2;
  BADSPACEBASE *in_SP;
  char in_VF;
  char in_DF;
  char in_IF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  sVar2 = CONCAT11(bBus02f014,uBus02f013);
  bVar1 = bBus02f014 & 0x80;
  *(undefined1 *)ZEXT23(&stack0x0000) = in_PBR;
  *(undefined1 *)ZEXT23(&uStack_1) = 0xf0;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x17;
  *(byte *)ZEXT23(&uStack_3) =
       (bVar1 != 0) << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | (sVar2 == 0) << 1 |
       in_CF;
  Reset();
  return;
}


