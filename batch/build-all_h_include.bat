
set WK_PATH=..\src

@if exist %WK_PATH%\all_h_include.h del /F %WK_PATH%\all_h_include.h
@dir /B %WK_PATH%\*.h >dir.log

@echo #ifndef ALL_H_INCLUDE > %WK_PATH%\all_h_include.h
@echo #define ALL_H_INCLUDE >>%WK_PATH%\all_h_include.h
@echo.>>%WK_PATH%\all_h_include.h

:WAIT
@if not exist dir.log goto WAIT

for /F " eol=;" %%s in (dir.log) do @echo #include "%%s" >>%WK_PATH%\all_h_include.h

@echo. >>%WK_PATH%\all_h_include.h
@echo #endif >>%WK_PATH%\all_h_include.h

@if exist dir.log del /F dir.log
