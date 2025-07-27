int (*oC35Main)(int a1, void *a2, size_t a3);
int hC35Main(int a1, void *a2, size_t a3)
{
    
    switch (a3)
    {
    case 0x4e: // 
    case 0x3e: // Auto termination @realzedin
        return oC35Main(a1, a2, a3);
        break;
    default:
        return 0;
        break;
    }
}
