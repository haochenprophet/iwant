#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "object/object.h"

namespace n_dictionary {
	class Cdictionary :public Object
	{
	public:
		Cdictionary();
		~Cdictionary();
		int my_init(void *p=nullptr);
	};
}

using namespace n_dictionary;

#endif
