#ifndef TEXT_ENCODE_H
#define TEXT_ENCODE_H

#include "object/object.h"

namespace n_text_encode {
	class Ctext_encode :public Object
	{
	public:
		Ctext_encode();
		~Ctext_encode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_encode); }
	};
}

using namespace n_text_encode;

#endif
