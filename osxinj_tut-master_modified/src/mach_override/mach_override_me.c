#include "mach_override_me.h"
int mach_override_me(void * current_func,void * override_func, void **original_func)
{
	mach_error_t err = mach_override_ptr(current_func,override_func,original_func);
	return err==0;
}