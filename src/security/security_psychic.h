#ifndef SECURITY_PSYCHIC_H
#define SECURITY_PSYCHIC_H

#include "object/object.h"

namespace n_security_psychic {
	class Csecurity_psychic :public Object
	{
	public:
		Csecurity_psychic();
		~Csecurity_psychic();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_psychic); }
	};
}

using namespace n_security_psychic;

#endif
