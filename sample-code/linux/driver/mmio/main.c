
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h> //close

#include "mmio.h"

char * mmio_usage = (char * ) "\
[Usage]: <action> <address> [data]\n\
\tRead        :mmio RR 0xFD000000 \n\
\tByte  Read  :mmio BR 0xFD000000 \n\
\tWord  Read  :mmio WR 0xFD000000 \n\
\tDword Read  :mmio DR 0xFD000000 \n\
\tWrite       :mmio WW 0xFD000000 0xAAAA5555\n\
\tByte  Write :mmio BW 0xFD000000 0xA5\n\
\tWord  Write :mmio WW 0xFD000000 0xAA55\n\
\tDword Write :mmio DW 0xFD000000 0xAAAA5555\n\
\tAnd         :mmio AA 0xFD000000 0xAAAA5555\n\
\tByte  And   :mmio BA 0xFD000000 0xA5\n\
\tWord  And   :mmio WA 0xFD000000 0xAA55\n\
\tDword And   :mmio DA 0xFD000000 0xAAAA5555\n\
\tOr          :mmio OO 0xFD000000 0xAAAA5555\n\
\tByte  Or    :mmio BO 0xFD000000 0xA5\n\
\tWord  Or    :mmio WO 0xFD000000 0xAA55\n\
\tDword Or    :mmio DO 0xFD000000 0xAAAA5555\n";


int deal_amd(int argc,char ** argv,mmio_action * action)
{
	char * addr;
	if(argc <3)
	{
input_error_exit:
		printf("%s",mmio_usage);
		return -1;
	}
	//get [address]
	if(argv[2][0]=='0'&&(argv[2][1]=='x'||argv[2][1]=='X'))
	{
		action->phy_addr=strtol(argv[2],&addr,16);
	}
	else
	{
		action->phy_addr=strtol(argv[2],&addr,10);
	}
	if(LINUX_DEBUG) printf("address=0x%08X\n",action->phy_addr);
	//get [action]
	if(argv[1][1]=='R'||argv[1][1]=='r') //Read
	{
		switch(argv[1][0])
		{
			case 'B'://Byte  Read
			case 'b'://Byte  Read
				action->action=mmio_byte_read;
				break;
			case 'W'://Word  Read
			case 'w'://Word  Read
				action->action=mmio_word_read;
				break;
			case 'D'://Dword  Read
			case 'd'://Dword  Read
				action->action=mmio_dword_read;
				break;
			default :
				action->action=mmio_read_action;
		}
		return 0;// read return 
	}

	//write check 
	if(argc < 4) 
	{
		printf("Input [data] parameter is not entered\n");
		goto input_error_exit;
	}

	//get [data]
	if(argv[3][0]=='0'&&(argv[3][1]=='x'||argv[3][1]=='X'))
	{
		action->data=strtol(argv[3],&addr,16);
	}
	else
	{
		action->data=strtol(argv[3],&addr,10);
	}
	if(LINUX_DEBUG) printf("data=0x%08X\n",action->data);
	if(argv[1][1]=='W'||argv[1][1]=='w') //Write
	{
		switch(argv[1][0])
		{
			case 'B'://Byte  Write
			case 'b'://Byte  Write
				action->action=mmio_byte_write;
				break;
			case 'W'://Word  Write
			case 'w'://Word  Write
				action->action=mmio_word_write;
				break;
			case 'D'://Dword  Write
			case 'd'://Dword  Write
				action->action=mmio_dword_write;
				break;
			default :
				action->action=mmio_write_action;
		}

	}

	if(argv[1][1]=='A'||argv[1][1]=='a') //And
	{
		switch(argv[1][0])
		{
			case 'B'://Byte  And
			case 'b'://Byte  And
				action->action=mmio_byte_and;
				break;
			case 'W'://Word  And
			case 'w'://Word  And
				action->action=mmio_word_and;
				break;
			case 'D'://Dword  And
			case 'd'://Dword  And
				action->action=mmio_dword_and;
				break;
			default :
				action->action=mmio_and_action;
		}
	}

	if(argv[1][1]=='O'||argv[1][1]=='o') //Or
	{
		switch(argv[1][0])
		{
			case 'B'://Byte  Or
			case 'b'://Byte  Or
				action->action=mmio_byte_or;
				break;
			case 'W'://Word  Or
			case 'w'://Word  Or
				action->action=mmio_word_or;
				break;
			case 'D'://Dword  Or
			case 'd'://Dword  Or
				action->action=mmio_dword_or;
				break;
			default :
				action->action=mmio_or_action;
		}
	}

	return 0;
}

int main(int argc,char ** argv)
{
	int fd;
	mmio_action action;

	char * device_path = (char *)MMIO_DEVICE_PATH;

	if(deal_amd(argc,argv,&action)==-1) return -1;

	fd = open (device_path,O_RDWR);
	if(fd==-1)
	{
		printf("Can not open device %s\n",device_path);
		return -1;
	}
	if(LINUX_DEBUG) printf("Open device %s succeed\n",device_path);

	action.status=-2;//mmio driver will set to 0 or -1 

	if(action.action<=mmio_read_action)//Read
	{
		read(fd,&action, sizeof(mmio_action));
		if(action.status==0)
		{
			printf("data=%08X",action.data);
		}
		else
		{
			printf("Get 0x%08X data fail.\n",action.phy_addr);
		}
	}

	if(action.action>=mmio_byte_write)//Write 
	{
		write(fd,&action, sizeof(mmio_action));
		if(action.status!=0)
		{
			printf("Set 0x%08X data fail.\n",action.phy_addr);
		}
	}

	close(fd);
	return action.status;
}