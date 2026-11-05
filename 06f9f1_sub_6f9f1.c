// 06f9f1  sub_6f9f1  body=39  callers=1
// params: undefined sub_6f9f1(void)

void sub_6f9f1(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte in_DBR;
  
  uVar2 = CONCAT11(*(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc96),
                   *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc95));
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc9f);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa3a) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc9e);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa3b) = uVar1;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc9c);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa48) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc9b);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa49) = uVar1;
  uVar2 = uVar2 << 1;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa8f);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa72) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa8e);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa73) = uVar1;
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc97);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa56) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + 0xc96);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)uVar2 + 0xa57) = uVar1;
  return;
}


