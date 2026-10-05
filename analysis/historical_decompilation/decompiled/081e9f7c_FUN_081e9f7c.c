
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081e9f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  uint *unaff_r10;
  int unaff_r11;
  byte *pbVar2;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    return *(undefined8 *)(unaff_r11 + 4);
  }
  pbVar2 = (byte *)(unaff_r11 + ((uint)&stack0x00000000 >> 0x1d | (int)&stack0x00000000 << 3));
  if (in_NG == in_OV) {
    software_interrupt(0xb7becf);
  }
  if (!in_CY || in_ZR) {
    unaff_r8 = unaff_r4 | 0x288;
  }
  uVar3 = false;
  uVar4 = in_CY;
  if (in_ZR) {
    uVar4 = param_4 < 0xb500 || 0xb500 - param_4 < (uint)in_CY;
    in_OV = SBORROW4(0xb500,param_4) != SBORROW4(0xb500 - param_4,(uint)!in_CY);
    in_NG = (int)(-(param_4 + !in_CY) + 0xb500) < 0;
    uVar3 = -(param_4 + !in_CY) == -0xb500;
  }
  uVar1 = (uint)*(byte *)(unaff_r6 + in_r12 * 4);
  if ((bool)uVar3 || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)uVar4) {
    coprocessor_moveto(5,1,7,param_2,in_cr5,in_cr8);
  }
  if ((bool)in_NG) {
    unaff_r9 = *(undefined4 *)(unaff_r8 - 0xc);
    unaff_r5 = *(uint *)(unaff_r8 - 0x14);
    unaff_r4 = *(uint *)(unaff_r8 - 0x18);
    param_2 = *(undefined4 *)(unaff_r8 - 0x1c);
  }
  if ((bool)in_OV) {
    pbVar2 = pbVar2 + -(unaff_r5 >> 0x18 | unaff_r5 << 8);
    unaff_r7 = (undefined4 *)(uint)*pbVar2;
  }
  if ((bool)uVar4) {
    param_3 = *(undefined4 *)(pbVar2 + -0x83e);
    *unaff_r10 = param_4;
  }
  if ((bool)uVar3) {
    uVar1 = func_0x084ae028(uVar1,param_2,param_3);
  }
  if (!(bool)uVar3) {
    coprocessor_function(2,0,0,in_cr0,in_cr15,in_cr6);
  }
  if (in_NG != in_OV) {
    uVar1 = uVar1 & 0xfc00003f | ((uint)pbVar2 & 0xfffff) << 6;
  }
  if ((bool)uVar4 && !(bool)uVar3) {
    *unaff_r7 = unaff_r9;
  }
  if (!(bool)uVar3 && in_NG == in_OV) {
    func_0x07518e34(uVar1);
  }
  if (!(bool)uVar3 && in_NG == in_OV) {
    coprocessor_storelong(0,in_cr12,unaff_r4 + 0x2fc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

