
void FUN_08071780(void)

{
  int unaff_r10;
  uint in_stack_00000084;
  int in_stack_000000b4;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(DAT_080717ac + unaff_r10) = 0;
  *(uint *)(in_stack_000000b4 + DAT_080717b0) =
       *(uint *)(in_stack_000000b4 + DAT_080717b0) & ~(1 << (in_stack_00000084 & 0xff));
                    /* WARNING: Could not recover jumptable at 0x080717a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

