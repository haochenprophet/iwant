#ifndef TEXT_ACTION_H
#define TEXT_ACTION_H

#include "object/object.h"

namespace n_text_action {
	class Ctext_action :public Object
	{
	public:
		Ctext_action();
		~Ctext_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_action); }
	};
}

using namespace n_text_action;

#endif
