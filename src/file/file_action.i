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
//checksum
#define FILE_CHECKSUM_HELP   "checksum   <FileName>"
#define FILE_CHKSUM_HELP     "chksum  <FileName>"
//crc
#define FILE_CRC_HELP   "crc   <FileName> [math]"
//md5
#define FILE_MD5_HELP   "md5   <FileName> [before_print] [after_print]"
//find
#define FILE_FIND_HELP   "find <dir> <term>"
#define FILE_FD_HELP   "fd <dir> <term>"
//find and relpace
#define FILE_FIND_RELPACE_HELP   "find_relpace <dir> <term> <find_string> <target_strring>"
#define FILE_FR_HELP   "fr <dir> <term> <find_string> <target_strring>"
//list ,ll ,ls,dir
#define FILE_LIST_HELP   "list <dir> <term>"
#define FILE_DIR_HELP    "dir <dir> <term>"
#define FILE_LS_HELP    "ls <dir> <term>"
#define FILE_LL_HELP    "ll <dir> <term>"

//different
#define FILE_DIFFERENT_HELP   "different   <FileName1> <FileName2>"
#define FILE_DIFF_HELP        "diff  <FileName1> <FileName2>"

//char* source_file, char* target_file, long start = 0, long size = -1, char* out_file = (char*)"out"
#define FILE_SWAP_HELP   "swap   <source_file> <target_file> <start_offset> <size> [out_file]"
#define FILE_SW_HELP     "sw     <source_file> <target_file> <start_offset> <size> [out_file]"

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
//checksum
	{ (int)FileAtcionClass::checksum,(ACTION_T)FileAtcion::checksum,      EatcionRelation::equal , nullptr ,(char*)"checksum",     (char*)FILE_CHECKSUM_HELP},
	{ (int)FileAtcionClass::checksum,(ACTION_T)FileAtcion::chksum,        EatcionRelation::equal , nullptr ,(char*)"chksum",       (char*)FILE_CHKSUM_HELP},
//crc
	{ (int)FileAtcionClass::crc,(ACTION_T)FileAtcion::crc,      EatcionRelation::equal , nullptr ,(char*)"crc",     (char*)FILE_CRC_HELP},
//md5
	{ (int)FileAtcionClass::md5,(ACTION_T)FileAtcion::md5,      EatcionRelation::equal , nullptr ,(char*)"md5",     (char*)FILE_MD5_HELP},
//find
	{ (int)FileAtcionClass::find,(ACTION_T)FileAtcion::find,      EatcionRelation::equal , nullptr ,(char*)"find",     (char*)FILE_FIND_HELP},
	{ (int)FileAtcionClass::find,(ACTION_T)FileAtcion::fd,      EatcionRelation::equal , nullptr ,(char*)"fd",     (char*)FILE_FD_HELP},
//find and relpace
	{ (int)FileAtcionClass::find,(ACTION_T)FileAtcion::find_replace,      EatcionRelation::equal , nullptr ,(char*)"find_relpace",     (char*)FILE_FIND_RELPACE_HELP},
	{ (int)FileAtcionClass::find,(ACTION_T)FileAtcion::fr,      EatcionRelation::equal , nullptr ,(char*)"fr",     (char*)FILE_FR_HELP},
//list ,ll ,ls,dir
	{ (int)FileAtcionClass::list,(ACTION_T)FileAtcion::list,      EatcionRelation::equal , nullptr ,(char*)"list",     (char*)FILE_LIST_HELP},
	{ (int)FileAtcionClass::list,(ACTION_T)FileAtcion::dir,      EatcionRelation::equal , nullptr ,(char*)"dir",     (char*)FILE_DIR_HELP},
	{ (int)FileAtcionClass::list,(ACTION_T)FileAtcion::ll,      EatcionRelation::equal , nullptr ,(char*)"ll",     (char*)FILE_LL_HELP},
	{ (int)FileAtcionClass::list,(ACTION_T)FileAtcion::ls,      EatcionRelation::equal , nullptr ,(char*)"ls",     (char*)FILE_LS_HELP},
//different
	{ (int)FileAtcionClass::diff,(ACTION_T)FileAtcion::different,      EatcionRelation::equal , nullptr ,(char *)"different",     (char *)FILE_DIFFERENT_HELP},
	{ (int)FileAtcionClass::diff,(ACTION_T)FileAtcion::diff,           EatcionRelation::equal , nullptr ,(char *)"diff",         (char *)FILE_DIFF_HELP},
//swap
	{ (int)FileAtcionClass::swap,(ACTION_T)FileAtcion::swap,      EatcionRelation::equal , nullptr ,(char*)"swap",     (char*)FILE_SWAP_HELP},
	{ (int)FileAtcionClass::swap,(ACTION_T)FileAtcion::sw,        EatcionRelation::equal , nullptr ,(char*)"sw",       (char*)FILE_SW_HELP},
	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  FILE_ACTION_COUNT (sizeof(file_action) / sizeof(Action))

#endif