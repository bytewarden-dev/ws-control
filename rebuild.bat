@echo off
setlocal enabledelayedexpansion

set "pioPath=%~dp0.pio\\"
set "vscPath=%~dp0.vscode\\"

if exist "%pioPath%" (
	rmdir /s /q "%pioPath%build"
	rmdir /s /q "%pioPath%libdeps"
	mkdir "%pioPath%build"
	mkdir "%pioPath%libdeps"
) else (
	echo "PlatformIO directory does not exist."
)

if exist "%vscPath%" (
	del /f /q "%vscPath%c_cpp_properties.json"
	del /f /q "%vscPath%launch.json"	
) else (
	echo "vsCode directory does not exist."
)
