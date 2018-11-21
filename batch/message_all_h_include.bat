
set WK_PATH=.

@if exist %WK_PATH%\message_all_h_include.h del /F %WK_PATH%\message_all_h_include.h
@dir /B %WK_PATH%\*.h >dir.log
@dir /B %WK_PATH%\sql\*.h >dir_sql.log

@echo #ifndef MESSAGE_ALL_H_INCLUDE > %WK_PATH%\message_all_h_include.h
@echo #define MESSAGE_ALL_H_INCLUDE >>%WK_PATH%\message_all_h_include.h
@echo.>>%WK_PATH%\message_all_h_include.h

:WAIT
@if not exist dir.log goto WAIT

for /F " eol=;" %%s in (dir.log) do @echo #include "%%s" >>%WK_PATH%\message_all_h_include.h

@echo. >>%WK_PATH%\message_all_h_include.h
@echo #endif >>%WK_PATH%\message_all_h_include.h

@if exist dir.log del /F dir*.log
