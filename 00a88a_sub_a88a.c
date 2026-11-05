// 00a88a  sub_a88a  body=13  callers=1
// params: undefined sub_a88a(void)

void sub_a88a(void)

{
  short sVar1;
  short sVar2;
  byte in_DBR;
  
  sVar2 = sBus00a88b;
  sVar1 = sBus00a88b + -1;
  *(char *)((uint3)in_DBR * 0x10000 + 0x2100) = (char)sVar1;
  *(char *)((uint3)in_DBR * 0x10000 + 0x2101) = (char)((ushort)sVar1 >> 8);
  wai();
  do {
  } while (sVar2 != 1);
  return;
}


