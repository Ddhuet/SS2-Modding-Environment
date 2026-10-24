
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a11e88) */

void FUN_08a11e54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r10;
  undefined4 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (!(bool)in_ZR) {
    unaff_r11 = (undefined4 *)
                (((uint)unaff_r11 >> 0x10) << 0x18 | ((uint)unaff_r11 >> 0x18) << 0x10 |
                 ((uint)unaff_r11 & 0xff) << 8 | (uint)unaff_r11 >> 8 & 0xff);
  }
  if ((bool)in_OV) {
    iVar1 = (int)unaff_r11 >> 0x16;
    unaff_r11 = (undefined4 *)SignedSaturate(iVar1,0x18);
    SignedDoesSaturate(iVar1,0x18);
    uVar3 = func_0x0a90093c();
  }
  if (!(bool)in_OV) {
    uVar3 = func_0x078fe940();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar3 = func_0x0a000400();
  }
  uVar2 = (uint)uVar3;
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      uVar2 = func_0x073acacc(uVar2,(int)((ulonglong)uVar3 >> 0x20));
    }
    if (in_NG != in_OV) {
      *unaff_r11 = unaff_r6;
    }
    if ((bool)in_CY) {
      in_OV = SCARRY4(unaff_r5,0x4600000) != SCARRY4(unaff_r5 + 0x4600000,1);
      in_NG = unaff_r5 + 0x4600001 < 0;
      in_ZR = unaff_r5 == -0x4600001;
    }
    if (in_NG != in_OV) {
      uVar2 = func_0x09fe740c();
    }
                    /* WARNING: Could not recover jumptable at 0x08a11e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((bool)in_ZR) {
      (*(code *)(uVar2 & unaff_r10 >> 5))();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

