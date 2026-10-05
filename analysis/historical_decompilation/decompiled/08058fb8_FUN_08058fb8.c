
ulonglong FUN_08058fb8(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar2 = *DAT_08058fd4;
    iVar1 = DAT_08058fd8;
  }
  else {
    iVar2 = *DAT_08058ff4;
    iVar1 = DAT_08058ff8;
  }
  return CONCAT44(unaff_lr,(int)(uint)*(byte *)(iVar2 + iVar1 + (param_1 >> 3)) >> (param_1 & 7)) &
         0xffffffff00000001;
}

