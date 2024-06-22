#include "text_split.h"
int Ctext_split::my_init(void *p)
{
	this->name = "Ctext_split";
	this->alias = "text_split";
	return 0;
}

Ctext_split::Ctext_split()
{
	this->my_init();
}

Ctext_split::~Ctext_split()
{

}

//\n	 for Unix or Linux
//\r\n	Windows
//\r 	Mac
char * Ctext_split::line(char * start, char * end, Cline_range * line_range)// start is 0 base to end
{

	if (start >= end) { return nullptr; } //check is end 

	line_range->start = start;

	for (; start < end; start++)
	{
		if (start[0] == '\r' || start[0] == '\n')
		{
			line_range->number++;
			line_range->end = start;//start point line end

			if (start + 1 < end && start[1] == '\n')  //check start offset 1 is windows \r\n end line
			{
				line_range->end = start+1;// line->end point \n
			}

			line_range->set_size(); //init size

			if ( line_range->end + 1 < end)
			{
				return (line_range->end + 1);// return next line start
			}
			//esle >=end return end
			return end;
		}
	}

	line_range->end = end; //end line 
	line_range->set_size(); //init size

	return end;
}

#ifndef TEXT_SPLIT_TEST
#define TEXT_SPLIT_TEST 0//1
#endif

#if TEXT_SPLIT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
