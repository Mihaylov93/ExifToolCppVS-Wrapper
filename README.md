# ExifToolCppVS-Wrapper
A wrapper for using the ExifTool C++ API by Phil Harvey on Visual Studio projects


## Description
http://owl.phy.queensu.ca/~phil/cpp_exiftool/ Is a multiplatform C++ interface for ExifTool that provides the source code for a set of objects that allow C++ applications to easily leverage the full power of the exiftool application through a simple interface. This interface handles all the hard work of launching, monitoring, controlling, and communicating with an external exiftool process.

It works on Windows when compiled with Cygwin as it contains unix headers, hence you can´t use in a Visual Studio project.

First approach: Export the functions with **\__declspec(dllexport)** by modifying the source code.
Problem: You can´t get a pointer to the constructor with GetProcAddress(). 
Solution: Leave the source code untouched and wrapp the constructor and all the class methods in a wrapper class that will be exported.

## Requirements
The exiftool application must exist on the system.

### TODO:
Expanding the readme.
Adding release binaries.
