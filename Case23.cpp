char* (*oAnoSDKIoctl_0)(int a1, int a2);
char* __fastcall hAnoSDKIoctl_0(int a1, int a2)
{
    LOGI("AnoSDKIoctl_0 Calls %d", a1);
    switch (a1)
    {
    case 23:
        return oAnoSDKIoctl_0(0, a2); //a1 değerine return 0 atıyoruz. A2 değeri origin dönüyor
        break;
    }
    return oAnoSDKIoctl_0(a1, a2); //orjinal fonksiyon çağırısı
}

//2 Ay yasağını fixlemek için güncel sürüm offseti yeterlidir. 
