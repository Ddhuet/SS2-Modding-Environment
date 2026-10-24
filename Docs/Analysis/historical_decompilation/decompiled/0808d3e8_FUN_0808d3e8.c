
undefined8 FUN_0808d3e8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_lr;
  
  if (*(short *)(*DAT_0808d400 + 0x10) == 0) {
    FUN_08026f88(param_1);
  }
  else {
    iVar1 = FUN_08058354();
    if (iVar1 != 0) {
      FUN_0801a7e4(3);
      FUN_0800b4a8();
      while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
        FUN_080003f0();
      }
      FUN_0800b4a8();
      iVar1 = *DAT_0808d448;
      *(undefined4 *)(iVar1 + DAT_0808d44c) =
           *(undefined4 *)(*(int *)(iVar1 + 0x40) * 4 + DAT_0808d450);
      *(undefined2 *)(iVar1 + 0x10) = 0;
      uVar2 = 1;
      *(undefined2 *)(iVar1 + 0x30) = 1;
      *(undefined2 *)(iVar1 + 0x24) = 1;
      goto LAB_0808d456;
    }
  }
  uVar2 = 0;
LAB_0808d456:
  return CONCAT44(unaff_lr,uVar2);
}

