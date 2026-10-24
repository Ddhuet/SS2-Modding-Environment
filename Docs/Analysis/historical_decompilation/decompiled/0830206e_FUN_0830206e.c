
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0830207a) */
/* WARNING: Removing unreachable block (ram,0x089ef482) */
/* WARNING: Removing unreachable block (ram,0x089ef49a) */
/* WARNING: Removing unreachable block (ram,0x0830207e) */
/* WARNING: Removing unreachable block (ram,0x08302086) */

void FUN_0830206e(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  undefined4 in_cr10;
  
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OV) {
    coprocessor_moveto(6,0,6,param_3,in_cr10,in_cr8);
  }
  if (in_CY) {
    *param_2 = param_3;
  }
  software_interrupt(0xeb140a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

