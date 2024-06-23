#ifndef TEXT_ATTRIBUTE_H
#define TEXT_ATTRIBUTE_H

#include "object/object.h"

namespace n_text_attribute {
	class Ctext_attribute :public Object
	{
	public:
		Ctext_attribute();
		~Ctext_attribute();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_attribute); }
	};
}

using namespace n_text_attribute;

#endif
