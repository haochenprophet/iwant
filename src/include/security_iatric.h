#ifndef SECURITY_IATRIC_H
#define SECURITY_IATRIC_H

#include "../object.h"

namespace n_security_iatric {
	class Csecurity_iatric :public Object
	{
	public:
		Csecurity_iatric();
		~Csecurity_iatric();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_iatric); }
	};
}

using namespace n_security_iatric;

#endif
