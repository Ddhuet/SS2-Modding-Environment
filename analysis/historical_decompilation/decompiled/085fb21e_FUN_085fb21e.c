
/* WARNING: Control flow encountered bad instruction data */

void FUN_085fb21e(uint param_1,undefined4 param_2,undefined1 *param_3)

{
  uint unaff_r7;
  uint uVar1;
  uint unaff_r9;
  int iVar2;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 in_cr0;
  undefined4 in_cr3;
  
  if (in_NG == in_OV) {
    in_CY = 0;
    in_OV = false;
    unaff_r11 = 0x1cdfb226;
    in_ZR = false;
    in_NG = '\0';
  }
  if ((bool)in_OV) {
    software_interrupt(0x30c972);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_store(1,in_cr0,param_1 + 0x370);
    software_interrupt(0x10de80);
  }
  bVar3 = false;
  if ((bool)in_ZR) {
    in_CY = (byte)(param_1 >> 0x1f);
    register0x00000054 = (BADSPACEBASE *)(unaff_r11 ^ param_1 << 1);
    in_NG = (int)register0x00000054 < 0;
    bVar3 = (undefined1 *)register0x00000054 == (undefined1 *)0x0;
  }
  bVar4 = in_CY;
  if (in_NG == in_OV) {
    bVar4 = 0x9ffffff4 < unaff_r7 || CARRY4(unaff_r7 + 0x6000000b,(uint)in_CY);
    in_OV = SCARRY4(unaff_r7,0x6000000b) != SCARRY4(unaff_r7 + 0x6000000b,(uint)in_CY);
    iVar2 = unaff_r7 + 0x6000000b + (uint)in_CY;
    in_NG = iVar2 < 0;
    bVar3 = iVar2 == 0;
  }
  bVar5 = bVar4;
  if (in_NG == in_OV) {
    bVar5 = 0x7ffffff4 < unaff_r9 || CARRY4(unaff_r9 + 0x8000000b,(uint)bVar4);
    in_OV = SCARRY4(unaff_r9,-0x7ffffff5) != SCARRY4(unaff_r9 + 0x8000000b,(uint)bVar4);
    iVar2 = unaff_r9 + 0x8000000b + (uint)bVar4;
    in_NG = iVar2 < 0;
    bVar3 = iVar2 == 0;
  }
  coprocessor_storelong2(0,in_cr3,0x85fb24a);
  bVar6 = (bool)bVar5;
  if (!bVar3) {
    bVar6 = register0x00000054 < param_3 ||
            (uint)((int)param_3 - (int)register0x00000054) < (uint)bVar5;
    in_OV = SBORROW4((int)param_3,(int)register0x00000054) !=
            SBORROW4((int)param_3 - (int)register0x00000054,(uint)!(bool)bVar5);
    in_NG = (int)param_3 - (int)((int)register0x00000054 + (uint)!(bool)bVar5) < 0;
    bVar3 = param_3 == (undefined1 *)((int)register0x00000054 + (uint)!(bool)bVar5);
  }
  uVar1 = (uint)sRam085fb252;
  if (in_NG == in_OV) {
    register0x00000054 = (BADSPACEBASE *)(param_1 & 0x3b00000);
  }
  bVar7 = bVar6;
  if (bVar6 && !bVar3) {
    bVar7 = 0x7000000d < uVar1 || uVar1 + 0x8ffffff3 < (uint)bVar6;
    in_OV = SBORROW4(uVar1,0x7000000d) != SBORROW4(uVar1 + 0x8ffffff3,(uint)!bVar6);
    in_NG = (int)(uVar1 - (!bVar6 + 0x7000000d)) < 0;
    bVar3 = uVar1 == !bVar6 + 0x7000000d;
  }
  if ((bool)in_NG) {
    software_interrupt(0xdaa2d9);
  }
  if (bVar3 || in_NG != in_OV) {
    software_interrupt(0xb552a2);
  }
  if (!bVar7) {
    bVar7 = (undefined1 *)0x7fffffd7 < register0x00000054;
    bVar3 = (undefined1 *)register0x00000054 == (undefined1 *)0x7fffffd8;
  }
                    /* WARNING: Could not recover jumptable at 0x085fb262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar7 && !bVar3) {
    func_0x08e23e5a();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(((int)unaff_r9 >> 1) + -0x85fb26a))();
  return;
}

