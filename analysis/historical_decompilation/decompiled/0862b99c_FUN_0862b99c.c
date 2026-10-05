
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08645170) */

void FUN_0862b99c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *extraout_r2;
  undefined4 *puVar1;
  undefined4 unaff_r7;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  
  if (in_NG) {
    return;
  }
  if ((bool)in_ZR || (bool)in_OV != false) {
    if ((bool)in_OV) {
      coprocessor_store(0xb,in_cr6,param_3);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      param_1 = func_0x08b0c378();
      param_3 = extraout_r2;
    }
    if (!(bool)in_OV) {
      puVar1 = (undefined4 *)((int)param_3 + 0x73);
      *param_3 = param_1;
      param_3 = (undefined4 *)((int)puVar1 * 0x801);
      *puVar1 = unaff_r7;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      in_OV = SBORROW4(-0x7ffffff9,unaff_r9);
      in_ZR = unaff_r9 == -0x7ffffff9;
    }
    if ((bool)in_ZR) {
      in_OV = SBORROW4(unaff_r10 >> ((uint)param_3 & 0x1f) |
                       unaff_r10 << 0x20 - ((uint)param_3 & 0x1f),unaff_r11);
    }
    if (!(bool)in_OV) {
      coprocessor_load(0xc,in_cr7,param_3 + -0xa2);
      software_interrupt(0xa27ea2);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_OV) {
    func_0x08daa5bc();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

