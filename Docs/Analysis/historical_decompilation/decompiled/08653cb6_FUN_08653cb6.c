
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08653cc6) */

undefined8 FUN_08653cb6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined8 uVar1;
  
  if (in_CY) {
    return CONCAT44(uRam08653cc2,uRam08653cbe);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Could not recover jumptable at 0x08653cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*pcRam08654254)(param_1,param_2,param_3);
    return uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

