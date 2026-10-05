
/* WARNING: Control flow encountered bad instruction data */

void FUN_08653b52(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int unaff_r7;
  int unaff_r8;
  int iVar2;
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
    in_OV = SCARRY4(unaff_r7,(int)puVar1) != SCARRY4(unaff_r7 + (int)puVar1,(uint)in_CY);
    iVar2 = (int)puVar1 + (uint)in_CY + unaff_r7;
    bVar3 = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if (bVar3 == (bool)in_OV) {
    param_2 = param_2 + unaff_r8;
  }
  else {
    puVar1 = (undefined4 *)((uint)puVar1 & 0xffff | 0x8b20000);
  }
  if ((bool)in_ZR) {
    software_interrupt(0xe0b440);
    *(char *)(param_2 + ((int)puVar1 >> 1)) = (char)unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

