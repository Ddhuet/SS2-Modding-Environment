
/* WARNING: Control flow encountered bad instruction data */

void FUN_081100a2(void)

{
  uint unaff_lr;
  byte in_CY;
  undefined4 in_cr15;
  
  coprocessor_loadlong2(0xb,in_cr15,0x81100ae);
  if (unaff_lr < 0xc5c00000 && !CARRY4(unaff_lr + 0x3a400000,(uint)in_CY)) {
    software_interrupt(0x3b13fb);
  }
  func_0x07aca104();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

