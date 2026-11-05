// 02e28c  sub_2e28c  body=39  callers=2
// params: undefined sub_2e28c(void)

void sub_2e28c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ushort uVar6;
  short sVar8;
  undefined1 uVar9;
  ushort uVar10;
  short in_X;
  ushort in_DP;
  byte in_DBR;
  uint in_register_00000040;
  undefined1 *puVar5;
  ushort uVar7;
  
  uVar10 = CONCAT11(uBus02e28e,uBus02e28d);
  uVar1 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x9c21);
  uVar2 = *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x9c22);
  uVar9 = (&UNK_008d21)[(uint3)in_DBR * 0x10000];
  uVar3 = (&UNK_008d22)[(uint3)in_DBR * 0x10000];
  sVar8 = CONCAT11((&UNK_008d22)[(uint3)in_DBR * 0x10000],(&UNK_008d21)[(uint3)in_DBR * 0x10000]) <<
          1;
  (&UNK_008d21)[(uint3)in_DBR * 0x10000] = (char)sVar8;
  (&UNK_008d22)[(uint3)in_DBR * 0x10000] = (char)((ushort)sVar8 >> 8);
  puVar4 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0x9c21);
  puVar5 = (undefined1 *)((uint3)in_DBR * 0x10000 + 0x9c22);
  sVar8 = CONCAT11(*puVar5,*puVar4) << 1;
  *puVar4 = (char)sVar8;
  *puVar5 = (char)((ushort)sVar8 >> 8);
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && (char)in_DP == '\0') {
    uVar6 = in_DP | in_X + 0x8dU & 0xff;
  }
  else {
    uVar6 = in_DP + in_X + 0x8dU;
  }
  if (((byte)(in_register_00000040 >> 3) & 1) == 1 && (char)in_DP == '\0') {
    uVar7 = in_DP | in_X + 0x8eU & 0xff;
  }
  else {
    uVar7 = in_DP + in_X + 0x8eU;
  }
  uVar10 = (uVar10 | CONCAT11(uVar2,uVar1) | CONCAT11(uVar3,uVar9) | 0xd894) &
           CONCAT11(*(undefined1 *)
                     ((uint3)in_DBR * 0x10000 +
                     (uint3)CONCAT11(*(undefined1 *)(uint3)uVar7,*(undefined1 *)(uint3)uVar6) + 1),
                    *(undefined1 *)
                     ((uint3)in_DBR * 0x10000 +
                     (uint3)CONCAT11(*(undefined1 *)(uint3)uVar7,*(undefined1 *)(uint3)uVar6)));
  do {
  } while ((uVar10 & 0x8000) == 0);
  uVar9 = (undefined1)uVar10;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2110) = uVar9;
  uVar1 = (undefined1)(uVar10 >> 8);
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = uVar1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2112) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2111) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2112) = 0;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2112) = uVar9;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2113) = uVar1;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2112) = uVar9;
  *(undefined1 *)((uint3)in_DBR * 0x10000 + 0x2113) = uVar1;
  return;
}


