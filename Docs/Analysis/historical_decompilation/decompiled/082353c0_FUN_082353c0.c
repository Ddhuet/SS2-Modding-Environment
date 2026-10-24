
/* WARNING: Control flow encountered bad instruction data */

int FUN_082353c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  char *unaff_r4;
  char *pcVar2;
  uint unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int unaff_r7;
  undefined1 *unaff_r8;
  int *unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    (&stack0x00000000)[(int)unaff_r5 >> 0xb] = (char)unaff_r11;
  }
  if (!(bool)in_CY) {
    coprocessor_function(2,0xe,4,in_cr10,in_cr6,in_cr11);
  }
  if (!(bool)in_ZR) {
    unaff_r9[-1] = unaff_r10;
    unaff_r9[-2] = (int)unaff_r8;
    unaff_r9[-3] = unaff_r7;
    unaff_r9[-4] = (int)unaff_r6;
    unaff_r9[-5] = param_2;
    unaff_r9 = unaff_r9 + -6;
    *unaff_r9 = (int)param_1;
  }
  if (!(bool)in_NG) {
    unaff_r4 = (char *)(uint)*(byte *)(unaff_r7 + -0x421);
  }
  if (in_NG != in_OV) {
    unaff_r8 = unaff_r8 + 0xf4f;
    *unaff_r8 = (char)param_2;
    unaff_r11 = *(undefined4 *)(unaff_r10 + ((uint)&stack0x00000000 >> 0x19));
  }
  puVar1 = param_1;
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar1 = (undefined4 *)((int)param_1 + 0xdcd);
    *param_1 = unaff_r11;
  }
  puVar3 = unaff_r6;
  if ((bool)in_OV) {
    puVar3 = unaff_r6 + -((int)unaff_r4 >> 10);
    *unaff_r6 = (char)unaff_r4;
  }
  pcVar2 = unaff_r4;
  if ((bool)in_NG) {
    pcVar2 = unaff_r4 + -0x545;
    *unaff_r4 = (char)pcVar2;
  }
  if (!(bool)in_OV) {
    return unaff_r9[1];
  }
  if ((bool)in_ZR || (bool)in_NG != true) {
    func_0x06e5e160(puVar1);
  }
  if ((bool)in_OV) {
    *(undefined1 **)(unaff_r7 + ((uint)puVar3 >> 0xc | (int)puVar3 << 0x14)) = unaff_r8;
    puVar4 = puVar3;
  }
  else {
    puVar4 = puVar3 + -(unaff_r5 >> 0xc | unaff_r5 << 0x14);
    *puVar3 = (char)puVar4;
  }
  if ((bool)in_NG) {
    *pcVar2 = (char)pcVar2 + -0x77;
    *(undefined1 *)((int)unaff_r9 + -0xddd) = (char)(undefined1 *)((int)unaff_r9 + -0xddd);
  }
  else {
    iVar5 = (int)puVar4 - ((uint)puVar4 >> 0xc | (int)puVar4 << 0x14);
    *puVar4 = (char)iVar5;
    *(undefined1 *)(iVar5 + -0x665) = (char)(undefined1 *)(iVar5 + -0x665);
    *(char *)(iVar5 + -0xbca) = (char)unaff_r5;
    *(char *)(unaff_r5 - 0x454) = (char)pcVar2;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

