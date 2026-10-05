
/* WARNING: Control flow encountered bad instruction data */

void FUN_08664ef4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_r7;
  undefined4 unaff_r11;
  bool in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  bool bVar3;
  
  puVar1 = param_1;
  if (in_NG != (bool)in_OV) {
    puVar1 = (undefined4 *)((int)param_1 + ((uint)param_1 >> 0xb));
    *param_1 = unaff_r11;
  }
  bVar3 = false;
  if (in_NG) {
    iVar2 = -((int)puVar1 >> 0x1f);
    in_OV = SCARRY4(unaff_r7,iVar2) != SCARRY4(unaff_r7 + iVar2,(uint)in_CY);
    iVar2 = unaff_r7 + iVar2 + (uint)in_CY;
    bVar3 = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if ((bool)in_ZR) {
    software_interrupt(0xf340b7);
  }
  if (bVar3 == (bool)in_OV) {
    software_interrupt(0xd00fb0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

