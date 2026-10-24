
/* WARNING: Control flow encountered bad instruction data */

void FUN_08128350(void)

{
  bool in_CY;
  bool in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  
  if (!in_OV) {
    software_interrupt(0x4ba77f);
  }
  if (!in_CY) {
    coprocessor_loadlong(6,in_cr6,0x8128190);
  }
  coprocessor_loadlong2(0xe,in_cr7,0x8128364);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

