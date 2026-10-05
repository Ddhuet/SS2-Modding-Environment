
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0826635e(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *unaff_r4;
  uint unaff_r11;
  int iVar4;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar5;
  
  bVar5 = in_CY;
  if (!in_ZR && in_NG == in_OV) {
    bVar5 = 0xd47fffff < unaff_r11 || CARRY4(unaff_r11 + 0x2b800000,(uint)in_CY);
    in_OV = SCARRY4(unaff_r11,0x2b800000) != SCARRY4(unaff_r11 + 0x2b800000,(uint)in_CY);
    iVar4 = unaff_r11 + 0x2b800000 + (uint)in_CY;
    in_NG = iVar4 < 0;
    in_ZR = iVar4 == 0;
  }
  uVar1 = uRam08266356;
  uVar2 = uRam0826635a;
  uVar3 = _FUN_0826635e;
  if ((bool)bVar5) {
    *(undefined4 *)unaff_r4 = unaff_lr;
    uVar1 = param_2;
    uVar2 = param_3;
    uVar3 = param_4;
    unaff_r4 = unaff_r4 + -(in_r12 >> 9);
  }
  if (in_ZR || in_NG != in_OV) {
    uVar1 = (uint)*unaff_r4;
  }
  if (in_NG == in_OV) {
    func_0x06c0da32(param_1,uVar1,uVar2,uVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

