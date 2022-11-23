#include "locate.h"
int Clocate::my_init(void *p)
{
	this->name = "Clocate";
	this->alias = "locate";
	return 0;
}

Clocate::Clocate()
{
	this->my_init();
}

Clocate::~Clocate()
{

}
//\r=13 \n=10 : windows \r\n  linux:\n  macos :\r
uint8_t* Clocate::line(uint8_t* start, uint8_t* end, int64_t line_number)
{
	int64_t line;
	if (line_number <= 1) return start;
	for (line=1; start < end; start++)
	{
		if (line == line_number) break; //n p

		if (*start == '\n')//linux style
		{
			line++;
			continue;
		}

		if (*start == '\r')//windows or macos style
		{
			line++;
			if (start + 1 < end && start[1] == '\n') //windows style
			{
				start ++;//point to '\n' for() start++ will skip \n
			}
		}
	}

	return start;
}

uint8_t* Clocate::line(uint8_t* start, size_t size, int64_t line_number)
{
	return this->line(start, start + size, line_number);
}

#ifndef LOCATE_TEST
#define LOCATE_TEST 0//1
#endif

#if LOCATE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
