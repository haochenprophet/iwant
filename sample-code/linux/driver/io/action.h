#ifndef __ACTION_H_
#define __ACTION_H_


typedef struct action_define_struct
{
	int     action;
	char * cmd;
	char * description;//help
}action_define_t;


class Caction
{
public:
	int get_action(char * cmd, action_define_t * action_tab, int count);
};

#endif //__ACTION_H_

