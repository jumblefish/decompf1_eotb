// 02e5c4  sub_2e5c4  body=37  callers=2
// params: undefined sub_2e5c4(void)

void sub_2e5c4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort in_X;
  undefined2 in_Y;
  BADSPACEBASE *in_SP;
  undefined1 in_DBR;
  byte bVar3;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(undefined1 *)ZEXT23(&uStack_1) = in_DBR;
  bVar3 = *(byte *)ZEXT23(&uStack_1);
  *(char *)ZEXT23(&uStack_1) = (char)((ushort)in_Y >> 8);
  *(char *)ZEXT23(&uStack_2) = (char)in_Y;
  *(char *)ZEXT23(&uStack_3) = (char)(in_X >> 8);
  *(char *)ZEXT23(&uStack_4) = (char)in_X;
  uVar1 = *(undefined1 *)((uint3)bVar3 * 0x10000 + 0xeb);
  uVar2 = *(undefined1 *)((uint3)bVar3 * 0x10000 + 0xec);
  *(undefined1 *)((uint3)bVar3 * 0x10000 + (uint3)in_X + 0x3000) = 0x32;
  *(undefined1 *)((uint3)bVar3 * 0x10000 + (uint3)in_X + 0x3001) = 0;
  do {
  } while (CONCAT11(uVar2,uVar1) != 1);
  do {
  } while (CONCAT11(*(undefined1 *)ZEXT23(&uStack_1),*(undefined1 *)ZEXT23(&uStack_2)) != 1);
  unknown_native_status_pull();
  return;
}


