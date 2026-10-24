
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fdab0(void)

{
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  
  bVar2 = in_CY;
  if (in_CY && !in_ZR) {
    bVar2 = 0x9ffffff4 < unaff_r7 || CARRY4(unaff_r7 + 0x6000000b,(uint)in_CY);
    in_OV = SCARRY4(unaff_r7,0x6000000b) != SCARRY4(unaff_r7 + 0x6000000b,(uint)in_CY);
    iVar1 = unaff_r7 + 0x6000000b + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (bVar2 && !in_ZR) {
    in_OV = SCARRY4(unaff_r9,-0x7ffffff5) != SCARRY4(unaff_r9 + -0x7ffffff5,(uint)bVar2);
    in_NG = (int)(unaff_r9 + -0x7ffffff5 + (uint)bVar2) < 0;
  }
  if (in_NG != in_OV) {
    func_0x067ac2d0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

