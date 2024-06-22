#ifndef TEXT_H
#define TEXT_H

#include "object/object.h"

namespace n_text {
	class Ctext :public Object
	{
	public:
		Ctext();
		~Ctext();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext); }
	};
}

using namespace n_text;

#endif
