#ifndef TEXT_LINE_H
#define TEXT_LINE_H

#include "object/object.h"

namespace n_text_line {

	class Cline_range
	{
	public:
		char * start;
		char * end;
		size_t number;//line number
		size_t size;//start_to_end_size;
		int status;
		int type;
		int attribute;
	public:
		Cline_range();
		size_t set_size(size_t size = 0);
		int display();
		int compare(Cline_range* range);
		int compare(char* start,char* end , size_t size);
	};

	class Ctext_line :public Object
	{
	public:
		std::list<Cline_range> line_range_list;
	public:
		Ctext_line();
		~Ctext_line();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_line); }
	public:
		int display();
		size_t split_line(char* start, char* end); //return endline number
		int diff(Ctext_line * text_line);
	};
}

using namespace n_text_line;

#endif