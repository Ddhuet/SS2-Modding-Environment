
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0872b084(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r8;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY) {
    return *(undefined8 *)(param_4 + -0x2c);
  }
  puVar1 = param_3;
  if (in_ZR) {
    puVar1 = param_3 + 0x3e;
    *param_3 = unaff_r8;
  }
  func_0x07c13fe2(param_1,param_2,puVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

