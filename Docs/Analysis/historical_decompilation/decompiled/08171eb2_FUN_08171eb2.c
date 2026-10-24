
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08171eb2(undefined4 *param_1)

{
  int unaff_r4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    return CONCAT44(*param_1,param_1 + 10);
  }
  if (in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r4,0x20c000);
    in_NG = unaff_r4 + 0x20c000 < 0;
    in_ZR = unaff_r4 == -0x20c000;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07260982();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

