
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c1984(void)

{
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr7;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr7,in_cr4);
    in_OV = SBORROW4(0x4000000c,unaff_r7) != SBORROW4(0x4000000c - unaff_r7,(uint)!in_CY);
    in_NG = (int)(-(unaff_r7 + (uint)!in_CY) + 0x4000000c) < 0;
    in_ZR = -(unaff_r7 + (uint)!in_CY) == -0x4000000c;
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x078b1c48();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

