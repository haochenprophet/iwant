#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/io.h>

#include "io.h"
#include "cmd.h"
#include "io_action.h"

action_define_t io_action_table[] ={
    {io_byte_read,(char * )"RR",(char * )"Byte  Read  :io RR 0x80"},
    {io_byte_read,(char * )"rr",(char * )"Byte  Read  :io rr 0x80"},
    {io_byte_read,(char * )"BR",(char * )"Byte  Read  :io BR 0x80"},
    {io_byte_read,(char * )"br",(char * )"Byte  Read  :io br 0x80"},
    {io_word_read,(char * )"WR",(char * )"Word  Read  :io WR 0x80"},
    {io_word_read,(char * )"wr",(char * )"Word  Read  :io wr 0x80"},   
    {io_dword_read,(char * )"DR",(char * )"Dword Read  :io DR 0x80"},
    {io_dword_read,(char * )"dr",(char * )"Dword Read  :io dr 0x80"},      
    
    {io_dump_action,(char * )"DD",(char * )"IO  Dump  :io DD 0x500"},
    {io_dump_action,(char * )"dd",(char * )"IO  Dump  :io dd 0x500"},      
    {io_byte_dump,(char * )"BD",(char * )"Byte  Dump  :io BD 0x500"},
    {io_byte_dump,(char * )"bd",(char * )"Byte  Dump  :io bd 0x500"},      
    {io_word_dump,(char * )"WD",(char * )"Word  Dump  :io WD 0x500"},
    {io_word_dump,(char * )"wd",(char * )"Word  Dump  :io wd 0x500"},     
    {io_dword_dump,(char * )"DD",(char * )"DWord  Dump  :io DD 0x500"},
    {io_dword_dump,(char * )"dd",(char * )"DWord  Dump  :io dd 0x500"},     

    {io_byte_write,(char * )"WT",(char * )"Byte  Write :io WT 0x80 0xA5"},
    {io_byte_write,(char * )"wt",(char * )"Byte  Write :io wt 0x80 0xA5"},
    {io_byte_write,(char * )"BW",(char * )"Byte  Write :io BW 0x80 0xA5"},
    {io_byte_write,(char * )"bw",(char * )"Byte  Write :io bw 0x80 0xA5"},
    {io_word_write,(char * )"WW",(char * )"Word  Write :io WW 0x80 0xA5"},
    {io_word_write,(char * )"Ww",(char * )"Word  Write :io ww 0x80 0xA5"},
    {io_dword_write,(char * )"DW",(char * )"Dword  Write :io dw 0x80 0xA5"},
    {io_dword_write,(char * )"dw",(char * )"Dword  Write :io dw 0x80 0xA5"},  
   
    {io_byte_and,(char * )"BA",(char * )"Byte  And   :io BA 0x80 0xA5"}, 
    {io_byte_and,(char * )"ba",(char * )"Byte  And   :io ba 0x80 0xA5"}, 
    {io_word_and,(char * )"WA",(char * )"Word  And   :io WA 0x80 0xAA55"},
    {io_word_and,(char * )"wa",(char * )"Word  And   :io wa 0x80 0xAA55"},
    {io_dword_and,(char * )"DA",(char * )"Dword And   :io DA 0x80 0xAAAA5555"},
    {io_dword_and,(char * )"da",(char * )"Dword And   :io da 0x80 0xAAAA5555"},
  
    {io_byte_or,(char * )"BO",(char * )"Byte  Or   :io BO 0x80 0xA5"}, 
    {io_byte_or,(char * )"bo",(char * )"Byte  Or   :io bo 0x80 0xA5"}, 
    {io_word_or,(char * )"WO",(char * )"Word  Or   :io WO 0x80 0xAA55"},
    {io_word_or,(char * )"wo",(char * )"Word  Or   :io wo 0x80 0xAA55"},
    {io_dword_or,(char * )"DO",(char * )"Dword Or   :io DO 0x80 0xAAAA5555"},
    {io_dword_or,(char * )"do",(char * )"Dword Or   :io do 0x80 0xAAAA5555"},

    {isa_read,(char * )"IR",(char * )"ISA   Read  :io IR 0x70 0x01 0x71"},
    {isa_read,(char * )"ir",(char * )"ISA   Read  :io ir 0x70 0x01 0x71"},
    {isa_write,(char * )"IW",(char * )"ISA   Write :io IW 0x2E 0x07 0x2F 0x01"},
    {isa_write,(char * )"iw",(char * )"ISA   Write :io iw 0x2E 0x07 0x2F 0x01"}, 

    {isa_dump,(char * )"ID",(char * )"ISA   Dump  :io ID 0x70 0x71 0x00 0xFF"},     
    {isa_dump,(char * )"id",(char * )"ISA   Dump  :io id 0x70 0x71 0x00 0xFF"},              
};

#define  IO_ACTION_COUNT  (sizeof(io_action_table)/sizeof(action_define_t))

char * io_usage = (char * ) "\
[Usage]: sudo ./io <action> <address/Index_port> [data/index] [data_port] [data]\n\
\tRead        :io RR 0x80 \n\
\tByte  Read  :io BR 0x80 \n\
\tWord  Read  :io WR 0x80 \n\
\tDword Read  :io DR 0x80 \n\
\tIO Dump        :io DP 0x500 \n\
\tByte  Dump  :io BD 0x500 \n\
\tWord  Dump  :io WD 0x500 \n\
\tDword Dump  :io DD 0x500 \n\
\tWrite       :io WT 0x80 0xAA\n\
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
\tISA   Dump  :io ID 0x70 0x71 0x00 0xFF\n\
";

/*
enum io_action_enum { 
    io_byte_read=1, io_word_read,  io_dword_read, io_read_action,// read action : [io_address] to data 
    io_byte_dump,  io_word_dump, io_dword_dump,io_dump_action,// dump action: data to <io_address>  [length]
    io_byte_write,  io_word_write, io_dword_write,io_write_action,// write action: data to [io_address] 
    io_byte_and,    io_word_and,   io_dword_and,  io_and_action,// write and action: data to [io_address] 
    io_byte_or,     io_word_or,    io_dword_or,   io_or_action,// write or action: data to [io_address] 
    isa_read,     isa_dump ,    isa_write,    isa_and,   isa_or,// write or action: data to [io_address] 
};
*/

int check_parameters(int argc,int cmd_action)
{
    if(cmd_action>= io_byte_read && cmd_action<=io_dump_action && argc <3) //check io read  dump input count 
    {
        printf("Error:input parameters are not enough\n");
        return -1;
    }

    if(cmd_action>= io_byte_write && cmd_action<=io_or_action && argc <4)
    {
        printf("Error:input parameters are not enough\n");
        return -1;
    }

    if(cmd_action>= isa_read && cmd_action<=isa_dump && argc <5)
    {
        printf("Error:input parameters are not enough\n");
        return -1;
    }

    if(cmd_action>= isa_write && cmd_action<=isa_or && argc <6)
    {
        printf("Error:input parameters are not enough\n");
        return -1;
    }
    return 0;
}

int main(int argc,char ** argv)
{
    
    Cio io;
    Ccmd cmd;
    Caction action;
    int cmd_action,n,dump_count;
    unsigned short io_addr;

   unsigned char byte_data;
   unsigned short word_data;
   unsigned int dword_data;

    if(0!=cmd.analyze(argc,argv))
    {
        printf("%s",io_usage);
        return -1;
    }

   cmd_action= action.get_action(argv[1],io_action_table,IO_ACTION_COUNT);
   if(-1==cmd_action){return -1;} 
   
   if(0!=check_parameters(argc,cmd_action)){return -1;} 

   io_addr=(unsigned short)cmd.buf[0];

   if(cmd_action==io_byte_read) 
   {
        io.read(io_addr,& byte_data);//byte read
        printf("byte_data=0x%02X\n",byte_data);
   }

   if(cmd_action==io_word_read) 
   {
        io.read(io_addr,& word_data);//word read
        printf("word_data=0x%04X\n",word_data);
   }

   if(cmd_action==io_dword_read) 
   {
        io.read(io_addr,& dword_data);//dword read
        printf("dword_data=0x%08X\n",dword_data);
   }

   if(cmd_action==io_byte_dump||io_word_dump==cmd_action||io_dword_dump==cmd_action||io_dump_action==cmd_action) 
   {
          dump_count=0x100;
          if(argc>3) dump_count= cmd.buf[1];

          for(n=0;n<dump_count;)
          {
               io_addr+=n;
               switch(cmd_action)
               {
                    case io_dump_action :
                    case io_byte_dump :
                         io.read(io_addr,& byte_data);//byte read
                         printf("[0x%04X]=0x%02X\n",io_addr,byte_data); 
                         n++;
                         break;
                    case io_word_dump:
                         io.read(io_addr,& word_data);//word read
                         printf("[0x%04X]=0x%04X\n",io_addr,word_data); 
                         n+=2;
                         break;
                    case io_dword_dump:
                         io.read(io_addr,& dword_data);//dword read
                         printf("[0x%04X]=0x%08X\n",io_addr,dword_data); 
                         n+=4;
                         break;
                    default:
                         break;
               }
          }
   }

   if(cmd_action==io_byte_write) 
   {
        io.write(io_addr,( unsigned char) cmd.buf[1]);//byte write
   }

   if(cmd_action==io_word_write) 
   {
        io.write(io_addr,( unsigned short) cmd.buf[1]);//word write
   }
   
   if(cmd_action==io_dword_write) 
   {
        io.write(io_addr,( unsigned int) cmd.buf[1]);//dword write
   }
   
   if(cmd_action==io_byte_and) 
   {
        io._and(io_addr,( unsigned char) cmd.buf[1]);//byte and
   }
   
   if(cmd_action==io_word_and) 
   {
        io._and(io_addr,( unsigned short) cmd.buf[1]);//byte and
   }

   if(cmd_action==io_dword_and) 
   {
        io._and(io_addr,( unsigned int) cmd.buf[1]);//byte and
   }

   if(cmd_action==io_byte_or) 
   {
        io._or(io_addr,( unsigned char) cmd.buf[1]);//byte or
   }
   
   if(cmd_action==io_word_or) 
   {
        io._or(io_addr,( unsigned short) cmd.buf[1]);//byte or
   }

   if(cmd_action==io_dword_or) 
   {
        io._or(io_addr,( unsigned int) cmd.buf[1]);//byte or
   }

   if(cmd_action==isa_read)
   {
        io.isa(io_addr,(unsigned char)  cmd.buf[1],(unsigned short) cmd.buf[2],& byte_data);// isa read 
        printf("index[%02X]=0x%02X\n",(unsigned char)  cmd.buf[1],byte_data);
   }

    if(cmd_action==isa_write)
   {
        io.isa(io_addr,(unsigned char)  cmd.buf[1],(unsigned short) cmd.buf[2],(unsigned char) cmd.buf[3]);// isa write 
   }

    if(cmd_action==isa_and)
   {
        io.isa_and(io_addr,(unsigned char)  cmd.buf[1],(unsigned short) cmd.buf[2],(unsigned char) cmd.buf[3]);// isa and 
   }

    if(cmd_action==isa_or)
   {
        io.isa_or(io_addr,(unsigned char)  cmd.buf[1],(unsigned short) cmd.buf[2],(unsigned char) cmd.buf[3]);// isa or 
   }

   if(cmd_action==isa_dump)
   {
        io.isa_dump(io_addr,(unsigned char)  cmd.buf[1],(unsigned short) cmd.buf[2],(unsigned char) cmd.buf[3]);// isa or 
   }
  return 0;
}