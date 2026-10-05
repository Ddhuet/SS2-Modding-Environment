
/* WARNING: Control flow encountered bad instruction data */

void FUN_08194754(void)

{
  uint unaff_r10;
  int iVar1;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar2;
  undefined4 in_cr5;
  undefined4 in_cr15;
  
  bVar2 = in_CY;
  if (!in_ZR && in_NG == in_OV) {
    bVar2 = 0xd37fffff < unaff_r10 || CARRY4(unaff_r10 + 0x2c800000,(uint)in_CY);
    in_OV = SCARRY4(unaff_r10,0x2c800000) != SCARRY4(unaff_r10 + 0x2c800000,(uint)in_CY);
    iVar1 = unaff_r10 + 0x2c800000 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (!in_ZR && in_NG == in_OV) {
    if (in_ZR) {
      coprocessor_function(0,0xf,7,in_cr15,in_cr15,in_cr5);
    }
    if (!(bool)bVar2) {
      software_interrupt(0x2c1e15);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

