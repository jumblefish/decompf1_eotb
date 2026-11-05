// 02e505  sub_2e505  body=191  callers=1
// params: undefined sub_2e505(void)

void sub_2e505(void)

{
  undefined1 *puVar1;
  char cVar3;
  short sVar4;
  BADSPACEBASE *in_SP;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte in_DBR;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  undefined1 *puVar2;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf6) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf7) = 0xc;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf8) = 0;
  cVar3 = ' ';
  *(undefined1 *)ZEXT23(&uStack_1) = 0xe5;
  *(undefined1 *)ZEXT23(&uStack_2) = 0x15;
  puVar5 = &uStack_3;
  func_0x02e59b();
  *(char *)((uint3)in_DBR * 0x10000 + 0x2110) = cVar3;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  do {
  } while (cVar3 != '\0');
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xeb) = 1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xec) = 0xb0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xed) = 0xff;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xee) = 0xdf;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xef) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf0) = 0x81;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf1) = 0x10;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf2) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf3) = 0xff;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf4) = 0xff;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf5) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420b) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420c) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4300) = 3;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4301) = 0xf;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4302) = 0xeb;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4303) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x4304) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420c) = 1;
  *(undefined1 *)ZEXT23(puVar5) = 0xe5;
  *(undefined1 *)ZEXT23(puVar5 + -1) = 0x66;
  puVar6 = puVar5 + -2;
  func_0x02e59b();
  cVar3 = *(char *)((uint3)in_DBR * 0x10000 + 0xeb) + '\x01';
  *(char *)((uint3)in_DBR * 0x10000 + 0xeb) = cVar3;
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xee);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xef);
  sVar4 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar4;
  *puVar2 = (char)((ushort)sVar4 >> 8);
  puVar1 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf3);
  puVar2 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0xf4);
  sVar4 = CONCAT11(*puVar2,*puVar1) + -1;
  *puVar1 = (char)sVar4;
  *puVar2 = (char)((ushort)sVar4 >> 8);
  do {
  } while (cVar3 != '\x7f');
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xf0) = 0;
  *(undefined1 *)ZEXT23(puVar6) = 0xe5;
  *(undefined1 *)ZEXT23(puVar6 + -1) = 0x81;
  puVar7 = puVar6 + -2;
  func_0x02e59b();
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x420c) = 0;
  sVar4 = 0x50;
  *(char *)((uint3)in_DBR * 0x10000 + 0x2110) = *(char *)((uint3)in_DBR * 0x10000 + 0xee) + -1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = 0;
  *(undefined1 *)ZEXT23(puVar7) = 0xe5;
  *(undefined1 *)ZEXT23(puVar7 + -1) = 0x94;
  func_0x02e59b();
  do {
  } while (sVar4 != 1);
  unknown_native_status_pull();
  return;
}


