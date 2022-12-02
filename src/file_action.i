#ifndef FILE_ACTION_I
#define FILE_ACTION_I

#include "file_action.h"

#define FILE_READ_HELP "read <FileName>"
#define FILE_CAT_HELP  "cat  <FileName> [start] [size] [DisplayType={string,hex,hex_offset}]"
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
//exist
#define FILE_EXIST_HELP "exist <FileName>"
#define FILE_EX_HELP   "ex   <FileName>"
//size
#define FILE_SIZE_HELP "size <FileName>"
#define FILE_SZ_HELP   "sz   <FileName>"
//add
#define FILE_MERGE_HELP "merge file[1] ... file[n] OutputFilename"
#define FILE_MERGE_OP_HELP "+ file[1] ... file[n] OutputFilename"
//replace
#define FILE_REPLACE_HELP   "replace   <InFileName> <OutFileName> <find> <replace> <type=S:string or F:file> [end_find] [1/0 1:replace_end 0:no replace]"
#define FILE_RP_HELP        "rp   <InFileName> <OutFileName> <find> <replace> <type=S:string or F:file or L:line> [end_find] [1/0 1:replace_end 0:no replace]"
//compare
#define FILE_COMPARE_HELP   "compare   <FileName1> <FileName2>"
#define FILE_FC_HELP        "fc  <FileName1> <FileName2>"
//insert //argv[1]=<input_file> argv[2]=<output_file> argv[3]=<instert_data> argv[4]<data_type:F:file S:string>  argv[5]=<offset/linue_number/find_data>  argv[6]<L:linue_number O:insert_offset B:find_data Before A:find_data after>
#define FILE_INSERT_HELP   "insert   <input_file> <output_file> <instert_data> <data_type:F:file S:string> <offset/linue_number/find_data> <L:linue_number O:insert_offset B:find_data Before A:find_data after>"
#define FILE_INS_HELP       "ins  <input_file> <output_file> <instert_data> <data_type:F:file S:string> <offset/linue_number/find_data> <L:linue_number O:insert_offset B:find_data Before A:find_data after>"

Action file_action[] = {
	{ (int)FileAtcionClass::read,(ACTION_T)FileAtcion::read , EatcionRelation::equal , nullptr ,(char *)"read",(char *)FILE_READ_HELP},
	{ (int)FileAtcionClass::read,(ACTION_T)FileAtcion::cat ,  EatcionRelation::equal , nullptr ,(char *)"cat",(char *)FILE_CAT_HELP},
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
//add
	{ (int)FileAtcionClass::merge,(ACTION_T)FileAtcion::merge,      EatcionRelation::equal , nullptr ,(char *)"merge",     (char *)FILE_MERGE_HELP},
	{ (int)FileAtcionClass::merge,(ACTION_T)FileAtcion::merge_op,   EatcionRelation::equal , nullptr ,(char *)"+",         (char *)FILE_MERGE_OP_HELP},
//replace
	{ (int)FileAtcionClass::replace,(ACTION_T)FileAtcion::replace,      EatcionRelation::equal , nullptr ,(char *)"replace",     (char *)FILE_REPLACE_HELP},
	{ (int)FileAtcionClass::replace,(ACTION_T)FileAtcion::rp,           EatcionRelation::equal , nullptr ,(char *)"rp",         (char *)FILE_RP_HELP},
//compare
	{ (int)FileAtcionClass::compare,(ACTION_T)FileAtcion::compare,      EatcionRelation::equal , nullptr ,(char *)"compare",     (char *)FILE_COMPARE_HELP},
	{ (int)FileAtcionClass::compare,(ACTION_T)FileAtcion::fc,           EatcionRelation::equal , nullptr ,(char *)"fc",         (char *)FILE_FC_HELP},
//insert
	{ (int)FileAtcionClass::insert,(ACTION_T)FileAtcion::insert,      EatcionRelation::equal , nullptr ,(char*)"insert",     (char*)FILE_INSERT_HELP},
	{ (int)FileAtcionClass::insert,(ACTION_T)FileAtcion::ins,         EatcionRelation::equal , nullptr ,(char*)"ins",         (char*)FILE_INS_HELP},

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  FILE_ACTION_COUNT (sizeof(file_action) / sizeof(Action))

#endif