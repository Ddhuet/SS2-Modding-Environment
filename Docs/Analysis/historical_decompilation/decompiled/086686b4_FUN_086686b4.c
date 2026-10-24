
/* WARNING: Control flow encountered bad instruction data */

void FUN_086686b4(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int unaff_r4;
  undefined1 *unaff_r7;
  int unaff_r8;
  int unaff_r11;
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  byte bVar2;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr13;
  
  if (in_NG == in_OV) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 & 0x80000028);
    bVar2 = 0x2000000d < param_4 || param_4 + 0xdffffff3 < (uint)in_CY;
    in_OV = SBORROW4(param_4,0x2000000d) != SBORROW4(param_4 + 0xdffffff3,(uint)!in_CY);
    in_NG = (int)(param_4 - (!in_CY + 0x2000000d)) < 0;
    in_ZR = param_4 == !in_CY + 0x2000000d;
  }
  else {
    *param_1 = unaff_r11;
    bVar2 = in_CY;
    param_1 = param_1 + unaff_r8 * 0x100;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(BADSPACEBASE **)(param_3 + (param_3 >> 0xd)) = register0x00000054;
  }
  if (in_NG == in_OV) {
    if (!(bool)in_NG) {
      in_OV = SCARRY4(unaff_r11,unaff_r4) != SCARRY4(unaff_r11 + unaff_r4,(uint)bVar2);
      param_4 = unaff_r11 + unaff_r4 + (uint)bVar2;
      in_NG = (int)param_4 < 0;
      in_ZR = param_4 == 0;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      software_interrupt(0x9160bc);
      uVar1 = (uint)param_1 ^ (int)param_1 >> 0xe4;
      in_NG = (int)uVar1 < 0;
      in_ZR = uVar1 == 0;
    }
    else {
      coprocessor_function(0,0,6,in_cr6,in_cr2,in_cr13);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      *unaff_r7 = (char)param_4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

