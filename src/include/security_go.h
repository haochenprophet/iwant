#ifndef SECURITY_GO_H
#define SECURITY_GO_H

#include "../object.h"

namespace n_security_go {
	class Csecurity_go :public Object
	{
	public:
		Csecurity_go();
		~Csecurity_go();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_go); }
	};
}

using namespace n_security_go;

#endif
