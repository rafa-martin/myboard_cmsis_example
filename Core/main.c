#include "RTE_Components.h"
#include "params_cfg.h"
#include "mymain.h"
#include CMSIS_device_header

#include "stdio.h"



void Setup(void)
{
#if PARAM_DOUBLE_BUFFER
    int a = 9;
#else
    int a = 1;
#endif

    a = 9;
    printf("%d", a);

}

void Loop(void)
{

}
