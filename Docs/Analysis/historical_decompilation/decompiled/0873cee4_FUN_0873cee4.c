
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0873ceec) */

undefined8 FUN_0873cee4(int param_1)

{
  bool in_ZR;
  
  if (!in_ZR) {
    software_interrupt(0x100530);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(*(undefined4 *)(param_1 + -0x28),param_1 + -0x2c);
}

