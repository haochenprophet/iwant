
set WK_PATH=sample-code\math

@dir /B ..\%WK_PATH%\*.cpp >dir.log
:WAIT
@if not exist dir.log goto WAIT

echo all:\>..\%WK_PATH%\Makefile
for /F " eol=; delims=." %%s in (dir.log) do @echo %%s \>>..\%WK_PATH%\Makefile
echo.>>..\%WK_PATH%\Makefile

for /F " eol=; delims=." %%s in (dir.log) do @call build-make.bat %%s   ..\%WK_PATH%\Makefile

@if exist dir.log del /F dir.log
::@pause
