@ECHO OFF
setlocal
rem ; ���̍s��MinGW���R�s�[�����t�H���_�ɏ��������Ă��������B
SET MINGW_DIR=C:\TYCPP4TH\MinGW44

SET PATH=%MINGW_DIR%\bin;%MINGW_DIR%\mingw32\lib;%MINGW_DIR%\lib\gcc\mingw32\4.4.0;%PATH%;
SET CLANG=C-SJIS
SET LANG=ja_JP

%COMSPEC%
endlocal
