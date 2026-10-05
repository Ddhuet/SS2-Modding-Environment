
/* WARNING: Control flow encountered bad instruction data */

void FUN_080bee5e(int param_1,int param_2)

{
  int unaff_r6;
  int unaff_r7;
  int *unaff_r9;
  int unaff_r10;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(param_1,0xcc0) != SBORROW4(param_1 + -0xcc0,(uint)!in_CY);
    in_NG = (int)(param_1 - (!in_CY + 0xcc0)) < 0;
    in_ZR = param_1 == !in_CY + 0xcc0;
  }
  else {
    *unaff_r9 = param_1;
    unaff_r9[1] = param_2;
    unaff_r9[2] = unaff_r6;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = (int)unaff_r9;
    unaff_r9[5] = unaff_r10;
    unaff_r9[6] = unaff_lr;
    unaff_r9[7] = 0x80bee76;
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr13,unaff_r9 + 0xd5);
  }
  coprocessor_loadlong2(8,in_cr15,unaff_r10 + 0x3cc);
  if (in_ZR) {
    *(int **)((unaff_lr & 0xff) >> 5) = unaff_r9;
    func_0x0692590e();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

