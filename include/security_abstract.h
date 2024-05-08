#ifndef SECURITY_ABSTRACT_H
#define SECURITY_ABSTRACT_H

#include "../object.h"

namespace n_security_abstract {
	class Csecurity_abstract :public Object
	{
	public:
		Csecurity_abstract();
		~Csecurity_abstract();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_abstract); }
	};
}

using namespace n_security_abstract;

#endif
