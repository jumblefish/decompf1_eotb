// 0090af  sub_90af  body=56  callers=1
// params: undefined sub_90af(void)

/* WARNING: Removing unreachable block (bus,0x0090ca) */

void sub_90af(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  BADSPACEBASE *in_SP;
  byte in_DBR;
  char in_NF;
  char in_VF;
  char in_DF;
  char in_IF;
  char in_ZF;
  byte in_CF;
  uint in_register_00000040;
  
  *(byte *)ZEXT23(&stack0x0000) =
       in_NF << 7 | in_VF << 6 | ((byte)in_register_00000040 & 1) << 5 |
       ((byte)(in_register_00000040 >> 1) & 1) << 4 | in_DF << 3 | in_IF << 2 | in_ZF << 1 | in_CF;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x83);
  uVar2 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x84);
  uVar3 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x82);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x83) = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x81);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x84) = uVar3;
  uVar4 = CONCAT11(uVar2,uVar1) &
          CONCAT11(*(undefined1 *)((uint3)in_DBR * 0x10000 + 0x84),
                   *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x83)) ^
          CONCAT11(*(undefined1 *)((uint3)in_DBR * 0x10000 + 0x84),
                   *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x83)) |
          CONCAT11(*(undefined1 *)((uint3)in_DBR * 0x10000 + 0x86),
                   *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x85));
  *(char *)((uint3)in_DBR * 0x10000 + 0x85) = (char)uVar4;
  *(char *)((uint3)in_DBR * 0x10000 + 0x86) = (char)(uVar4 >> 8);
  do {
  } while ((*(byte *)((uint3)in_DBR * 0x10000 + 0x84) & 0x40) != 0);
  do {
  } while ((&UNK_001679)[(uint3)in_DBR * 0x10000] == '\0');
  *(byte *)((uint3)in_DBR * 0x10000 + 0x8d) =
       (*(byte *)((uint3)in_DBR * 0x10000 + 0x85) >> 1 | *(byte *)((uint3)in_DBR * 0x10000 + 0x86))
       & 0xc0 | *(byte *)((uint3)in_DBR * 0x10000 + 0x8d);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


