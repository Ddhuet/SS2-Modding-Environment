
undefined8 FUN_08066b04(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = DAT_08066b1c;
  if (*DAT_08066b1c < 0x32) {
    if (param_4 != 0) {
      puVar3 = (undefined1 *)(*DAT_08066b8c + *DAT_08066b1c * 0x88);
      *(undefined4 *)(puVar3 + 4) = 1;
      *puVar3 = 0x96;
      *(undefined4 *)(puVar3 + 8) = param_1;
      *(undefined4 *)(puVar3 + 0xc) = param_2;
      *(uint *)(puVar3 + 0x10) = param_3 & 0xffff;
      local_14 = param_1;
      local_10 = param_2;
      FUN_080b9a88(param_4,puVar3 + 0x14,DAT_08066b90);
      puVar3[1] = 4;
      *puVar1 = *puVar1 + 1;
      iVar2 = FUN_08002204();
      if (((iVar2 == 0) || (iVar2 = FUN_08002164(), iVar2 == 1)) &&
         (iVar2 = FUN_0800c61c(), iVar2 == 0)) {
        FUN_0805bb14(&local_14,&local_10);
        FUN_0802221c(local_14,local_10,1);
      }
      param_1 = 1;
    }
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(unaff_lr,param_1);
}

