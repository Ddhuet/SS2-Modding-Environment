
/* WARNING: Control flow encountered bad instruction data */

void FUN_08eaf7dc(undefined1 *param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r9;
  uint in_r12;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  
  if (in_ZR) {
    unaff_r9 = param_3 ^ (int)unaff_r9 >> (unaff_r8 & 0xff);
  }
  if (!in_CY) {
    unaff_r9 = unaff_r9 & 0xffff | 0x4b890000;
  }
  if ((bool)in_NG) {
    *(undefined1 **)param_1 = param_1;
  }
  bVar2 = false;
  if (in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x1c) & 1);
    uVar1 = unaff_r9 ^ (int)param_1 << 4;
    in_NG = (int)uVar1 < 0;
    bVar2 = uVar1 == 0;
  }
  if (bVar2) {
    unaff_r4 = in_r12 & (uint)param_1 >> (unaff_r4 & 0xff);
  }
  if (bVar2) {
    param_1 = (undefined1 *)((uint)param_1 & (int)unaff_r4 >> 8 & (int)unaff_r4 >> 8);
  }
  if (!in_CY) {
    in_NG = (int)param_4 < 0;
    *(undefined1 **)param_1 = param_1;
    param_1 = (undefined1 *)((uint)param_1 & 0xffff);
  }
  if ((bool)in_NG) {
    param_1 = (undefined1 *)*param_4;
  }
  if (!in_CY) {
    in_NG = (int)((uint)param_4 ^ 0xcc000000) < 0;
  }
  if ((bool)in_NG) {
    *param_1 = (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

