@echo off
echo 文件所在磁盘
set /p a=
cd "%a%"
echo 文件所在路径
set /p b=
cd "%b%"
echo 文件名
set /p c=
gcc "%c%" -o 作业.exe
if exist "作业.exe" echo correct
if not exist "作业.exe" echo error
pause