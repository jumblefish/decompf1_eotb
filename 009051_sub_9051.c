// 009051  sub_9051  body=91  callers=0
// params: undefined sub_9051(void)

/* WARNING: Removing unreachable block (bus,0x00907b) */
/* WARNING: Removing unreachable block (bus,0x009088) */

void sub_9051(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  short sVar5;
  undefined2 in_C;
  undefined2 in_X;
  undefined2 in_Y;
  BADSPACEBASE *in_SP;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 in_DBR;
  byte bVar9;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  undefined1 *puVar4;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(char *)ZEXT23(&uStack_1) = (char)((ushort)in_C >> 8);
  *(char *)ZEXT23(&uStack_2) = (char)in_C;
  *(undefined1 *)ZEXT23(&uStack_3) = in_DBR;
  *(char *)ZEXT23(&uStack_4) = (char)((ushort)in_X >> 8);
  *(char *)ZEXT23(&uStack_5) = (char)in_X;
  *(char *)ZEXT23(&uStack_6) = (char)((ushort)in_Y >> 8);
  *(char *)ZEXT23(&uStack_7) = (char)in_Y;
  *(undefined1 *)ZEXT23(&uStack_8) = 0;
  bVar9 = *(byte *)ZEXT23(&uStack_8);
  *(undefined1 *)ZEXT23(&uStack_8) = 0x90;
  *(undefined1 *)ZEXT23(&uStack_9) = 0x68;
  puVar6 = &uStack_a;
  func_0x009c88();
  *(undefined1 *)ZEXT23(puVar6) = 0;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 0x90;
  *(undefined1 *)ZEXT23(puVar6 + -2) = 0x6c;
  puVar7 = puVar6 + -3;
  sub_90af();
  do {
  } while (*(char *)((uint3)bVar9 * 0x10000 + 0xea) != '\0');
  *(undefined1 *)ZEXT23(puVar7) = 0;
  *(undefined1 *)ZEXT23(puVar7 + -1) = 0x90;
  *(undefined1 *)ZEXT23(puVar7 + -2) = 0x75;
  puVar8 = puVar7 + -3;
  sub_917b();
  do {
  } while ((*(byte *)((uint3)bVar9 * 0x10000 + 0x84) & 0x40) != 0);
  do {
  } while (CONCAT11(*(undefined1 *)((uint3)bVar9 * 0x10000 + 0x9a),
                    *(undefined1 *)((uint3)bVar9 * 0x10000 + 0x99)) != 0);
  do {
  } while ((*(byte *)((uint3)bVar9 * 0x10000 + 0x86) & 0xf) != 0);
  puVar3 = (undefined1 *)((uint3)bVar9 * 0x10000 + 0xcc);
  puVar4 = (undefined1 *)((uint3)bVar9 * 0x10000 + 0xcd);
  sVar5 = CONCAT11(*puVar4,*puVar3) + -1;
  *puVar3 = (char)sVar5;
  *puVar4 = (char)((ushort)sVar5 >> 8);
  do {
  } while (sVar5 != 0);
  bVar1 = *(byte *)((uint3)bVar9 * 0x10000 + 0x84);
  bVar2 = *(byte *)((uint3)bVar9 * 0x10000 + 0x86);
  *(undefined1 *)((uint3)bVar9 * 0x10000 + 0x85) = *(undefined1 *)((uint3)bVar9 * 0x10000 + 0x85);
  *(byte *)((uint3)bVar9 * 0x10000 + 0x86) = bVar1 & 0xf | bVar2;
  *(undefined1 *)((uint3)bVar9 * 0x10000 + 0xcc) = 10;
  *(undefined1 *)((uint3)bVar9 * 0x10000 + 0xcd) = 0;
  unknown_native_status_pull();
                    /* WARNING: Could not recover jumptable at 0x0090ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  unknown_native_status_pull();
  (*(code *)CONCAT12(*(undefined1 *)ZEXT23(puVar8 + 0xc),
                     CONCAT11(*(undefined1 *)ZEXT23(puVar8 + 0xb),*(undefined1 *)ZEXT23(puVar8 + 10)
                             )))();
  return;
}


