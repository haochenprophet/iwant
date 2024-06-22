#ifndef TEXT_LINE_H
#define TEXT_LINE_H

#include "object/object.h"

namespace n_text_line {
	class Ctext_line :public Object
	{
	public:
		Ctext_line();
		~Ctext_line();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_line); }
	};
}

using namespace n_text_line;

#endif
