
#ifndef IO_H
#define IO_H

#ifndef IO_DEBUG
#define IO_DEBUG 0
#endif

#include <stdio.h>

class Cio
{
public:
	Cio() ;
	~Cio();
	unsigned byte_read(unsigned port);
	void byte_write(unsigned char byte,unsigned port);
	unsigned word_read(unsigned port);
	void word_write(unsigned short word,unsigned port);
	unsigned dword_read(unsigned port);
	void dword_write(unsigned dword,unsigned port);
	void list();
};


#endif