#include "display.h"
int Cdisplay::my_init(void *p)
{
	this->name = "Cdisplay";
	this->alias = "display";
	return 0;
}

Cdisplay::Cdisplay()
{
	this->my_init();
}


#include <stdio.h>


inline void Cdisplay::dispay_space(int space_count)
{
	for (; space_count > 0; space_count--)  printf(" ");
}

void Cdisplay::dispay_data(void* data, int data_type)//byte=1,word=2,dword=4,qword=8
{
	if (data_type == 1) printf("%02X", *((unsigned char*)data));
	if (data_type == 2) printf("%04X", *((unsigned short*)data));
	if (data_type == 4) printf("%08lX", *((unsigned long*)data));
	if (data_type == 8) printf("%016llX", *((unsigned long long*)data));
}
//int separate_count = 16, max_separate = 16;
//bool display_offset = true;
//bool tag_ascii = false;
//int space_count = 2;
//char placeholder = '.';

void  Cdisplay::display_hex(char *buf, size_t size, bool display_offset,int data_type, bool tag_ascii, int space_count, int separate_count,int max_separate, char placeholder)
{
	size_t i,n,count, offset=0;
	int newline = separate_count;

	if (separate_count < 0)
	{
		display_offset = false;
		space_count = 0;
	}

	//check and reset separate_count
	if (separate_count > max_separate) separate_count = max_separate;
	if (data_type>1)newline=separate_count /= data_type;

	if (data_type != 1)//not byte mode disable tag_ascii
	{
		tag_ascii = false;
	}

	if (display_offset)
	{
		printf("[offset]:");//check and display offset
		dispay_space(space_count);

		for (i = 0,n=0; n < newline; n++,i+= data_type) { dispay_data((void *) & i, data_type);; dispay_space(space_count); }//display index 

		if (tag_ascii)//display ascii index
		{
			for (i = 0; i < separate_count; i++) { printf("%02X", (int)i); dispay_space(space_count); }
		}

		printf("\n");
	}

	for (i = 0, count=0, n = i; i < size; i+= data_type, offset+= data_type,count++)
	{
		if (display_offset && count % newline == 0) { printf("%08lX:",(unsigned long) offset); dispay_space(space_count); }

		dispay_data(&buf[i], data_type);
		dispay_space(space_count);

		if (count % newline == (newline - 1))
		{
			if (tag_ascii)
			{
				for (; n < i && n < size; n++) {
					if (buf[n] >= 0x20 && buf[n] < 0x7F) { printf("%c ", buf[n]); }//isprint ascii
					else { printf("%c ", placeholder); }
					dispay_space(space_count);
				}
			}

			printf("\n");
		}
	}
	printf("\n");
}


int Cdisplay::display(uint8_t* start, uint8_t* end, DisplayType t)
{
	if (start > end) return -1;
	if (t == DisplayType::string) std::cout << (char *)start << endl;
	if (t == DisplayType::ascii) for (; start < end; start++) printf("%c", * start);
	if (t == DisplayType::hex) for (; start < end; start++) Cdisplay::display_hex((char *)start, end - start, false);
	if (t == DisplayType::hex_offset) for (; start < end; start++) Cdisplay::display_hex((char*)start, end - start,true);
	return 0;
}

#ifndef DISPLAY_TEST
#define DISPLAY_TEST 0//1
#endif

#if DISPLAY_TEST
#include "all_h_include.h"

void display_test()
{
	char data[513];
	for (int i = 0; i < sizeof(data); i++) data[i] = (unsigned char)i;//init test data

	//void  Cdisplay::display_hex(char* buf, size_t size, bool display_offset, int data_type, bool tag_ascii, int space_count, int separate_count, int max_separate, char placeholder)
	Cdisplay::display_hex(data, sizeof(data), true, (int)DisplayStyle::byte, true, 2, -1, 16, '.');//no style
	Cdisplay::display_hex(data, sizeof(data),true,(int)DisplayStyle::byte,true,2,16,16,'.');//byte style 
	Cdisplay::display_hex(data, sizeof(data), true, (int)DisplayStyle::word, true, 2, 16, 16, '.');//word style 
	Cdisplay::display_hex(data, sizeof(data), true, (int)DisplayStyle::dword, true, 2, 16, 16, '.');//dword style 
	Cdisplay::display_hex(data, sizeof(data), true, (int)DisplayStyle::qword, true, 2, 16, 16, '.');//qword style
}

int main(int argc, char *argv[])
{
	std::cout << "DISPLAY_TEST\n\n";
	display_test();
	return 0;
}
#endif 