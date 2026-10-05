
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0880696c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_08806958(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined2 unaff_r5;
  undefined2 *unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 extraout_s6;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_lr = 0x880695c;
    uVar8 = func_0x076f3f84();
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xb,in_cr12,unaff_r11);
    coprocessor_storelong(0xc,in_cr11,in_r12);
  }
  uVar5 = *(undefined8 *)(unaff_lr + 0x38);
  uVar6 = *(undefined8 *)(unaff_lr + 0x40);
  uVar7 = *(undefined8 *)(unaff_lr + 0x48);
  uVar1 = (undefined4)*(undefined8 *)(unaff_lr + 0x50);
  if (in_NG != in_OV) {
    unaff_lr = 0x880696c;
    uVar1 = func_0x07667ec4();
    uVar8 = CONCAT44(extraout_r1,uVar1);
    in_r12 = extraout_r12_00;
    uVar1 = extraout_s6;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8806970;
    uVar8 = func_0x076ebfd8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                            (int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                            (int)((ulonglong)uVar7 >> 0x20),uVar1);
    in_r12 = extraout_r12_01;
  }
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  if ((bool)in_ZR || in_NG != in_OV) {
    *unaff_r11 = unaff_r5;
  }
  if ((bool)in_ZR) {
    coprocessor_store(0,in_cr11,in_r12 + 0x2c);
    piVar2 = (int *)((uint)uVar8 & unaff_lr & unaff_lr);
    piVar3 = (int *)((int)piVar2 - unaff_lr);
    *piVar2 = (int)piVar3;
    piVar2[1] = iVar4;
    *piVar3 = (int)(piVar3 + -0x2201a63);
    piVar3[1] = iVar4;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr13,in_r12);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(0xe,in_cr14,&stack0x00000340);
  }
  coprocessor_function(0,0,0,in_cr0,in_cr14,in_cr0);
  coprocessor_function(0,0xe,0,in_cr0,in_cr14,in_cr0);
  coprocessor_function(0,0xe,0,in_cr0,in_cr14,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

