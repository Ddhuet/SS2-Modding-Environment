
/* WARNING: Control flow encountered bad instruction data */

void FUN_08546fca(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  int extraout_r2;
  char extraout_r3;
  uint unaff_r7;
  uint unaff_r9;
  char extraout_r12;
  char cVar2;
  int in_r12;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar3;
  byte bVar4;
  undefined4 in_cr11;
  
  bVar3 = in_CY;
  if (!(bool)in_ZR && in_NG == in_OV) {
    bVar3 = 0x9ffffff4 < unaff_r7 || CARRY4(unaff_r7 + 0x6000000b,(uint)in_CY);
    in_OV = SCARRY4(unaff_r7,0x6000000b) != SCARRY4(unaff_r7 + 0x6000000b,(uint)in_CY);
    in_r12 = unaff_r7 + 0x6000000b + (uint)in_CY;
    in_NG = in_r12 < 0;
    in_ZR = in_r12 == 0;
  }
  bVar4 = bVar3;
  if (!(bool)in_ZR && in_NG == in_OV) {
    bVar4 = 0x7ffffff4 < unaff_r9 || CARRY4(unaff_r9 + 0x8000000b,(uint)bVar3);
    in_OV = SCARRY4(unaff_r9,-0x7ffffff5) != SCARRY4(unaff_r9 + 0x8000000b,(uint)bVar3);
    in_r12 = unaff_r9 + 0x8000000b + (uint)bVar3;
    in_NG = in_r12 < 0;
    in_ZR = in_r12 == 0;
  }
  cVar2 = (char)in_r12;
  if (in_NG != in_OV) {
    unaff_lr = 0x8546fda;
    func_0x075f57de();
    param_3 = extraout_r2;
    cVar2 = extraout_r12;
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr11,param_3 + 0x308);
  }
  bVar3 = bVar4;
  if ((bool)in_ZR || in_NG != in_OV) {
    bVar3 = 0xff3dffff < unaff_lr || CARRY4(unaff_lr + 0xc20000,(uint)bVar4);
    in_OV = SCARRY4(unaff_lr,0xc20000) != SCARRY4(unaff_lr + 0xc20000,(uint)bVar4);
    iVar1 = unaff_lr + 0xc20000 + (uint)bVar4;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (!(bool)bVar3) {
    software_interrupt(0x10d2bf);
  }
  if ((bool)in_ZR) {
    cVar2 = param_4 - ((char)(param_3 >> 5) + !(bool)bVar3);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(char *)(param_3 + 0x4c2) = cVar2;
    *(char *)(param_3 + (param_3 >> 0xd)) = cVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

