#ifndef FILE_ACTION_I
#define FILE_ACTION_I

#include "file_action.h"

#define FILE_READ_HELP "cat  <FileName>"
#define FILE_CUT_HELP  "cut  <FileName> [start] [size] [outfilename]"
#define FILE_COPY_HELP "copy <FileName> [outfilename]"
#define FILE_CP_HELP   "cp   <FileName> [outfilename]"

#define FILE_CREATE_HELP "create <FileName>"
#define FILE_ADD_HELP   "add   <FileName>"
//remove
#define FILE_REMOVE_HELP "remove <FileName>"
#define FILE_RM_HELP   "rm   <FileName>"
#define FILE_DELETE_HELP "delete <FileName>"
#define FILE_DEL_HELP   "del   <FileName>"
//rename
#define FILE_RENAME_HELP "rename <OldFileName> [NewFileName]"
#define FILE_RN_HELP   "rn   <OldFileName> [NewFileName]"
#define FILE_MOVE_HELP   "move   <OldFileName> [NewFileName]"
#define FILE_MV_HELP   "mv   <OldFileName> [NewFileName]"

#define FILE_EXIST_HELP "exist <FileName>"
#define FILE_EX_HELP   "ex   <FileName>"

#define FILE_SIZE_HELP "size <FileName>"
#define FILE_SZ_HELP   "sz   <FileName>"

Action file_action[] = {
	{ (int)FileAtcionClass::read,(ACTION_T)FileAtcion::read , EatcionRelation::equal , nullptr ,(char *)"cat",(char *)FILE_READ_HELP},
	{ (int)FileAtcionClass::rd_wr,(ACTION_T)FileAtcion::cut , EatcionRelation::equal , nullptr ,(char *)"cut",(char *)FILE_CUT_HELP},
	{ (int)FileAtcionClass::rd_wr,(ACTION_T)FileAtcion::copy, EatcionRelation::equal , nullptr ,(char *)"copy",(char *)FILE_COPY_HELP},
	{ (int)FileAtcionClass::rd_wr,(ACTION_T)FileAtcion::cp,   EatcionRelation::equal , nullptr ,(char *)"cp",  (char *)FILE_CP_HELP},
	{ (int)FileAtcionClass::create,(ACTION_T)FileAtcion::create, EatcionRelation::equal , nullptr ,(char *)"create",(char *)FILE_CREATE_HELP},
	{ (int)FileAtcionClass::create,(ACTION_T)FileAtcion::add,    EatcionRelation::equal , nullptr ,(char *)"add",   (char *)FILE_ADD_HELP},
//remove
	{ (int)FileAtcionClass::remove,(ACTION_T)FileAtcion::remove,    EatcionRelation::equal , nullptr ,(char *)"remove",   (char *)FILE_REMOVE_HELP},
	{ (int)FileAtcionClass::remove,(ACTION_T)FileAtcion::rm,        EatcionRelation::equal , nullptr ,(char *)"rm",       (char *)FILE_RM_HELP},
	{ (int)FileAtcionClass::remove,(ACTION_T)FileAtcion::_delete,   EatcionRelation::equal , nullptr ,(char *)"delete",   (char *)FILE_DELETE_HELP},
	{ (int)FileAtcionClass::remove,(ACTION_T)FileAtcion::del,       EatcionRelation::equal , nullptr ,(char *)"del",      (char *)FILE_DEL_HELP},
//rename
	{ (int)FileAtcionClass::rename,(ACTION_T)FileAtcion::rename,    EatcionRelation::equal , nullptr ,(char *)"rename",   (char *)FILE_RENAME_HELP},
	{ (int)FileAtcionClass::rename,(ACTION_T)FileAtcion::rn,        EatcionRelation::equal , nullptr ,(char *)"rn",       (char *)FILE_RN_HELP},
	{ (int)FileAtcionClass::rename,(ACTION_T)FileAtcion::move,      EatcionRelation::equal , nullptr ,(char *)"move",     (char *)FILE_MOVE_HELP},
	{ (int)FileAtcionClass::rename,(ACTION_T)FileAtcion::mv,        EatcionRelation::equal , nullptr ,(char *)"mv",       (char *)FILE_MV_HELP},
//exist
	{ (int)FileAtcionClass::exist,(ACTION_T)FileAtcion::exist,      EatcionRelation::equal , nullptr ,(char *)"exist",     (char *)FILE_EXIST_HELP},
	{ (int)FileAtcionClass::exist,(ACTION_T)FileAtcion::ex,         EatcionRelation::equal , nullptr ,(char *)"ex",        (char *)FILE_EX_HELP},
//szie
	{ (int)FileAtcionClass::size,(ACTION_T)FileAtcion::size,      EatcionRelation::equal , nullptr ,(char *)"size",     (char *)FILE_SIZE_HELP},
	{ (int)FileAtcionClass::size,(ACTION_T)FileAtcion::sz,         EatcionRelation::equal , nullptr ,(char *)"sz",        (char *)FILE_SZ_HELP},

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  FILE_ACTION_COUNT (sizeof(file_action) / sizeof(Action))

#endif