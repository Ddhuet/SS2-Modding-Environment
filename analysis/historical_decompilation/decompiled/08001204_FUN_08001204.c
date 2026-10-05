
undefined4 FUN_08001204(void)

{
  undefined4 uVar1;
  undefined4 unaff_lr;
  undefined4 local_c;
  
  FUN_08008b18();
  FUN_0800086c();
  *DAT_08001268 = 1;
  if ((*DAT_0800126c & 0x80) == 0) {
    FUN_080b9aa0();
    *DAT_08001270 = *DAT_08001270 + 1;
  }
  uVar1 = DAT_08001274;
  local_c = 0xa0;
  FUN_080b9a84(&local_c,DAT_08001274,DAT_08001278);
  FUN_08000760();
  FUN_08000420(1);
  FUN_08001348(uVar1,0x7000000,0x400);
  *DAT_0800127c = 0;
  FUN_0801a114();
  return unaff_lr;
}

