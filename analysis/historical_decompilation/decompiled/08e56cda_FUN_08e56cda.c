
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x074cb10a) */

undefined8 FUN_08e56cda(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int unaff_r9;
  undefined4 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if ((bool)in_NG) {
    uVar2 = func_0x07d443ce();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
  if (!(bool)in_ZR) {
    uVar2 = func_0x093c15d6();
  }
  if (!(bool)in_ZR) {
    uVar2 = func_0x07b9acf6(*(undefined4 *)((ulonglong)uVar2 >> 0x20));
  }
  if (!(bool)in_ZR) {
    uVar2 = func_0x0a11acfa();
  }
  if (!(bool)in_ZR) {
    uVar2 = func_0x07d1b0fe();
  }
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((bool)in_ZR) {
    if (in_NG == in_OV) {
      func_0x092c5bfa((int)uVar2,uVar1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r11 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

