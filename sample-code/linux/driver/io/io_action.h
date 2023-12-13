#ifndef IO_ACTION_H
#define IO_ACTION_H

#include "action.h"

typedef struct io_action_struct
{
    int action;
    int address;
    int data;
}io_action;

typedef struct isa_io_action_struct
{
    int action;
    int index_address;
    int index;
    int data_address;
    int data;
}isa_io_action;

typedef union
{
    io_action io;
    isa_io_action isa;
}io_action_u;

enum io_action_enum { 
    io_byte_read=1, io_word_read,  io_dword_read, io_read_action,// read action : [io_address] to data 
    io_byte_write,  io_word_write, io_dword_write,io_write_action,// write action: data to [io_address] 
    io_byte_and,    io_word_and,   io_dword_and,  io_and_action,// write and action: data to [io_address] 
    io_byte_or,     io_word_or,    io_dword_or,   io_or_action,// write or action: data to [io_address] 
    isa_read,     isa_write,    isa_and,   isa_or,// write or action: data to [io_address] 
};

#endif //IO_ACTION_H