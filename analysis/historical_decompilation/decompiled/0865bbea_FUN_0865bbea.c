
/* WARNING: Control flow encountered bad instruction data */

void FUN_0865bbea(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_r7;
  int unaff_r11;
  bool in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  bool bVar3;
  
  piVar2 = param_1;
  if (in_NG != (bool)in_OV) {
    piVar2 = (int *)((int)param_1 + ((uint)param_1 >> 0xb));
    *param_1 = unaff_r11;
  }
  bVar3 = false;
  if (in_NG) {
    iVar1 = -((int)piVar2 >> 0x1f);
    in_OV = SCARRY4(unaff_r7,iVar1) != SCARRY4(unaff_r7 + iVar1,(uint)in_CY);
    piVar2 = (int *)(unaff_r7 + iVar1 + (uint)in_CY);
    bVar3 = (int)piVar2 < 0;
    in_ZR = piVar2 == (int *)0x0;
  }
  if (bVar3 == (bool)in_OV) {
    software_interrupt(0xf140b8);
  }
  if ((bool)in_ZR) {
    software_interrupt(0xf00ff0);
  }
  if (!bVar3) {
    *piVar2 = (int)(piVar2 + 0x3c);
    piVar2[1] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

