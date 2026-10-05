
/* WARNING: Control flow encountered bad instruction data */

void FUN_08253d1a(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint unaff_r4;
  int in_r12;
  undefined1 unaff_pc;
  bool in_ZR;
  bool in_CY;
  
  *(undefined1 *)(in_r12 + 0xaff) = unaff_pc;
                    /* WARNING: Could not recover jumptable at 0x08253d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_CY) {
    if (in_ZR) {
      (&stack0x00000000)[unaff_r4 >> 0xc | unaff_r4 << 0x14] = (char)param_4;
      *param_1 = (char)&stack0x00000000 + (char)(unaff_r4 >> 0xc);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(param_4 + -0x3ec))();
  return;
}

