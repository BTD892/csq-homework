@echo off
echo �ļ����ڴ���
set /p a=
cd "%a%"
echo �ļ�����·��
set /p b=
cd "%b%"
echo �ļ���
set /p c=
gcc "%c%" -o ��ҵ.exe
if exist "��ҵ.exe" echo correct
if not exist "��ҵ.exe" echo error
pause