#ifndef KEY_VALUE_H
#define KEY_VALUE_H

#include "object.h"

namespace n_key_value {
	class Ckey_value :public Object
	{
	public:
		Ckey_value();
		~Ckey_value();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ckey_value); }
	};
}

using namespace n_key_value;

#endif
