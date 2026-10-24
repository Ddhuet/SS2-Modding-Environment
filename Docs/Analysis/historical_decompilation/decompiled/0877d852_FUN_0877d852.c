
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877d852(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r10;
  int unaff_r11;
  uint in_r12;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  bool bVar4;
  byte bVar5;
  
  lVar1 = CONCAT44(param_3,param_4);
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r6 + -0x680004fe + (uint)in_CY;
  }
  if (!(bool)in_NG) {
    software_interrupt(0x8016);
  }
  if (!(bool)in_CY) {
    param_2 = *(undefined4 *)(param_3 + 4);
    unaff_r4 = *(int *)(param_3 + 8);
    unaff_r11 = *(int *)(param_3 + 0x10);
    in_r12 = *(uint *)(param_3 + 0x14);
  }
  bVar4 = false;
  if (in_ZR) {
    lVar1 = (ulonglong)unaff_r10 * (ulonglong)param_3;
    in_NG = lVar1 < 0;
    bVar4 = lVar1 == 0;
  }
  piVar2 = (int *)((ulonglong)lVar1 >> 0x20);
  if (!(bool)in_CY || bVar4) {
    in_CY = 1;
    in_NG = (int)(in_r12 ^ 0xb0000003) < 0;
    bVar4 = (in_r12 ^ 0xb0000003) == 0;
  }
  bVar5 = in_CY;
  if (!bVar4) {
    bVar5 = (int *)0x2ffffffc < piVar2 || CARRY4((int)piVar2 + 0xd0000003U,(uint)in_CY);
    in_OV = SCARRY4((int)piVar2,-0x2ffffffd) != SCARRY4((int)piVar2 + 0xd0000003U,(uint)in_CY);
    in_NG = (int)((int)piVar2 + in_CY + 0xd0000003) < 0;
  }
  piVar3 = piVar2;
  if (in_NG != in_OV) {
    piVar3 = (int *)((int)piVar2 + 0x307);
    *piVar2 = unaff_r11;
  }
  if ((bool)bVar5) {
    param_1 = func_0x083eaf02(param_1,param_2,piVar3,(int)lVar1);
  }
  if (in_NG == in_OV) {
    *(char *)(unaff_r4 - (param_1 >> 2)) = (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

