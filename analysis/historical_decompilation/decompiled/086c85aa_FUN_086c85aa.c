
/* WARNING: Control flow encountered bad instruction data */

void FUN_086c85aa(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *unaff_r4;
  undefined4 *puVar2;
  int *unaff_r8;
  undefined4 *unaff_r10;
  undefined1 unaff_r11;
  undefined4 unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr10;
  undefined8 uVar3;
  
  puVar2 = unaff_r4;
  if (in_NG != in_OV) {
    puVar2 = unaff_r4 + -0x151;
    *(undefined1 *)unaff_r4 = unaff_r11;
  }
  piVar1 = param_2;
  if ((bool)in_NG) {
    piVar1 = (int *)((int)param_2 + 0x4b2);
    puVar2 = (undefined4 *)*param_2;
    uRam086c85be = param_3;
  }
  if (in_NG == in_OV) {
    coprocessor_storelong(0xe,in_cr10,puVar2);
    unaff_lr = 0x86c85c2;
    uVar3 = func_0x097f36d6();
    piVar1 = (int *)((ulonglong)uVar3 >> 0x20);
    param_1 = (int *)uVar3;
  }
  if ((bool)in_NG) {
    *unaff_r10 = param_1;
    *unaff_r8 = (int)puVar2;
  }
  *param_1 = (int)puVar2;
  *puVar2 = unaff_lr;
  if ((bool)in_ZR) {
    *(undefined4 *)((int)(puVar2 + -0x151) * -0x3f) = unaff_lr;
  }
  if ((bool)in_NG) {
    *(char *)piVar1 = (char)(puVar2 + -0x151);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

