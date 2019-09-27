#ifndef BUILD_ACTION_I
#define BUILD_ACTION_I

#include "build_action.h"
#define BUILD_MAIN_HELP "build  [cmd]"
#define CREATE_ALL_H_INCLUDE_HELP  "cmd:create_all_h"

Action build_action[] = {
	{ (int)CbuileAtcionClass::create_all_h_inclued,(ACTION_T)CbuileAtcion::create_all_h_inclued , EatcionRelation::equal , nullptr ,(char *)"create_all_h",(char *)CREATE_ALL_H_INCLUDE_HELP },

//end:0 is the table end anchor
{ 0,0,EatcionRelation::none,nullptr },
};

#define  Build_ACTION_COUNT (sizeof(Build_action) / sizeof(Action))

#endif