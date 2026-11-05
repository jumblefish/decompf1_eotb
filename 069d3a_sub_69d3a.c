// 069d3a  sub_69d3a  body=80  callers=1
// params: undefined sub_69d3a(void)

void sub_69d3a(void)

{
  undefined1 uVar1;
  uint3 uVar2;
  char cVar3;
  undefined1 uVar4;
  ushort in_X;
  BADSPACEBASE *in_SP;
  undefined1 *puVar5;
  undefined1 in_DBR;
  byte bVar6;
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
  uVar4 = uBus069d3f;
  *(undefined1 *)ZEXT23(&uStack_2) = 6;
  bVar6 = *(byte *)ZEXT23(&uStack_2);
  *(undefined1 *)ZEXT23(&uStack_2) = 0x9d;
  *(undefined1 *)ZEXT23(&uStack_3) = 0x4c;
  puVar5 = &uStack_4;
  sub_69926();
  uVar1 = (undefined1)(in_X >> 8);
  *(undefined1 *)ZEXT23(puVar5) = uVar1;
  *(char *)ZEXT23(puVar5 + -1) = (char)in_X;
  cVar3 = (&UNK_7eaa00)[in_X];
  *(undefined1 *)ZEXT23(puVar5 + -2) = uVar1;
  *(char *)ZEXT23(puVar5 + -3) = (char)in_X;
  uVar2 = (uint3)CONCAT11(uVar4,cVar3 << 1);
  uVar1 = (&UNK_00de9c)[(uint3)bVar6 * 0x10000 + uVar2];
  *(undefined *)((uint3)bVar6 * 0x10000 + 0xcd0) = (&UNK_00de9b)[(uint3)bVar6 * 0x10000 + uVar2];
  *(undefined1 *)((uint3)bVar6 * 0x10000 + 0xcd1) = uVar1;
  uVar2 = (uint3)CONCAT11(uVar4,(&UNK_7eaa01)
                                [CONCAT11(*(undefined1 *)ZEXT23(puVar5 + -2),
                                          *(undefined1 *)ZEXT23(puVar5 + -3))] << 1);
  uVar1 = (&UNK_00de9c)[(uint3)bVar6 * 0x10000 + uVar2];
  *(undefined *)((uint3)bVar6 * 0x10000 + 0xcd2) = (&UNK_00de9b)[(uint3)bVar6 * 0x10000 + uVar2];
  *(undefined1 *)((uint3)bVar6 * 0x10000 + 0xcd3) = uVar1;
  do {
  } while (((&UNK_7eaa02)
            [CONCAT11(*(undefined1 *)ZEXT23(puVar5),*(undefined1 *)ZEXT23(puVar5 + -1))] & 0x40) ==
           0);
  *(undefined1 *)ZEXT23(puVar5) = *(undefined1 *)ZEXT23(puVar5);
  *(undefined1 *)ZEXT23(puVar5 + -1) = *(undefined1 *)ZEXT23(puVar5 + -1);
  do {
  } while (*(char *)((uint3)bVar6 * 0x10000 +
                    (uint3)CONCAT11(*(undefined1 *)((uint3)bVar6 * 0x10000 + 0xcd3),
                                    *(undefined1 *)((uint3)bVar6 * 0x10000 + 0xcd2))) == '\0');
  do {
  } while (((&UNK_7eaa02)
            [CONCAT11(*(undefined1 *)ZEXT23(puVar5),*(undefined1 *)ZEXT23(puVar5 + -1))] & 0x40) ==
           0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


