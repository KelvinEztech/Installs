md \NDFlash\SQLite
del \NDFlash\SQLite\config.ini
EZExtract export \NDFlash\SQLite\config.ini 
eznet stop EZAuth
eznet stop EZViD
eznet stop CTF
eznet stop EZConnect
eznet stop EZCompany
EZNet stop all
cd \NDFLash\EZForecourt
del *.old
ren EZServer.dll EZServer.old
ren EZ2Serial.dll EZ2Serial.old
ren EZClient.dll EZClient.old
ren PumpDrv.dll PumpDrv.old
ren Wayne.dll Wayne.old
ren Gilbarco.dll Gilbarco.old
ren Tokheim.dll Tokheim.old
ren TankDrv.dll TankDrv.old
ren SQLite.dll SQLite.old 
del *.old
exit

