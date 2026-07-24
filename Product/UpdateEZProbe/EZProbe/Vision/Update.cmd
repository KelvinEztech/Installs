cd \
ezzip -x \Release.zip \Temp
eznet stop all
del *.l??
del *.zip
copy \Temp\* \NDFlash\EZForecourt
cd \NDFLash\EZForecourt
ezloader ezmod
eznet start all 
exit