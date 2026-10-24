
/* WARNING: Control flow encountered bad instruction data */

void FUN_08261ef0(void)

{
  int iVar1;
  int *unaff_r10;
  int unaff_r11;
  int iVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined8 uVar3;
  
  iVar2 = 0x8261ef4;
  uVar3 = func_0x0760f58c();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if ((bool)in_NG) {
    software_interrupt(0x361e05);
  }
  if ((bool)in_OV) {
    iVar2 = *unaff_r10;
    unaff_r11 = unaff_r10[-3];
    iVar1 = unaff_r10[-9];
  }
  if ((bool)in_ZR) {
    coprocessor_store(8,in_cr4,unaff_r11);
  }
  if (in_NG == in_OV) {
    iVar2 = 0x8261f04;
    func_0x073186cc((int)uVar3,iVar1);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_store(5,in_cr8,iVar2 + 600);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

