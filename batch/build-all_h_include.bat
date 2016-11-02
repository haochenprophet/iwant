
@if exist ..\src\all_h_include.h del /F ..\src\all_h_include.h
@dir /B ..\src\*.h >dir.log

@echo #ifndef ALL_H_INCLUDE > ..\src\all_h_include.h
@echo #define ALL_H_INCLUDE >>..\src\all_h_include.h
@echo.>>..\src\all_h_include.h

:WAIT
@if not exist dir.log goto WAIT

for /F " eol=;" %%s in (dir.log) do @echo #include "%%s" >>..\src\all_h_include.h

@echo. >>..\src\all_h_include.h
@echo #endif >>..\src\all_h_include.h

@if exist dir.log del/F dir.log
