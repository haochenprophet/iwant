#include "text_line.h"
#include "text_split.h"
#include "algorithm/find.h"

Cline_range::Cline_range()
{
	this->start = nullptr;
	this->end = nullptr;
	this->size = 0;
	this->number = 1; //init 1 
	this->attribute = 0;
	this->status = 0;
	this->type = 0;
}

int Cline_range::display()
{
//	printf("start=%08lX [%c],end=%08lX,size=%d\n", this->start, this->start[0], this->end, this->size);//test

	if (this->start == nullptr || this->end == nullptr || this->size == 0) { return -1; }
	for (int n =0;n<this->size;n++)
	{
		std::cout << this->start[n];
	}
//	std::cout << endl;
	return 0;
}

//-1 :error 0:== 1: !=
int Cline_range::compare(Cline_range * range)
{
	if (this->start == nullptr || this->end == nullptr || this->size == 0) { return -1; }// error
	if (range->start == nullptr || range->end == nullptr || range->size == 0) { return -1; }// error
	if (this->size != range->size) { return 1; } //!=
	for (size_t i = 0; i < this->size; i++)
	{
		if (this->start[i] != range->start[i]) return 1;
	}
	return 0;
}

int Cline_range::compare(char* start, char* end, size_t size)
{
	if (this->start == nullptr || this->end == nullptr || this->size == 0) { return -1; }// error
	if (start == nullptr || end == nullptr || size == 0) { return -1; }// error
	if (this->size != size) { return 1; } //!=
	for (size_t i = 0; i < this->size; i++)
	{
		if (this->start[i] != start[i]) return 1;
	}
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

int Ctext_line::diff(Ctext_line* text_line, char* out_file)
{
	int ret = 0;
	int found = -1;

	FILE* fp;

	if (!(fp = fopen(out_file, "wb+"))) {
		printf("Error:can not create the %s file.\n", out_file);
		return -1;
	}

	for (std::list<Cline_range>::iterator it = this->line_range_list.begin(); it != this->line_range_list.end(); ++it)
	{
		found = 0;
		for (std::list<Cline_range>::iterator it_text_line = text_line->line_range_list.begin(); it_text_line != text_line->line_range_list.end(); ++it_text_line)
		{
			if (0 == it->compare(it_text_line->start, it_text_line->end, it_text_line->size))
			{
				found = 1;
				break;
			}
		}

		if (found == 0) //not found is different
		{
			fwrite(it->start,1,it->size, fp);//out diff to log file
			it->display();
			ret = 1;
		}
	}

	fclose(fp);

	return ret;
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
