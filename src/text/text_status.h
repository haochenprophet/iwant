#ifndef TEXT_STATUS_H
#define TEXT_STATUS_H

#include "object/object.h"

namespace n_text_status {
	class Ctext_status :public Object
	{
	public:
		Ctext_status();
		~Ctext_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_status); }
	};
}

using namespace n_text_status;

#endif
