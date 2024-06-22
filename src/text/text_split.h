#ifndef TEXT_SPLIT_H
#define TEXT_SPLIT_H

#include "object/object.h"
#include "text_line.h"

namespace n_text_split {
	class Ctext_split :public Object
	{
	public:
		Ctext_split();
		~Ctext_split();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_split); }
	public:
		char * line(char* start, char* end, Cline_range* line_range);
	};
}

using namespace n_text_split;

#endif
