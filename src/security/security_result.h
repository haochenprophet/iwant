#ifndef SECURITY_RESULT_H
#define SECURITY_RESULT_H

#include "object/object.h"

namespace n_security_result {
	class Csecurity_result :public Object
	{
	public:
		Csecurity_result();
		~Csecurity_result();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_result); }
	};
}

using namespace n_security_result;

#endif
