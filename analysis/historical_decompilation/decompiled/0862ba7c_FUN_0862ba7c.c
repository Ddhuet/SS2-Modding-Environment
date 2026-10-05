
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862ba7c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  uint unaff_r9;
  int iVar2;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar3;
  undefined4 in_cr11;
  undefined8 in_d18;
  undefined8 in_d24;
  undefined8 uVar4;
  
  piVar1 = param_3;
  if (in_NG != in_OV) {
    piVar1 = (int *)((int)param_3 + ((uint)param_3 >> 0xb));
    *param_3 = unaff_r11;
  }
  if (in_ZR) {
    unaff_r11 = (int)piVar1 + (uint)in_CY + ((uint)piVar1 >> 0xf);
  }
  bVar3 = in_CY;
  if (in_NG == in_OV) {
    bVar3 = 0x7ffffff4 < unaff_r9 || CARRY4(unaff_r9 + 0x8000000b,(uint)in_CY);
    in_OV = SCARRY4(unaff_r9,-0x7ffffff5) != SCARRY4(unaff_r9 + 0x8000000b,(uint)in_CY);
    iVar2 = unaff_r9 + 0x8000000b + (uint)in_CY;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if ((bool)bVar3 && !in_ZR) {
    in_OV = SCARRY4(unaff_r11,-0x5ffffff5) != SCARRY4(unaff_r11 + -0x5ffffff5,(uint)bVar3);
    in_NG = (int)(unaff_r11 + -0x5ffffff5 + (uint)bVar3) < 0;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xc,in_cr11,piVar1);
    software_interrupt(0xa2be62);
  }
  uVar4 = VectorAdd(in_d24,in_d18,2,1);
  SatQ(uVar4,2,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

