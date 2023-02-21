# Symbolic link example

**Goal:** Trick the `#include` directive to see a symbolic link to a `.h` header file that is not next to the main `.ino` file.

[MS Documentation](https://learn.microsoft.com/hu-hu/windows-server/administration/windows-commands/mklink)

## CMD

```cmd
@ECHO OFF

cd ..\src
mklink import.h ..\lib\import.h

PAUSE
```
```cmd
Arduino-symlink-test\src>mklink import.h ..\lib\import.h
symbolic link created for import.h <<===>> ..\lib\import.h
```
