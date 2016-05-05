#ifndef MACH_INJECTOR_MAIN
#define MACH_INJECTOR_MAIN

/*
 
 JAMES!
 
sudo /Users/jar/Library/Developer/Xcode/DerivedData/osxinj-eucxbwqeavqgsyawwkjbbogtvkil/Build/Products/Debug/osxinj testapp /Users/jar/Library/Developer/Xcode/DerivedData/testdylib-aladhukbyugsztbuukyimcpiguvo/Build/Products/Debug/testdylib.dylib
 
*/

#include "../mach_inject/mach_injector.h"

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <dlfcn.h>
#include <stdlib.h>

int main(int argc, char* argv[]);
#endif