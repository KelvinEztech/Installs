eznet stop all 
del *.l00
del *.zip 
copy \ndflash\ezforecourt\EZServer.NV \ndflash\ezforecourt\EZServer.old
del \ndflash\ezforecourt\EZServer.NV
copy \ndflash\SQLite\config.ini \ndflash\SQLite\config.sav
del \ndflash\SQLite\config.ini
eznet start all
setdate
settime
exit