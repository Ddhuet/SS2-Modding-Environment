
ulonglong FUN_080ba1f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080ba21c;
  *DAT_080ba21c = 0xaa;
  *DAT_080ba220 = 0x55;
  *puVar1 = 0xa0;
  *param_2 = *param_1;
  uVar2 = FUN_080ba440(1,param_2,*param_1,*DAT_080ba224);
  return CONCAT44(unaff_lr,uVar2) & 0xffffffff0000ffff;
}

