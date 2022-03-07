#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS EFIAPI Uefimain(
        EFI_HANDLE inage_handle,
        EFI_SYSYTEM_TABLE *system_table){
    Print(L"Hello, Mikan World!\n");
    while(1);
    return EFI_SUCCESS;
}

