
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08246860) */
/* WARNING: Removing unreachable block (ram,0x08246864) */
/* WARNING: Removing unreachable block (ram,0x08246868) */

undefined8 FUN_0824684c(void)

{
  undefined4 unaff_r10;
  int unaff_r11;
  uint in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  byte in_stack_000005b9;
  
  if (in_CY && !in_ZR) {
    software_interrupt(0x85b5b1);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r11 + 0x69e) = unaff_r10;
  }
  if (in_ZR) {
    in_r12 = (uint)in_stack_000005b9;
  }
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(in_r12 - 0x28);
}

