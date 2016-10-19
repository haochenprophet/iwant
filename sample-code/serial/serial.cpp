
#include "serial.h"
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
using namespace std;

Cserial::Cserial()
{
	this->out_screen=1;
	this->read_timeout=0;
	this->read_count=0;
	this->read_wait=1;
	this->write_count=0;
	this->buffer= new char [BUF_COUNT];
	this->init();
}

Cserial::~Cserial()
{
	delete [] this->buffer;
}

int Cserial::sio_init(unsigned char ldn)
{
	this->byte_write(SIO_UNLOCK_KEY,SIO_INDEX_PORT);
	this->byte_write(SIO_UNLOCK_KEY,SIO_INDEX_PORT);//unlock

	this->byte_write(LDN_SEL_REGISTER,SIO_INDEX_PORT);//ldn select
	this->byte_write(ldn,SIO_DATA_PORT);//ldn select

	this->byte_write(ACTIVATE_REGISTER,SIO_INDEX_PORT);
	this->byte_write(this->byte_read(SIO_DATA_PORT)|ACTIVATE_BIT,SIO_DATA_PORT);//Active

	this->byte_write(SIO_UNLOCK_KEY,SIO_LOCK_KET);//lock
	return 0;
}

int Cserial::init(unsigned short combase, unsigned int bps, unsigned char data, unsigned char stop, unsigned char parity, unsigned char breakSet)
{
	this->gComBase=combase;
	this->gBps=bps;
	this->gData=data;
	this->gStop=stop;
	this->gParity=parity;
	this->gBreakSet=breakSet;

	if(combase==COM1_BASE)	{this->sio_init(COM1_LDN);}
	if(combase==COM2_BASE)	{this->sio_init(COM2_LDN);}

	{
		unsigned int divisor;
		unsigned char outputdata;
		unsigned char data;

		data = (unsigned char) (this->gData - (unsigned char) 5);
		divisor = MAX_BPS / this->gBps;//Calculate divisor for baud generator

		// Set communications format
		outputdata = (unsigned char) ((DLAB << 7) | ((this->gBreakSet << 6) | ((this->gParity << 3) | ((this->gStop << 2) | data))));
		this->byte_write(outputdata,this->gComBase+LCR_OFFSET);

		// Configure baud rate
		this->byte_write((unsigned char)  (divisor >> 8),this->gComBase + BAUD_HIGH_OFFSET);
		this->byte_write((unsigned char)  (divisor & 0xff),this->gComBase + BAUD_LOW_OFFSET);
		
		//Enable FIFO
		this->byte_write((unsigned char)  (RX_TX_FIFO_EN|RX_FIFO_RST|TX_FIFO_RST),this->gComBase + IR_CONTROL_OFFSET);

		// Switch back to bank 0
		outputdata = (unsigned char) ((~DLAB << 7) | ((this->gBreakSet << 6) | ((this->gParity << 3) | ((this->gStop << 2) | data))));
		this->byte_write(outputdata,this->gComBase + LCR_OFFSET);
	}
	return 0;
}

void Cserial::write (unsigned char c)
{
	unsigned char data;
	do {
		data = this->byte_read (this->gComBase + LSR_OFFSET);
	} while ((data & LSR_TXRDY) == 0);

	this->byte_write (c,this->gComBase);
	if(this->out_screen)	printf("%c",c);
	this->write_count++;
}

int Cserial::write (unsigned char *buffer,int count)
{
	unsigned int result;

	if (NULL == buffer)  return 0;
	result = count;

	while (count--) {
		this->write(*buffer++);
	}
	return result;
}

int Cserial::read (char *cp)
{
	unsigned char data;
	int timeout=0;

	this->read_timeout=0;
	do {
		data = this->byte_read (this->gComBase + LSR_OFFSET);

		if(timeout++>TIMEOUT_COUNT) {
			if(this->read_count>0||this->read_wait==0){
				this->read_timeout=1;break;//break for end read
			}
			else timeout=0;//still for read.
		}
	} while ((data & LSR_RXDA) == 0);		// Wait for the serail port to be ready.

	if(this->read_timeout) return 1;

	data=this->byte_read (this->gComBase);//printf("%c",data);
	if(cp) *cp=data;

	if(this->out_screen)	printf("%c",data);
	this->read_count++;

	return  0;
}

int Cserial::read (char *buffer, int count)
{
	int n;

	if (NULL == buffer) return 0;

	for(n=0;n<count;n++)
	{
		if(this->read((char *)&buffer[n])) break;
	}

	return n;
}

void Cserial::read()
{
	this->read_wait=0;
	do{
		this->read(this->buffer,BUF_COUNT);
	}while(0==this->read_timeout);//not end continue
	this->read_wait=1;
}

int Cserial::read_to_file(char * filename)
{
	FILE *fp; 

	int count=0;
	if(!this->buffer)	return -1;
	if ((fp = fopen(filename, "wb+")) == NULL) 
	{ 
		printf("Cannot open output %s file.\n" ,filename); 
		return -1; 
	}
	this->out_screen=0;
	printf("Please wait for read end.\n"); 
	do{
		count=this->read(this->buffer,BUF_COUNT);
		//printf("read_count=%d\n",this->read_count);
		if(count) fwrite(this->buffer,count,sizeof(char),fp);
	}while(0==this->read_timeout);//not end continue

	fclose(fp); 
	
	if(this->out_screen) //end for display 
	{
		CAllotMem a;
		if(a.allotFileMemory(filename)) return -1; //error	
		this->display(a.allot.start,a.allot.fileSize);
	}
	this->out_screen=1;
	return 0; 
}


int Cserial::sent(char *filename)
{
	CAllotMem a;
	if(a.allotFileMemory(filename)) return -1; //error
	return this->write((unsigned char *)a.allot.start,a.allot.fileSize);
}

int Cserial::sent()
{
	int i, ch;

	printf("exit input :'QS' ,sent input: 'Enter' keyboard \n");
	this->out_screen=0;
	for (i = 0; (i < BUF_COUNT-1) ;i++ )
	{
		if(EOF==(ch = getchar() ))  continue;
		this->buffer[i] = (char) ch;
		this->buffer[i+1] = '\0';
		//printf("%c",ch);//test ok
		if(!strcmp(this->buffer,"QS")) break;

		if(ch == '\n'){
			//this->display(this->buffer,i+1,2);//testok
			this->write((unsigned char *)this->buffer,i+1);
			//this->read();
			i=-1;
		}
	}
	this->out_screen=1;
	return 0;
}

int Cserial::sent_test(long count)
{
	int c,n;
	for(c=0,n=0;n<count;c++,n++){
		this->write((unsigned char)c);
		if(c>=0x100) c=0;
	}
	printf("sent_test data count =%d\n",n);
	return 0;
}

int Cserial::read_verify(long count)
 {
	 char c;
	 int error_count=0;
	 while(1){
		this->read(&c);
		if((unsigned char)(this->read_count-1)%0x100!=(unsigned char)c) error_count++;
		if(this->read_timeout) break;
	 }

	 if(this->read_count!=count){error_count++; printf("Error:read_verify size not match.read_count=%d\n",this->read_count);}
	 
	 if(error_count) printf("Error:find %d error .\n",error_count);
	 else printf("read_verify pass.\n");

	 return error_count;
 }

void Cserial::display(char *cp,int count,int hex_disp)
{
	for(int n=0;n<count;n++,cp++) 
	{
		if(hex_disp==2)  printf("%c[%02X] ",*cp,*cp);
		if(hex_disp==1)  printf("%02X ",*cp);
		if(hex_disp==0)  printf("%c",*cp);
	}
	printf("\n");
}

#if SERIAL_DEBUG

int main(int argc,char *argv[])
{
	Cserial s;
	int bps=USE_BPS;

	if(argc<2)	{
		printf("\
		[usage]: serial [option] {r, w ; k,R; t,v;i,o} \n\t\
		r: r <filename>  [COM[n]] [bps] ie:./serial r read.txt  2 \n\t\
		w: w <filename>  [COM[n]] [bps] ie:./serial  w write.txt 1 \n\t\
		k: k  [COM[n]] [bps] ie:./serial  k 1\n\t\
		R: R  [COM[n]] [bps] ie:./serial  R 1\n\t\
		t: t  [COM[n]] [bps] [count] ie:./serial t 1 9600 512\n\t\
		v: v  [COM[n]] [bps] ie:./serial  v 1 9600\n\t\
		i: i  <io address> [read byte word dword:1,2,4] [read count] [bps] ie:./serial i 1024 4 16\n\t\
		o: o  <io address> <write iodata> [write byte word dword:1,2,4]  ie:./serial  o 128 255 4 1\n") ; 
		return -1;//do nothing
	}

	if(argv[1][0]=='r'||argv[1][0]=='w')
	{
		if(argc>4)	bps=atol(argv[4]);// get user input bps

		if(argc>3)
		{
			if(argv[3][0]=='1') s.init(COM1_BASE,bps);
			if(argv[3][0]=='2') s.init(COM2_BASE,bps);
		}

		if(argv[1][0]=='r') //read
		{
			if(argc>2) s.read_to_file(argv[2]);
			else printf("Cmd error: No input filename for read !\n");
			printf("\nread_count=%d\n",s.read_count);
		}

		if(argv[1][0]=='w') //write
		{
			if(argc>2) s.sent(argv[2]);
			else printf("Cmd error: No input filename for write !\n");
			printf("\nwrite_count=%d\n",s.write_count);
		}

	}//end if(argv[1][0]=='r'||argv[1][0]=='w')


	if(argv[1][0]=='k'||argv[1][0]=='R')
	{
		if(argc>3)	bps=atol(argv[3]);// get user input bps
		if(argc>2)
		{
			if(argv[2][0]=='1') s.init(COM1_BASE,bps);
			if(argv[2][0]=='2') s.init(COM2_BASE,bps);
		}

		if(argv[1][0]=='k') //keyboard
		{
			s.sent();	
		}

		if(argv[1][0]=='R') //read
		{
			while(1) s.read((char *)0);
		}
	}//end if(argv[1][0]=='k'||argv[1][0]=='R')

	if(argv[1][0]=='t'||argv[1][0]=='v')
	{
		long sent_count=1024*1024;
		if(argc>4)	sent_count=atol(argv[4]);// get user input bps
		if(argc>3)	bps=atol(argv[3]);// get user input bps
		if(argc>2)
		{
			if(argv[2][0]=='1') s.init(COM1_BASE,bps);
			if(argv[2][0]=='2') s.init(COM2_BASE,bps);
		}

		if(argv[1][0]=='t') //sent_test
		{
			s.sent_test(sent_count);	
		}

		if(argv[1][0]=='v') //read
		{
			s.read_verify(sent_count);
		}
	}//end if(argv[1][0]=='k'||argv[1][0]=='R')

	
	//argv[1]='i' argv[2] =ioaddress argv[3] =iotype :{1，2，4} is byte of word ,dword read . argv[4] =  read count ;
	//argv[1]='o' argv[2] =ioaddress argv[3] =write io data .  argv[4] ={1，2，4} is byte ,word ,dword read .
	if(argc>2&&argv[1][0]=='i'||argv[1][0]=='o') 
	{
		int io_addr=atol(argv[2])&0xFFFF;

		int type=1,rw_count=1,n;//default byte access io
		unsigned int io_data=-1;
		
		if(argv[1][0]=='i') //argv[1] ='i' argv[2] =ioaddress argv[3] =iotype :{1，2，4} is byte of word ,dword read . argv[4] =  read count ;
		{
			if(argc>3)  type =atol(argv[3]);
			if(argc>4)  rw_count =atol(argv[4]);
			
			for(n=0;n<rw_count;n++)
			{
				if(type<=1)	//byte read io
				{
					io_data=s.byte_read(io_addr+n);
					printf("io_address=0x%04X io_data=0x%02X\n",io_addr+n,io_data);
				}
				else{
					if(type<4)//word read io
					{
						io_data=s.word_read((io_addr+n*2)&0xFFFE0);
						printf("io_address=0x%04X io_data=0x%04X\n",io_addr+n*2,io_data);
					}
					else	//dword read io
					{
						io_data=s.dword_read((io_addr+n*4)&0xFFFC0);//type >=4
						printf("io_address=0x%04X io_data=0x%08X\n",io_addr+n*4,io_data);
					}
				}
			}//
		}//end if(argv[1][0]=='i')

		if(argv[1][0]=='o') //argv[1]='o' argv[2] =ioaddress argv[3] =write io data .  argv[4] ={1，2，4} is byte ,word ,dword read .
		{
			if(argc>3)  io_data =atol(argv[3]);
			if(argc>4)  type =atol(argv[4]);
			
			if(type<=1)		s.byte_write((unsigned char)io_data,io_addr);
			else{
				if(type<4)	s.word_write((unsigned short)io_data,io_addr&0xFFFE0);
				else		s.dword_write(io_data,io_addr&0xFFFC0);//type >=4
			}
		}//end if(argv[1][0]=='o') 
	}

	return 0;
}

#endif //TEST_ENGINE_DEBUG
