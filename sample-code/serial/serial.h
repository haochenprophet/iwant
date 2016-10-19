
#ifndef SERIAL_H
#define SERIAL_H

#define SERIAL_DEBUG 1

#include "AllotMEM.h"
#include "io.h"

#define COM1_BASE 0x3f8
#define COM2_BASE 0x2f8
#define USE_BPS 115200

#define COM1_LDN 2  //AST 2400 chip
#define COM2_LDN 3

#define TIMEOUT_COUNT 1000000

#define SIO_INDEX_PORT 0x2E
#define SIO_DATA_PORT   0x2F

#define SIO_UNLOCK_KEY	0xA5  //AST 2400 chip
#define SIO_LOCK_KET        0xAA

//register:
#define LDN_SEL_REGISTER 7
#define ACTIVATE_REGISTER 0x30

// UART Register Offsets
#define BAUD_LOW_OFFSET   0x00
#define BAUD_HIGH_OFFSET  0x01
#define IER_OFFSET        0x01
#define LCR_SHADOW_OFFSET 0x01
#define FCR_SHADOW_OFFSET 0x02
#define IR_CONTROL_OFFSET 0x02
#define FCR_OFFSET        0x02
#define EIR_OFFSET        0x02
#define BSR_OFFSET        0x03
#define LCR_OFFSET        0x03
#define MCR_OFFSET        0x04
#define LSR_OFFSET        0x05
#define MSR_OFFSET        0x06

// UART Register Bit Defines
#define LSR_TXRDY 0x20
#define LSR_RXDA  0x01
#define DLAB      0x01

#define RX_TX_FIFO_EN	  0x1 	
#define RX_FIFO_RST       0x2 
#define TX_FIFO_RST       0x4

#define UART_DATA    8
#define UART_STOP    1
#define UART_PARITY  0
#define UART_BREAK_SET  0

//bit
#define ACTIVATE_BIT	1

#define MAX_BPS 115200
#define BUF_COUNT 0x1000
#define SENT_COUNT (1024*1024)

class Cserial:public Cio
{

	unsigned short gComBase;//  = 0x3f8; //com1
	unsigned int     gBps;//       = 115200;
	unsigned char  gData;//      = 8;
	unsigned char  gStop;//      = 1;
	unsigned char   gParity;//    = 0;
	unsigned char   gBreakSet;//  = 0;
	char *buffer;
	int read_wait;
public:
	int read_timeout;
	int write_count;
	unsigned long read_count;
	int out_screen;//display data to screen
public :
	Cserial();
	~Cserial();
	int sio_init(unsigned char ldn);
	int init(unsigned short combase=COM1_BASE,unsigned int bps=115200,unsigned char data=8,unsigned char stop=1,unsigned char  parity=0,unsigned char  breakSet=0);
	void write (unsigned char c);
	int write (unsigned char *buffer,int count);
	int read (char *cp);
	int read (char *buffer, int count);
	void read();
	int sent();//sent forn cin
	int sent(char *filename);
	int read_to_file(char * filename);
	void display(char *cp,int count,int hex_disp=0);
	int sent_test(long count=SENT_COUNT);
	int read_verify(long count=SENT_COUNT);
};

#endif