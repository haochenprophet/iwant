#ifndef __CMD_H_
#define __CMD_H_

#include "action.h"
#define  BUF_LEN 0x10

class Ccmd
{
public:
    int  buf[BUF_LEN];
public :
    int analyze(int argc,char ** argv);
};

#endif //__CMD_H_