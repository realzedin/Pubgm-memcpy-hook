# Pubgm-memcpy-hook
Pubg mobile Global / VNG / TW / KR qmemcpy hooking.


# Pubg mobile 3/1 day fix ban.
void *hook_memcpy(char *dest, const char *src, unsigned int size)
{
    char *destination = dest;
    DWORD SubBase = 0;
    if ((char *)libcBase <= src && (char *)(libcBase + libanogsSize) > src)
    {
        dest = (char *)(src - (char *)libcBase);
        SubBase = LibcAlloc;
    Change_Src:
        src = &dest[SubBase];
        goto Return_Code;
    }
    if ((char *)libEgl_base <= src && (char *)(libEglSize + libEgl_base) > src)
    {
        dest = (char *)(src - (char *)libEgl_base);
        SubBase = EglAlloc;
        goto Change_Src;
    }
    if (size > 0x10000 && (char *)libUE4Base <= src && DWORD(libUE4Base + libUE4Size) > (DWORD)src)
    {
        dest = (char *)(src - (char *)libUE4Base);
        SubBase = libUE4Alloc;
        goto Change_Src;
    }
    if (size > 0x10000 && (char *)libanogsBase <= src && (char *)libanogsBase + libanogsSize > src)
    {
        dest = (char *)(src - (char *)libanogsBase);
        SubBase = libanogsAlloc;
        goto Change_Src;
    }
Return_Code:
    return memcpy(destination, src, size);
}
