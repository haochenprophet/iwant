#ifndef EX_FUNC_H
#define EX_FUNC_H

#include <stdio.h> 
#include <time.h>       /* time_t, time */
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */

typedef int(*ex_func)(void *p); //return <0 do nothing , ==0 success, >0 fail

 //extern function 
int runcmd(void *cmd);
int time_cmd(void *p);

#endif