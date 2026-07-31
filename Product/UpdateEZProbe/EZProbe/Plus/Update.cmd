cd \
ezzip -x \Release.zip \Temp
eznet stop all
del *.l??
del *.zip
cd \NDFLash\EZForecourt
attrib -R *.dll
attrib -R *.old
attrib -R *.upg
attrib -R EZServer.*
ren EZClient.dll EZClient.upg
ren PumpDrv.dll PumpDrv.upg
ren EZServer.dll EZServer.upg
del *.old
del *.upg
copy \Temp\* \NDFlash\EZForecourt
cd \NDFLash\EZForecourt
ezloader ezmod
eznet start all 
exit