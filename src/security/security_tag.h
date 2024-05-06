#ifndef SECURITY_TAG_H
#define SECURITY_TAG_H

#include "../object.h"

namespace n_security_tag {
	class Csecurity_tag :public Object
	{
	public:
		Csecurity_tag();
		~Csecurity_tag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_tag); }
	};
}

using namespace n_security_tag;

#endif
