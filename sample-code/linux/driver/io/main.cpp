#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/io.h>

#include "io.h"
#include "cmd.h"
#include "io_action.h"

action_define_t io_action_table[] ={
    {io_byte_read,(char * )"BR",(char * )"Byte  Read  :io BR 0x80"},
    {io_byte_read,(char * )"br",(char * )"Byte  Read  :io br 0x80"},
    {io_byte_write,(char * )"BW",(char * )"Byte  Write :io BW 0x80 0xA5"},
};

#define  IO_ACTION_COUNT  (sizeof(io_action_table)/sizeof(action_define_t))

char * io_usage = (char * ) "\
[Usage]: sudo ./io <action> <address/Index_port> [data/index] [data_port] [data]\n\
\tRead        :io RR 0x80 \n\
\tByte  Read  :io BR 0x80 \n\
\tWord  Read  :io WR 0x80 \n\
\tDword Read  :io DR 0x80 \n\
\tDump        :io DP 0x500 \n\
\tByte  Dump  :io BD 0x500 \n\
\tWord  Dump  :io WD 0x500 \n\
\tDword Dump  :io DD 0x500 \n\
\tWrite       :io WT 0x80 0xAAAA5555\n\
\tByte  Write :io BW 0x80 0xA5\n\
\tWord  Write :io WW 0x80 0xAA55\n\
\tDword Write :io DW 0x80 0xAAAA5555\n\
\tAnd         :io AA 0x80 0xAAAA5555\n\
\tByte  And   :io BA 0x80 0xA5\n\
\tWord  And   :io WA 0x80 0xAA55\n\
\tDword And   :io DA 0x80 0xAAAA5555\n\
\tOr          :io OO 0x80 0xAAAA5555\n\
\tByte  Or    :io BO 0x80 0xA5\n\
\tWord  Or    :io WO 0x80 0xAA55\n\
\tDword Or    :io DO 0x80 0xAAAA5555\n\
\tISA   Read  :io IR 0x70 0x01 0x71\n\
\tISA   Write :io IW 0x2E 0x07 0x2F 0x01\n\
\tISA   And   :io IA 0x2E 0x30 0x2F 0xFE\n\
\tISA   Or    :io IO 0x2E 0x30 0x2F 0x01\n\
\tISA   Dump  :io ID 0x2E 0x30 0x2F 0x100\n\
";

int main(int argc,char ** argv)
{
    
    Cio io;
    Ccmd cmd;
    Caction action;
    int cmd_action;

   unsigned char byte_data;
   unsigned short word_data;
   unsigned int dword_data;

    if(0!=cmd.analyze(argc,argv))
    {
        printf("%s",io_usage);
        return -1;
    }

   cmd_action= action.get_action(argv[1],io_action_table,IO_ACTION_COUNT);
   if(-1==cmd_action) return -1;
 
   if(cmd_action==io_byte_read) 
   {
        io.read((unsigned short)cmd.buf[0],& byte_data);//byte read
        printf("byte_data=0x%02X\n",byte_data);
   }

   if(cmd_action==io_byte_write) 
   {
        io.write((unsigned short)cmd.buf[0],( unsigned char) cmd.buf[1]);//byte read
   }

  return 0;
}