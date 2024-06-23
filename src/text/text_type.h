#ifndef TEXT_TYPE_H
#define TEXT_TYPE_H

#include "object/object.h"

namespace n_text_type {
	class Ctext_type :public Object
	{
	public:
		Ctext_type();
		~Ctext_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_type); }
	};
}

using namespace n_text_type;

#endif
