
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868eb5c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *extraout_r2;
  uint unaff_r7;
  int unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar2;
  undefined4 in_cr11;
  
  puVar1 = param_3;
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_3 + ((int)param_3 >> 0xb));
    *param_3 = unaff_r11;
  }
  bVar2 = in_CY;
  if (!in_ZR && in_NG == in_OV) {
    bVar2 = 0xffffff5d < unaff_r7 || CARRY4(unaff_r7 + 0xa2,(uint)in_CY);
    in_OV = SCARRY4(unaff_r7,0xa2) != SCARRY4(unaff_r7 + 0xa2,(uint)in_CY);
    param_1 = unaff_r7 + 0xa2 + (uint)in_CY;
    in_NG = param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r9,-0x7ffffff5) != SCARRY4(unaff_r9 + -0x7ffffff5,(uint)bVar2);
    in_NG = (int)(unaff_r9 + -0x7ffffff5 + (uint)bVar2) < 0;
  }
  if (in_NG != in_OV) {
    func_0x086bf658(param_1,param_2,puVar1);
    puVar1 = extraout_r2;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xc,in_cr11,puVar1 + 0x72);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

