
set WK_PATH=..\src

@if exist %WK_PATH%\all_h_include.h del /F %WK_PATH%\all_h_include.h
@dir /B %WK_PATH%\*.h >dir.log
@dir /B %WK_PATH%\sql\*.h >dir_sql.log
@dir /B %WK_PATH%\dictionary\*.h >dir_dictionary.log
@dir /B %WK_PATH%\instruction\*.h >dir_instruction.log
@dir /B %WK_PATH%\keywords\*.h >dir_keywords.log
@dir /B %WK_PATH%\math\*.h >dir_math.log


@echo #ifndef ALL_H_INCLUDE > %WK_PATH%\all_h_include.h
@echo #define ALL_H_INCLUDE >>%WK_PATH%\all_h_include.h
@echo.>>%WK_PATH%\all_h_include.h

:WAIT
@if not exist dir.log goto WAIT

for /F " eol=;" %%s in (dir.log) do @echo #include "%%s" >>%WK_PATH%\all_h_include.h
for /F " eol=;" %%s in (dir_sql.log) do @echo #include "sql/%%s" >>%WK_PATH%\all_h_include.h
for /F " eol=;" %%s in (dir_dictionary.log) do @echo #include "dictionary/%%s" >>%WK_PATH%\all_h_include.h
for /F " eol=;" %%s in (dir_instruction.log) do @echo #include "instruction/%%s" >>%WK_PATH%\all_h_include.h
for /F " eol=;" %%s in (dir_keywords.log) do @echo #include "keywords/%%s" >>%WK_PATH%\all_h_include.h
for /F " eol=;" %%s in (dir_math.log) do @echo #include "math/%%s" >>%WK_PATH%\all_h_include.h

@echo. >>%WK_PATH%\all_h_include.h
@echo #endif >>%WK_PATH%\all_h_include.h

@if exist dir.log del /F dir*.log
