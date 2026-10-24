
undefined8 FUN_080681d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080681ec;
  if (*DAT_080681ec < 0x32) {
    if (param_3 != 0) {
      puVar2 = (undefined1 *)(*DAT_0806822c + *DAT_080681ec * 0x88);
      *(undefined4 *)(puVar2 + 4) = 1;
      *puVar2 = 0x97;
      *(undefined4 *)(puVar2 + 8) = param_1;
      *(undefined4 *)(puVar2 + 0xc) = param_2;
      FUN_080b9a88(param_3,puVar2 + 0x10,DAT_08068230);
      puVar2[1] = 3;
      *puVar1 = *puVar1 + 1;
      param_1 = 1;
    }
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(unaff_lr,param_1);
}

