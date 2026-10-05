
/* WARNING: Control flow encountered bad instruction data */

void FUN_082605ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  undefined2 *extraout_r3;
  undefined2 *extraout_r3_00;
  uint unaff_r4;
  undefined1 *unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  uint unaff_lr;
  undefined1 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar2;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr15;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x82605b0;
    uVar3 = func_0x0724dc6c();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY) {
    unaff_lr = 0x82605b4;
    uVar3 = func_0x0875bd14();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  uVar1 = (undefined4)uVar3;
  if (!(bool)in_NG) {
    unaff_r6 = (undefined1 *)(uint)*(byte *)(unaff_lr - (unaff_r4 >> 0xe | unaff_r4 << 0x12));
  }
  if ((bool)in_CY) {
    software_interrupt(0x3b454e);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xe60b22);
  if ((bool)in_ZR || in_NG != in_OV) {
    *param_4 = (short)unaff_r11;
  }
  if ((bool)in_NG) {
    coprocessor_store(10,in_cr15,(int)((ulonglong)uVar3 >> 0x20));
    uVar2 = true;
  }
  else {
    in_CY = (undefined1 *)0x90000005 < unaff_r11;
    in_OV = SBORROW4((int)unaff_r11,-0x6ffffffa);
    unaff_r6 = unaff_r11 + 0x6ffffffa;
    uVar2 = (int)unaff_r6 < 0;
    in_ZR = unaff_r6 == (undefined1 *)0x0;
  }
  if ((bool)in_CY) {
    unaff_lr = *(uint *)(unaff_r6 + -4);
    uVar1 = *(undefined4 *)(unaff_r6 + -0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x082605d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == in_OV) {
    if (uVar2 == in_OV) {
      coprocessor_moveto(2,5,4,unaff_r10,in_cr6,in_cr11);
    }
    if ((bool)in_ZR || uVar2 != in_OV) {
      *(char *)(unaff_r8 + 0xeb4) = (char)unaff_r11;
    }
    if (!(bool)uVar2) {
      func_0x08e2297c(uVar1);
    }
    if ((bool)uVar2) {
      software_interrupt(0x585e68);
    }
    if (uVar2 == in_OV) {
      *unaff_r11 = unaff_pc;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r9 - ((in_r12 << (unaff_lr & 0xff)) + (uint)!(bool)in_CY)))();
  return;
}

