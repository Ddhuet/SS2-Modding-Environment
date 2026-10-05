
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e72d8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  uint extraout_r1;
  uint unaff_r8;
  bool in_NG;
  byte in_CY;
  char in_OV;
  
  if (in_NG != (bool)in_OV) {
    software_interrupt(0xb8b5e3);
  }
  if (in_NG) {
    in_CY = 0xb1ffff < param_3;
  }
  func_0x08d393e8();
  uVar1 = extraout_r1 >> 3 | extraout_r1 << 0x1d;
  bVar2 = CARRY4(unaff_r8 + uVar1,(uint)in_CY);
                    /* WARNING: Could not recover jumptable at 0x082e72e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!CARRY4(unaff_r8,uVar1) && !bVar2) {
    (*(code *)(0x90 - (unaff_r8 + uVar1 + (uint)in_CY + (uint)(!CARRY4(unaff_r8,uVar1) && !bVar2))))
              ();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

