# Symbolic link example

**Goal:** Trick the `#include` directive to see a symbolic link to a `.h` header file or a folder that is not next to the main `.ino` file.

[MS Documentation](https://learn.microsoft.com/hu-hu/windows-server/administration/windows-commands/mklink)

## Link to file

CMD

```cmd
@ECHO OFF

cd ..\examples\symlink_file
mklink import.h ..\..\lib\import.h

PAUSE
```

Output

```cmd
Arduino-symlink-test\examples\symlink_file>mklink import.h ..\..\lib\import.h
symbolic link created for import.h <<===>> ..\..\lib\import.h
```

## Link to folder

CMD

```cmd
@ECHO OFF

cd ..\examples\symlink_folder
mklink lib /d ..\..\lib

PAUSE
```

Output

```cmd
Arduino-symlink-test\examples\symlink_folder>mklink lib /d ..\..\lib
symbolic link created for lib <<===>> ..\..\lib
```
