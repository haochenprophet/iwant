#ifndef CODE_ACTION_I
#define CODE_ACTION_I

#include "code_action.h"

Action code_action[] = {
	{ (int)CodeAtcionClass::create,(ACTION_T)CodeAtcion::create_h , EatcionRelation::bit_and , nullptr ,(char *)"create_h" },
	{ (int)CodeAtcionClass::create,(ACTION_T)CodeAtcion::create_c , EatcionRelation::bit_and , nullptr ,(char *)"create_c" },
	{ (int)CodeAtcionClass::create,(ACTION_T)CodeAtcion::create_func , EatcionRelation::bit_and , nullptr ,(char *)"create_func" },

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  CODE_ACTION_COUNT (sizeof(code_action) / sizeof(Action))

#endif