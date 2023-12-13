#include <stdio.h>
#include <string.h>
#include "action.h"

int Caction::get_action(char * cmd, action_define_t * action_tab, int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(0==strcmp(action_tab[i].cmd,cmd))
		{
			return action_tab[i].action;
		}
	}

	printf("Error:cmd=%s not find action\n", cmd);
	return -1;
}
