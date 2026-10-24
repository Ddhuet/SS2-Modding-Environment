
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08b08046) */
/* WARNING: Removing unreachable block (ram,0x06d88026) */

void FUN_08b08002(void)

{
  undefined4 unaff_r5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x09e3550e();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    func_0x07c8801a();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0,in_cr0,unaff_r5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

