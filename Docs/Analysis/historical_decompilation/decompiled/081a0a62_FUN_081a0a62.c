
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08b66ad6) */
/* WARNING: Removing unreachable block (ram,0x08b66ade) */
/* WARNING: Removing unreachable block (ram,0x08b66aae) */
/* WARNING: Removing unreachable block (ram,0x08b66ada) */
/* WARNING: Removing unreachable block (ram,0x08b66ace) */
/* WARNING: Removing unreachable block (ram,0x081a0a7a) */
/* WARNING: Removing unreachable block (ram,0x081a0a7e) */
/* WARNING: Removing unreachable block (ram,0x081a0a82) */
/* WARNING: Removing unreachable block (ram,0x081a0a86) */
/* WARNING: Removing unreachable block (ram,0x081a0a8a) */
/* WARNING: Removing unreachable block (ram,0x081a0a92) */
/* WARNING: Removing unreachable block (ram,0x081a0a96) */
/* WARNING: Removing unreachable block (ram,0x081a0a9a) */
/* WARNING: Removing unreachable block (ram,0x08b66ab2) */
/* WARNING: Removing unreachable block (ram,0x08b66ac2) */

undefined4 FUN_081a0a62(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_r12;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr15;
  undefined8 in_d0;
  undefined8 in_d1;
  
  coprocessor_loadlong(1,in_cr15,param_2);
  if (in_CY) {
    software_interrupt(0x453203);
  }
  if (!in_ZR) {
    VectorHalvingAdd(in_d1,in_d0,4,1);
                    /* WARNING: Could not recover jumptable at 0x08b66ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08b66ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *in_r12;
}

