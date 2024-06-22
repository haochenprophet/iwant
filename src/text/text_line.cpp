#include "text_line.h"
#include "text_split.h"

Cline_range::Cline_range()
{
	this->start = nullptr;
	this->end = nullptr;
	this->size = 0;
	this->number = 1; //init 1 
}

int Cline_range::display()
{
//	printf("start=%08lX [%c],end=%08lX,size=%d\n", this->start, this->start[0], this->end, this->size);//test

	if (this->start == nullptr || this->end == nullptr || this->size == 0) { return -1; }
	for (int n =0;n<this->size;n++)
	{
		std::cout << this->start[n];
	}
	std::cout << endl;
	return 0;
}

size_t Cline_range::set_size(size_t size)
{
	//case 1
	if (size > 0)
	{
		this->size = size;
		return size;
	}
	//case 2
	if (this->start < this->end)
	{
		this->size = (uint8_t*)this->end - (uint8_t*)this->start;
		return this->size;
	}
	//case 3
	this->size = 0;
	return this->size;
}

int Ctext_line::my_init(void *p)
{
	this->name = "Ctext_line";
	this->alias = "text_line";
	return 0;
}

Ctext_line::Ctext_line()
{
	this->my_init();
}

Ctext_line::~Ctext_line()
{
	this->line_range_list.clear();
}

//return 0 not exist line 
size_t Ctext_line::split_line(char* start, char* end)
{
	if (start == nullptr || end == nullptr || start >= end) {return 0;} //check input 

	Ctext_split split;
	Cline_range line_range;
	
	do {
		start = split.line(start, end, &line_range);
		this->line_range_list.push_back(line_range);
		//line_range.display();//test ok
	} while (start != nullptr && start < end );

	return line_range.number;
}

int Ctext_line::display()
{
	for (std::list<Cline_range>::iterator it = this->line_range_list.begin(); it != this->line_range_list.end(); ++it)
	{
		it->display();
	}
	return 0;
}

int Ctext_line::diff(char* start, char* end)
{
	for (std::list<Cline_range>::iterator it = this->line_range_list.begin(); it != this->line_range_list.end(); ++it)
	{
		it->display();
	}
}

#ifndef TEXT_LINE_TEST
#define TEXT_LINE_TEST 0//1
#endif

#if TEXT_LINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
