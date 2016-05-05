#ifndef MACH_OVERRIDE_ME_H
#define MACH_OVERRIDE_ME_H

#include "mach_override.h"
#include "mach-o/dyld.h"
#include <CoreServices/CoreServices.h>

int mach_override_me(void * current_func,void * override_func, void **original_func);
#endif