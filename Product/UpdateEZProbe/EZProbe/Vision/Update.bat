@echo off
echo Instalando a conexao com concentrador da EZTech.
if exist C:\Vision\EZTelnet goto alreadyinstalled
echo Criando as pastas etc.
md C:\EZForecourt
copy EZForecourt\* C:\EZForecourt
md C:\Vision
md C:\Vision\Release
md C:\Vision\EZTelnet
copy EZTelnet\* C:\Vision\EZTelnet
copy *.cfg C:\Vision
md C:\Vision\NcFTP
copy NcFTP\* C:\Vision\NcFTP
md C:\Vision\INI
md C:\Vision\INI\Install
C:\EZForecourt\EZIPConfig.exe
:alreadyinstalled
echo Copiando os arquivos para o computador...
copy *.cmd C:\Vision
C:
cd \Vision
echo Copiando os arquivos para o concentrador.
NcFTP\NcFTPPut -f Vision.cfg -d logs\Upgrade1.log \  \Vision\Release\Release.zip
EZTelnet\EZTelnet -C Update.cmd -O logs\Update.log 
echo Instalacao completa. 
echo Reinicie o concentrdor e depois atualizie o firmware da EZIbr se houver. 
echo tecla entra para continuar.
exit 


