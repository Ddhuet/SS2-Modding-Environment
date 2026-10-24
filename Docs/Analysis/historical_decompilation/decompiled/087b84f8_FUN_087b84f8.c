
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087b8504) */
/* WARNING: Removing unreachable block (ram,0x087b8508) */
/* WARNING: Removing unreachable block (ram,0x087b8510) */
/* WARNING: Removing unreachable block (ram,0x087b8514) */
/* WARNING: Removing unreachable block (ram,0x087b8518) */
/* WARNING: Removing unreachable block (ram,0x087b851c) */
/* WARNING: Removing unreachable block (ram,0x087b8520) */
/* WARNING: Removing unreachable block (ram,0x087b8524) */
/* WARNING: Removing unreachable block (ram,0x087b8528) */
/* WARNING: Removing unreachable block (ram,0x087b852c) */
/* WARNING: Removing unreachable block (ram,0x087b8530) */
/* WARNING: Removing unreachable block (ram,0x087b8534) */
/* WARNING: Removing unreachable block (ram,0x087b8538) */
/* WARNING: Removing unreachable block (ram,0x087b853c) */
/* WARNING: Removing unreachable block (ram,0x087b8540) */
/* WARNING: Removing unreachable block (ram,0x087b8548) */
/* WARNING: Removing unreachable block (ram,0x087b854c) */
/* WARNING: Removing unreachable block (ram,0x087b8550) */

undefined8 FUN_087b84f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  
  if (in_ZR) {
    return CONCAT44(param_2,param_1);
  }
  *(undefined4 *)(unaff_r11 + -4) = 0x87b8500;
  *(BADSPACEBASE **)(unaff_r11 + -8) = register0x00000054;
  *(undefined4 *)(unaff_r11 + -0xc) = in_r12;
  *(undefined4 *)(unaff_r11 + -0x10) = unaff_r10;
  *(undefined4 *)(unaff_r11 + -0x14) = unaff_r8;
  *(undefined4 *)(unaff_r11 + -0x18) = unaff_r6;
  *(undefined4 *)(unaff_r11 + -0x1c) = param_3;
  *(undefined4 *)(unaff_r11 + -0x20) = param_1;
  return uRam087b84e0;
}

