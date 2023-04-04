#ifndef CMOS_ACTION_I
#define CMOS_ACTION_I

#include "cmos_action.h"

//read
#define CMOS_READ_HELP "read <index>"
#define CMOS_r_HELP "r <index>"
#define CMOS_R_HELP "R <index>"

//dump
#define CMOS_DUMP_HELP "dump [start] [end]"
#define CMOS_d_HELP "d [start] [end]"
#define CMOS_D_HELP "D [start] [end]"


//read and write
#define CMOS_rw_HELP "rw <index> <data>"
#define CMOS_RW_HELP "RW <index> <data>"


//write
#define CMOS_WRITE_HELP "write <index> <data>"
#define CMOS_w_HELP "w <index> <data>"
#define CMOS_W_HELP "W <index> <data>"

//and
#define CMOS_AND_HELP "and <index> <data>"
#define CMOS_a_HELP "a <index> <data>"
#define CMOS_A_HELP "A <index> <data>"

//or
#define CMOS_OR_HELP "or <index> <data>"
#define CMOS_o_HELP "o <index> <data>"
#define CMOS_O_HELP "O <index> <data>"

Action cmos_action[] = {
//read
	{ (int)CmosAtcionClass::read,(ACTION_T)CmosAtcion::read , EatcionRelation::equal , nullptr ,(char *)"read",(char *)CMOS_READ_HELP},
	{ (int)CmosAtcionClass::read,(ACTION_T)CmosAtcion::r , EatcionRelation::equal , nullptr ,(char *)"r",(char *)CMOS_r_HELP},
	{ (int)CmosAtcionClass::read,(ACTION_T)CmosAtcion::R , EatcionRelation::equal , nullptr ,(char *)"R",(char *)CMOS_R_HELP},
//write
	{ (int)CmosAtcionClass::write,(ACTION_T)CmosAtcion::write , EatcionRelation::equal , nullptr ,(char *)"write",(char *)CMOS_WRITE_HELP},
	{ (int)CmosAtcionClass::write,(ACTION_T)CmosAtcion::w, EatcionRelation::equal , nullptr ,(char *)"w",(char *)CMOS_w_HELP},
	{ (int)CmosAtcionClass::write,(ACTION_T)CmosAtcion::W , EatcionRelation::equal , nullptr ,(char *)"W",(char *)CMOS_W_HELP},
//read and write
	{ (int)CmosAtcionClass::rw,(ACTION_T)CmosAtcion::rw , EatcionRelation::equal , nullptr ,(char *)"write",(char *)CMOS_rw_HELP},
	{ (int)CmosAtcionClass::rw,(ACTION_T)CmosAtcion::RW, EatcionRelation::equal , nullptr ,(char *)"w",(char *)CMOS_RW_HELP},
//dump
	{ (int)CmosAtcionClass::dump,(ACTION_T)CmosAtcion::dump , EatcionRelation::equal , nullptr ,(char *)"dump",(char *)CMOS_DUMP_HELP},
	{ (int)CmosAtcionClass::dump,(ACTION_T)CmosAtcion::d, EatcionRelation::equal , nullptr ,(char *)"d",(char *)CMOS_d_HELP},
	{ (int)CmosAtcionClass::dump,(ACTION_T)CmosAtcion::D , EatcionRelation::equal , nullptr ,(char *)"D",(char *)CMOS_D_HELP},
//and
	{ (int)CmosAtcionClass::and,(ACTION_T)CmosAtcion::and , EatcionRelation::equal , nullptr ,(char *)"dump",(char *)CMOS_AND_HELP},
	{ (int)CmosAtcionClass::and,(ACTION_T)CmosAtcion::a, EatcionRelation::equal , nullptr ,(char *)"d",(char *)CMOS_a_HELP},
	{ (int)CmosAtcionClass::and,(ACTION_T)CmosAtcion::A , EatcionRelation::equal , nullptr ,(char *)"D",(char *)CMOS_A_HELP},
//or
	{ (int)CmosAtcionClass::or,(ACTION_T)CmosAtcion::or , EatcionRelation::equal , nullptr ,(char *)"or",(char *)CMOS_OR_HELP},
	{ (int)CmosAtcionClass::or,(ACTION_T)CmosAtcion::o, EatcionRelation::equal , nullptr ,(char *)"o",(char *)CMOS_o_HELP},
	{ (int)CmosAtcionClass::or,(ACTION_T)CmosAtcion::O, EatcionRelation::equal , nullptr ,(char *)"O",(char *)CMOS_O_HELP},

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  CMOS_ACTION_COUNT (sizeof(cmos_action) / sizeof(Action))

#endif