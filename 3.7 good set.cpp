        
            3.6 3.7 3.8 Sezonlarında bir dostumla piyasaya sürdüğümüz RDG VIP bypassın hook/offset setidir. Eğer olduğunuz sürüme doğru offsetleri ve hookları uygularsanızİ
            Satışlarınız hayırlı olsun. Ama asla hiçbir zaman hazıra konmayın ve reverse engineering öğrenmeye çalışın.


            PATCH_LIB("libUE4.so", "0x3DE1870", "00 00 A0 E3 1E FF 2F E1"); // IsEmulator 3.7
            PATCH_LIB("libUE4.so", "0x3DE1820", "00 00 A0 E3 1E FF 2F E1"); // IsEmulatorWhenInit 3.7
            //Emulator 2 Month
            PATCH_LIB("libUE4.so", "0x3D933B8", "00 00 A0 E3 1E FF 2F E1"); // GetEmulatorName 3.7
            PATCH_LIB("libUE4.so", "0x3CB1E24", "01");                      // NoEmulator/EmulatorName 3.7     

            HOOK_LIB("libanogs.so", "0xFDAED", hThreads, oThreads);                               // 0xFBE2D  |  For Online 10 years and Termination Both 1 3.7
            HOOK_LIB("libanogs.so", "0xCFF85", hMRPCS, oMRPCS);                                   // 0xCBF49  |  For Termination due to CRC Mismatch 1 3.7
            HOOK_LIB("libanogs.so", "0xC76A9", hBPSafety, oBPSafety);                             // 0xC37A1  |  For Stsopping Device Scan, For Frozen Client Ban 1 3.7
            HOOK_LIB("libanogs.so", "0xF31EB", hC35Main, oC35Main);                               // 0xF17A3  |  C35 for Integrity (Vtables Safety) 1 3.7
            HOOK_LIB("libanogs.so", "0x94E3D", hsub_5D142, osub_5D142);                           // 0x94E3C  |  Virtual machine Sleep (IMPORTANT) 1 3.7
            HOOK_LIB("libanogs.so", "0x72CEB", hsub_51A38, osub_51A38);                           // 0x6F08B  |  Memory Bypass 1 3.7
            HOOK_LIB("libanogs.so", "0x3797BD", hMonitor, oMonitor);                              // 0x347BF5  |  High Risk Also (OFFLINE Monitor Solution) TSSSDKInit 1  3.7
            HOOK_LIB("libanogs.so", "0x2322B4", hMemcpyParent1, oMemcpyParent1);                  // 0x22858C  |  3 days fix + Offline ban main (blocks memcpy + CRC32 Calculations) 1 3.7
            HOOK_LIB("libanogs.so", "0x1DE8E0", hMemcpyParent2, oMemcpyParent2);                  // 0x1D4F50  |  3 days fix + Offline ban main (blocks memcpy + CRC32 Calculations) 1 3.7
            HOOK_LIB("libanogs.so", "0x7BBE9", hAnoSDKGetReportData2_0, oAnoSDKGetReportData2_0); // 0x77F89  | F |  Cause 3 day offline 1 3.7
            HOOK_LIB("libanogs.so", "0x3672CD", hsub_33572C, osub_33572C);                        // Big Referance (Report etc) 3.7
            HOOK_LIB("libanogs.so", "0x3775F9", hsub_2A00CC, osub_2A00CC);                        // 0x345A35  |  thread call 3.7
            HOOK_LIB("libanogs.so", "0x344F5D", hsub_2A317C, osub_2A317C);                        // 0x344F5C  |  FLA 3.7
            HOOK_LIB("libanogs.so", "0x345481", hsub_2A3210, osub_2A3210);                        // 0x345480  |  FLA 3.7
            HOOK_LIB("libanogs.so", "0x34600D", hsub_2A35AC, osub_2A35AC);                        // 0x34600C  |  FLA 3.7
            HOOK_LIB("libanogs.so", "0x3461D9", hsub_2A3704, osub_2A3704);                        // 0x3461D8  |  FLA 3.7

            HOOK_LIB("libanogs.so", "0x236470", hMetroWowA, oMetroWowA);             // 0x22C748  | F |  10 years in 1-2 games if return Will cause 1  3.6
            HOOK_LIB("libanogs.so", "0x156B40", hFindBaseAddress, oFindBaseAddress); // 0x154A10  | F |  10 years in 1-2 games if return Will cause 1  3.6
            HOOK_LIB("libanogs.so", "0x157994", hCheckMaps, oCheckMaps);             // 0x155864  | F |  10 years in 1-2 games if return Will cause 1  3.6

         
            PATCH_LIB("libanogs.so", "0x2702E8", "00 00 B0 E3 1E FF 2F E1"); // 0x2598BC  |  Fixes offline 10 years as helper 1 3.7
    

            PATCH_LIB("libUE4.so", "0x2925150", "00 00 A0 E3 1E FF 2F E1"); // 0x2925150  |  UPlayerSecurityInfoCollector::FlushMrpcsFlow ReportMrpcsFlow 3.7
            PATCH_LIB("libUE4.so", "0x29262F8", "00 00 A0 E3 1E FF 2F E1"); // 0x29262F8  |  PlayerSecurityInfoCollector Undefine PlaneAvatarComponent.cpp calls it 3.7

            PATCH_LIB("libUE4.so", "0x427c6a4", "00 00 A0 E3 1E FF 2F E1"); // 0x427c6a4  |  RPC_ClientCoronaLab 3.7
            PATCH_LIB("libUE4.so", "0x34a8980", "00 00 A0 E3 1E FF 2F E1"); // 0x427c6a4  |  EditorTriggerCoronaLabVerify 3.7
            PATCH_LIB("libUE4.so", "0x220FBF0", "00 00 A0 E3 1E FF 2F E1"); // 0x220FBF0  |  Wifi|Data Mod In Match 3.7
            PATCH_LIB("libUE4.so", "0x220FB60", "00 00 A0 E3 1E FF 2F E1"); // 0x220FB60  |  Wifi|Data Mod In Lobby 3.7
            PATCH_LIB("libUE4.so", "0x2EA9700", "78 00 A0 E3 1E FF 2F E1"); // 0x2EA9700  |  120FPS   3.7
            PATCH_LIB("libUE4.so", "0x2EA93FC", "05 00 A0 E3 1E FF 2F E1"); // 0x2EA93FC  |  UHD      3.7
            HOOK_LIB("libUE4.so", "0x374C3D4", hsub_42CBFFC, osub_42CBFFC); // Corona Labs 3.7 (10 years memory)

            //memcpy
            HOOK_LIB_NO_ORIG("libanogs.so", "0x6F26C", hook_memcpy); // __aeabi_memcpy4    0x6F26C 3.7
            HOOK_LIB_NO_ORIG("libanogs.so", "0x6F278", hook_memcpy); // __aeabi_memcpy     0x6F278 3.7
            HOOK_LIB_NO_ORIG("libanogs.so", "0x6F5B4", hook_memcpy); // __aeabi_memcpy8    0x6F5B4 3.7

            HOOK_LIB_NO_ORIG("libUE4.so", "0x8D1E100", hook_memcpy); //__aeabi_memcpy      0x8D1E100 3.7
            HOOK_LIB_NO_ORIG("libUE4.so", "0x8D1D990", hook_memcpy); //__imp_memcpy        0x8D1D990 3.7
            HOOK_LIB_NO_ORIG("libUE4.so", "0x8D1DF90", hook_memcpy); //__aeabi_memcpy4     0x8D1DF90 3.7
            HOOK_LIB_NO_ORIG("libUE4.so", "0x8D1E060", hook_memcpy); //__aeabi_memcpy8     0x8D1E060 3.7

            //god ?
            PATCH_LIB("libUE4.so", "0xA14C14F", "00 00 A0 E3 1E FF 2F E1"); // AnoSDKDelReportData 3.7
            PATCH_LIB("libUE4.so", "0xA14C163", "00 00 A0 E3 1E FF 2F E1"); // AnoSDKGetReportData 3.7
            PATCH_LIB("libUE4.so", "0x8531E00", "00 00 A0 E3 1E FF 2F E1"); // %02X 3.7

            //10&30 dakika fix
            PATCH_LIB("libUE4.so", "0x7B571D0", "00 00 A0 E3 1E FF 2F E1"); // 3.7
            PATCH_LIB("libUE4.so", "0x3D6D1EC", "00 00 A0 E3 1E FF 2F E1"); // 3.7
            PATCH_LIB("libUE4.so", "0x3D4EB80", "00 00 A0 E3 1E FF 2F E1"); // BattleGameInfo & UAsyncLoadWidgetBlueprint & FCDNDownloaderTypeEnum 3.7
            PATCH_LIB("libUE4.so", "0x3D0A564", "00 BF 00 BF");             // 10min ban fix (GCPufferDownloader.cpp) 3.7

             //0x47B1B3C bunun callerleri her şey!
             PATCH_LIB("libUE4.so", "0x3D05644", "00 00 A0 E3 1E FF 2F E1");//GCPufferDownloader.cpp 10min fix
             PATCH_LIB("libUE4.so", "0x3D062B0", "00 00 A0 E3 1E FF 2F E1");
             PATCH_LIB("libUE4.so", "0x3D087F8", "00 00 A0 E3 1E FF 2F E1");//%sPaks/%s
             PATCH_LIB("libUE4.so", "0x475CFE4", "00 00 A0 E3 1E FF 2F E1");//GMCheatManager.cpp anticheat close


            //memory
            PATCH_LIB("libUE4.so", "0x2938480", "00 00 A0 E3 1E FF 2F E1"); // 3.7
            PATCH_LIB("libUE4.so", "0x1DF96A3", "00 00 A0 E3 1E FF 2F E1"); // RPC_ClientCoronaLab 3.7
            PATCH_LIB("libUE4.so", "0x1FA1949", "00 00 A0 E3 1E FF 2F E1"); // ReportAntiCheatInfo 3.7
            PATCH_LIB("libUE4.so", "0x328CB40", "00 00 A0 E3 1E FF 2F E1"); // BulletHitInfoUploadComponent.cpp  Ret = %d ,CompressedSize =%d -> %d , Percenta:%.2f  3.7

            //speed ban fix
            PATCH_LIB("libUE4.so", "0x1A68FD4", "00 00 A0 E3 1E FF 2F E1"); //>>>>>>PlayerSpeedMax:%d
            PATCH_LIB("libUE4.so", "0x2920D38", "00 00 A0 E3 1E FF 2F E1"); //>>>>>>PlayerSpeedMax:%d sub
            PATCH_LIB("libUE4.so", "0x1EF6165", "00 00 A0 E3 1E FF 2F E1"); // PlayerSpeedMax1
            PATCH_LIB("libUE4.so", "0x1F1CB37", "00 00 A0 E3 1E FF 2F E1"); // PlayerSpeedMax2
            PATCH_LIB("libUE4.so", "0x1F301D3", "00 00 A0 E3 1E FF 2F E1"); // PlayerSpeedAvg
            PATCH_LIB("libUE4.so", "0x1F121C2", "00 00 A0 E3 1E FF 2F E1"); // etPlayerSpeed
            PATCH_LIB("libUE4.so", "0x204C740", "00 00 A0 E3 1E FF 2F E1"); // itPlayerSpeed

            //magic metre fix
            PATCH_LIB("libUE4.so", "0x1D93664", "00 00 A0 E3 1E FF 2F E1"); // GetLimitMaxDamageRate 3.7
            PATCH_LIB("libUE4.so", "0x34CC7E4", "00 00 A0 E3 1E FF 2F E1"); // GetLimitMaxDamageRate SUB 3.7

            //havada vurma fix
            PATCH_LIB("libUE4.so", "0x1EC9E0C", "00 00 A0 E3 1E FF 2F E1"); // KillBird 3.7
            PATCH_LIB("libUE4.so", "0x1EB5F33", "00 00 A0 E3 1E FF 2F E1"); // ShootBird 3.7
            PATCH_LIB("libUE4.so", "0x1E2D8CC", "00 00 A0 E3 1E FF 2F E1"); // ShootBirdNonGunADSDistanceTrial 3.7
            PATCH_LIB("libUE4.so", "0x1E8F1F8", "00 00 A0 E3 1E FF 2F E1"); // ShootBirdNonGunADSExceedThreshold 3.7
            PATCH_LIB("libUE4.so", "0x1F9F454", "00 00 A0 E3 1E FF 2F E1"); // ShootBirdNonGunADSDistanceFurtherTrial 3.7

            //report ban
            PATCH_LIB("libUE4.so", "0x1EC9D50", "00 00 A0 E3 1E FF 2F E1"); // ReportAntiCheatDetailData 3.7
            PATCH_LIB("libUE4.so", "0x20192A0", "00 00 A0 E3 1E FF 2F E1"); // RPC_ServerGlueHiaPark 3.7
            PATCH_LIB("libUE4.so", "0x2E335D8", "00 00 A0 E3 1E FF 2F E1"); // PlayerAntiCheatManager.cpp 3.7

            // anticheat off
            PATCH_LIB("libUE4.so", "0x18D126E", "00 00 A0 E3 1E FF 2F E1"); // UTF-16LE", "ShovelAntiCheat",0 3.7 Encrypted
            PATCH_LIB("libUE4.so", "0x314ED74", "00 00 A0 E3 1E FF 2F E1"); // InitAntiCheat 3.7
            PATCH_LIB("libUE4.so", "0x3F76E0C", "00 00 A0 E3 1E FF 2F E1"); // AntiCheatDetailData 3.7
            PATCH_LIB("libUE4.so", "0x1E72BC7", "00 00 A0 E3 1E FF 2F E1"); // AntiCheatRandValue1 3.7
            PATCH_LIB("libUE4.so", "0x1E111AB", "00 00 A0 E3 1E FF 2F E1"); // AntiCheatRandValue2 3.7
            PATCH_LIB("libUE4.so", "0x1E9217D", "00 00 A0 E3 1E FF 2F E1"); // AntiCheatSetup 3.7
            PATCH_LIB("libUE4.so", "0x1E2E2F1", "00 00 A0 E3 1E FF 2F E1"); // OwnerMoveAntiCheat 3.7 Encrypted
            PATCH_LIB("libUE4.so", "0x1A3DEB6", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp 3.7
            PATCH_LIB("libUE4.so", "0x39B3B70", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp & caller 3.7
            PATCH_LIB("libUE4.so", "0x1DFA861", "00 00 A0 E3 1E FF 2F E1"); // GMSendDailyTaskReport socket tak xd 3.7

            //memory
            PATCH_LIB("libUE4.so", "0x1C1CEF0", "00 00 A0 E3 1E FF 2F E1"); // CheckCoronaLabHitPartComplete 3.7 Changed

            //silah anticheat off
            PATCH_LIB("libUE4.so", "0x175A6AC", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::Clear_AntiCheatOnReconnect 3.7
            PATCH_LIB("libUE4.so", "0x33841F0", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::Clear_AntiCheatOnReconnect sub 3.7
            PATCH_LIB("libUE4.so", "0x175A70E", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::ClearOldDatas: Removed %f %f <= %f 3.7
            PATCH_LIB("libUE4.so", "0x3383E20", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::ClearOldDatas: Removed %f %f <= %f sub 3.7
            PATCH_LIB("libUE4.so", "0x17ADFE6", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::VerifyDecryptedShootTimeInfo: Failed flag %u with %s | %u 3.7
            PATCH_LIB("libUE4.so", "0x17FE058", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_VerifyWeaponFireInfoTime: Could not find valid shoot interval, %s 3.7
            PATCH_LIB("libUE4.so", "0x338559C", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_VerifyWeaponFireInfoTime: Could not find valid shoot interval, %s sub 3.7
            PATCH_LIB("libUE4.so", "0x18002F6", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_VerifyIsBlockNetShoot: Failed %u 3.7
            PATCH_LIB("libUE4.so", "0x187E826", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::VerifyShootTimeInf: Verify shoot time info failed: %u is already in map, w=%s 3.7
            PATCH_LIB("libUE4.so", "0x1937BE8", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::ANTICHEAT_ShootRate: ShootMinInterval <%f> is 0, its not su 3.7
            PATCH_LIB("libUE4.so", "0x338491C", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::ANTICHEAT_ShootRate: ShootMinInterval <%f> is 0, its not su SUB 3.7
            PATCH_LIB("libUE4.so", "0x1A3B2F8", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_VerifyServerNoOldShoot: Could not find time watch dog [%u] 3.7
            PATCH_LIB("libUE4.so", "0x3385B48", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_VerifyServerNoOldShoot: Could not find time watch dog [%u] SUB 3.7
            PATCH_LIB("libUE4.so", "0x1A3B39C", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::VerifyShootTimeInf: shoot connection delta failed, will blo 3.7
            PATCH_LIB("libUE4.so", "0x3386084", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::VerifyShootTimeInf: shoot connection delta failed, will block %d || %s (%u > %f) SUB 3.7
            PATCH_LIB("libUE4.so", "0x1A3B46A", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_Get_AntiCheatConfig_Pc: OwnerShootWeapon has no valid controller %u|%s 3.7
            PATCH_LIB("libUE4.so", "0x3385048", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::_Get_AntiCheatConfig_Pc: OwnerShootWeapon has no valid controller %u|%s,%s 3.7
            PATCH_LIB("libUE4.so", "0x1AA4682", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::VerifyShootTimeInf: Can not find valid owner weapon 3.7
            PATCH_LIB("libUE4.so", "0x3366080", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::VerifyShootTimeInf: Can not find valid owner weapon Sub from function not  3.7
            PATCH_LIB("libUE4.so", "0x1ADC400", "00 00 A0 E3 1E FF 2F E1"); // heatComp::Clear_AntiCheatOnSwapOwner
            PATCH_LIB("libUE4.so", "0x33843F8", "00 00 A0 E3 1E FF 2F E1"); // UWeaponAntiCheatComp::Clear_AntiCheatOnSwapOwner SUB from function not PLT 3.7
            PATCH_LIB("libUE4.so", "0x1ADC462", "00 00 A0 E3 1E FF 2F E1"); // 154 byte UWeaponAntiCheatComp::_VerifyWeaponFireInfoTime: OwnerShootWeapon is not valid 3.7
            PATCH_LIB("libUE4.so", "0x1BE8CA8", "00 00 A0 E3 1E FF 2F E1"); // R1 + R4 UWeaponAntiCheatComp::VerifyStartFireInfo: Start fire time verify failed 3.7

            PATCH_LIB("libUE4.so", "0x1F9E27E", "00 00 A0 E3 1E FF 2F E1"); // etAIPlayerSecurityInfoCollector
            //pil yok!
            PATCH_LIB("libUE4.so", "0x47A84AC", "00 00 A0 E3 1E FF 2F E1"); // Battery 3.7


            //Login Crash
            PATCH_LIB("libUE4.so", "0x3BB6480", "00 00 A0 E3 1E FF 2F E1"); //login crash issue 3.7 RET 0

            HOOK_LIB("libanogs.so","0x3672CD", htermination, otermination);//termination fix

            PATCH_LIB("libUE4.so", "0x6569F18", "00 00 82 43");
            

           LOGI("Set Successfull..");
