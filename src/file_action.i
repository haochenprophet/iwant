#ifndef FILE_ACTION_I
#define FILE_ACTION_I

#include "file_action.h"

#define FILE_READ_HELP "cat <FileName>"
#define FILE_CUT_HELP  "cut <FileName> [start] [size] [outfilename]"

Action file_action[] = {
	{ (int)FileAtcionClass::read,(ACTION_T)FileAtcion::read , EatcionRelation::equal , nullptr ,(char *)"cat",(char *)FILE_READ_HELP},
	{ (int)FileAtcionClass::write,(ACTION_T)FileAtcion::cut , EatcionRelation::equal , nullptr ,(char *)"cut",(char *)FILE_CUT_HELP},

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  FILE_ACTION_COUNT (sizeof(file_action) / sizeof(Action))

#endif