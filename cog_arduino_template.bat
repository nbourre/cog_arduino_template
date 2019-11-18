@echo off

if "%~1"=="" goto NO_ARGS
cog -d -D prefix=%1 -o %1Mgr.h cog_arduino_mgr_template.h
cog -d -D prefix=%1 -o %1Mgr.c cog_arduino_mgr_template.c

goto DONE

:NO_ARGS
echo Error no output file given
goto DONE

:DONE
