
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x085c0a86) */
/* WARNING: Removing unreachable block (ram,0x085c0a82) */
/* WARNING: Removing unreachable block (ram,0x085c0a7e) */
/* WARNING: Removing unreachable block (ram,0x085c0a8e) */

undefined8 FUN_085c0a76(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_OV;
  
  if (!in_NG) {
    return CONCAT44(param_2,param_1);
  }
  if (!in_OV) {
    *unaff_lr = param_3;
    unaff_lr[1] = unaff_r4;
    unaff_lr[2] = unaff_r6;
    unaff_lr[3] = unaff_r9;
    unaff_lr[4] = unaff_r10;
    unaff_lr[5] = in_r12;
    unaff_lr[6] = unaff_lr;
    unaff_lr[7] = 0x85c0a92;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_lr + 1);
}

