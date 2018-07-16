@echo off
c:
cd \Vision
EZConfirm.exe "Are you sure you want to install the EZForecourt Plus ?" 
if not errorlevel 0 goto exit_install 
del install.log
EZTelnet\EZTelnet -C InitBBBBefore.cmd -O logs\InitBBBBefore.log 
EZTelnet\EZTelnet -C RemoveOld.cmd -O logs\install.log 
NcFTP\NcFTPPut -f Vision.cfg -d logs\install1.log -m \NDFlash\Log          \Vision\log\*.ini
NcFTP\NcFTPPut -f Vision.cfg -d logs\install2.log -m \NDFlash\SQLite       \Vision\INI\SQLite\*.ini
NcFTP\NcFTPPut -f Vision.cfg -d logs\install3.log -m \NDFlash\EZForecourt  \Vision\Release\*.*
NcFTP\NcFTPPut -f Vision.cfg -d logs\install4.log -m \NDFlash\EZApps       \Vision\EZApps\*.exe
NcFTP\NcFTPPut -f Vision.cfg -d logs\install5.log \NDFlash\EZForecourt     \Vision\INI\*.ini
NcFTP\NcFTPPut -f Vision.cfg -d logs\install6.log \NDFlash\EZForecourt     \Vision\INI\Install\*.ini
EZTelnet\EZTelnet -C start.cmd -O logs\install.log 
exit_install:
