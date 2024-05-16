#ifndef MAIN_ACTION_I
#define MAIN_ACTION_I

#include "main_action.h"

Action main_action[] = {
	{ (int)MainAtcionClass::create,(ACTION_T)MainAtcion::create_main , EatcionRelation::bit_and , nullptr ,(char *)"create_main" },


	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  MAIN_ACTION_COUNT (sizeof(main_action) / sizeof(Action))

#endif