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

//int separate_count = 16, max_separate = 16;
//bool display_offset = true;
//bool tag_ascii = false;
//int space_count = 2;
//char placeholder = '.';

void Cdisplay:: display_hex(char* buf, size_t size, bool display_offset, bool tag_ascii, int space_count, int separate_count, int max_separate, char placeholder)
{
	size_t i, n, offset = 0;

	for (i = 0; i < size; i++) buf[i] = (unsigned char)i;//init test data

	if (separate_count < 0)
	{
		display_offset = false;
		space_count = 0;
	}
	if (separate_count > max_separate) separate_count = max_separate;

	if (display_offset)
	{
		printf("[offset]:");//check and display offset
		dispay_space(space_count);

		for (i = 0; i < separate_count; i++) { printf("%02X", (int)i); dispay_space(space_count); }//display index 
		if (tag_ascii)//display ascii index
		{
			for (i = 0; i < separate_count; i++) { printf("%02X", (int)i); dispay_space(space_count); }
		}

		printf("\n");
	}

	for (i = 0, n = i; i < size; i++, offset++)
	{
		if (display_offset && i % separate_count == 0) { printf("%08lX:", (int)offset); dispay_space(space_count); }

		printf("%02X", (unsigned char)buf[i]); dispay_space(space_count);

		if (i % separate_count == (separate_count - 1))
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
int main(int argc, char *argv[])
{
	std::cout << "DISPLAY_TEST\n\n";

	return 0;
}
#endif 