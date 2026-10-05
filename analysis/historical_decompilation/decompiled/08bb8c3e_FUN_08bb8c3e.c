
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bb8c3e(void)

{
  bool in_ZR;
  undefined8 in_d0;
  undefined8 uVar1;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  if (in_ZR) {
    software_interrupt(0x32b575);
    software_interrupt(0x210000);
  }
  uVar1 = VectorHalvingAdd(in_d1,in_d0,2,1);
  uVar1 = VectorHalvingAdd(in_d2,uVar1,2,0);
  VectorHalvingAdd(in_d3,uVar1,2,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

