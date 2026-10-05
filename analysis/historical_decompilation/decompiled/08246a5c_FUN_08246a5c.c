
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08246a7c) */
/* WARNING: Removing unreachable block (ram,0x08246a80) */
/* WARNING: Removing unreachable block (ram,0x07f89b9c) */
/* WARNING: Removing unreachable block (ram,0x08246a84) */
/* WARNING: Removing unreachable block (ram,0x08246a88) */
/* WARNING: Removing unreachable block (ram,0x08246a8c) */
/* WARNING: Removing unreachable block (ram,0x08246a90) */
/* WARNING: Removing unreachable block (ram,0x08246a94) */
/* WARNING: Removing unreachable block (ram,0x08246a98) */
/* WARNING: Removing unreachable block (ram,0x0860d770) */
/* WARNING: Removing unreachable block (ram,0x0860d774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08246a5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r7;
  undefined4 unaff_lr;
  undefined1 in_NG;
  bool in_CY;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  coprocessor_moveto(0xe,7,6,unaff_lr,in_cr3,in_cr6);
  if (in_CY) {
    in_NG = false;
  }
  coprocessor_moveto2(0xd,2,param_4,param_2,in_cr15);
  if (!(bool)in_NG) {
    coprocessor_storelong(0,in_cr3,unaff_r7 + -0x14c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

