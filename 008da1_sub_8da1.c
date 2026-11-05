// 008da1  sub_8da1  body=14  callers=1
// params: undefined sub_8da1(void)

void sub_8da1(void)

{
  undefined1 uVar1;
  short sVar2;
  ushort in_X;
  byte in_DBR;
  
  sVar2 = CONCAT11(uBus008da3,uBus008da2);
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)in_X + 1);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2122) =
       *(undefined1 *)((uint3)in_DBR * 0x10000 + (uint3)in_X);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2123) = uVar1;
  do {
  } while (sVar2 != 1);
  return;
}


