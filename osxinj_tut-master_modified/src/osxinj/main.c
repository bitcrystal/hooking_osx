#include "main.h"

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: osxinj [proc_name] [lib]\n");
        return 0;
    }

    char path[4096];
    realpath(argv[2], path);

    fprintf(stderr, "%s\n", path);

	MACH_INJECTOR_S n;
    MACH__Injector__Init(&n);
    
    int allok = MACH__Injector__inject__processname(&n,argv[1},argv[2]);
    if (!allok)
    {
        fprintf(stderr, "process %s not found\n", argv[1]);
		MACH__Injector__deinit(&n);
        return 0;
    }
    fprintf(stderr, "pid: %u\n", pid);
    
    allok=MACH__Injector__inject(&n);
	if(!allok)
	{
		fprintf(stderr, "can not inject %s\n", argv[2]);
		MACH__Injector__deinit(&n);
        return 0;
	}
	printf("all tippy toppy good\n");
	MACH__Injector__deinit(&n);
    return 0;
}