
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827db68(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  int unaff_r9;
  int iVar2;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 in_d7;
  undefined8 in_d30;
  undefined1 auVar3 [16];
  
  iVar2 = unaff_r9;
  if (in_NG != in_OV) {
    iVar2 = unaff_r9 + 0x2cc;
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined1 **)(unaff_r6 + 4) = param_1;
    *(undefined4 *)(unaff_r6 + 8) = param_2;
    *(undefined4 *)(unaff_r6 + 0xc) = param_3;
    *(undefined4 *)(unaff_r6 + 0x10) = param_4;
    *(undefined4 *)(unaff_r6 + 0x14) = unaff_r4;
    *(undefined4 *)(unaff_r6 + 0x18) = unaff_r5;
    *(undefined4 *)(unaff_r6 + 0x1c) = unaff_r7;
    *(int *)(unaff_r6 + 0x20) = iVar2;
    *(undefined4 *)(unaff_r6 + 0x24) = unaff_lr;
    *(undefined4 *)(unaff_r6 + 0x28) = 0x827db74;
  }
  *param_1 = 0;
  uVar1 = VectorGetElement(in_d7,1,4,0);
  auVar3 = VectorDoubleMultiplyLong(in_d30,uVar1,4,0);
  SatQ(auVar3,4,0);
  if (in_ZR) {
    coprocessor_function(7,0,0,in_cr0,in_cr10,in_cr3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

