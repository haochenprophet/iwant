#ifndef SECURITY_SELECT_H
#define SECURITY_SELECT_H

#include "../object.h"

namespace n_security_select {
	class Csecurity_select :public Object
	{
	public:
		Csecurity_select();
		~Csecurity_select();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_select); }
	};
}

using namespace n_security_select;

#endif
