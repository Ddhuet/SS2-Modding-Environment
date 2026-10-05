
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0834e3cc) */
/* WARNING: Removing unreachable block (ram,0x0834e3d8) */
/* WARNING: Removing unreachable block (ram,0x0834e3c8) */

undefined8 FUN_0834e3bc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 unaff_r11;
  bool in_CY;
  
  if (!in_CY) {
    *param_3 = unaff_r11;
    return CONCAT44(param_2,param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

