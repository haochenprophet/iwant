#ifndef SECURITY_INFORMATION_H
#define SECURITY_INFORMATION_H

#include "../object.h"

namespace n_security_information {
	class Csecurity_information :public Object
	{
	public:
		Csecurity_information();
		~Csecurity_information();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_information); }
	};
}

using namespace n_security_information;

#endif
