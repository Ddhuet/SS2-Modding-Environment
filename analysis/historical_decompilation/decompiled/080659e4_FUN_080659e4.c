
undefined4 FUN_080659e4(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 unaff_lr;
  
  *(undefined2 *)(param_1 + 0x2c) = 0x100;
  *(undefined2 *)(param_1 + 0x30) = param_2;
  *(undefined2 *)(param_1 + 0x32) = param_3;
  *(undefined2 *)(param_1 + 0x2e) = param_4;
  return unaff_lr;
}

