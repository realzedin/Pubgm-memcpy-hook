int (*hMonitor) (int *result, unsigned int a2);
int oMonitor (int *result, unsigned int a2)
{
    LOGI(OBFUSCATE("A2 MONITOR: %d"), a2);
    if (a2 <= 6)
    {
        switch (a2)
        {
        case 4u:
            return oMonitor(result, 5u); //Eğer case 4u ise 5u çağır
        case 5u:
            return oMonitor(result, a2); //Eğer case 5u ise tekrar 5u çağır (fonksiyon daha geç devam eder)
        }
    }
    return oMonitor(result, a2); //orjinal fonksiyon
}
