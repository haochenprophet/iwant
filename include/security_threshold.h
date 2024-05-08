#ifndef SECURITY_THRESHOLD_H
#define SECURITY_THRESHOLD_H

#include "../object.h"

namespace n_security_threshold {
	class Csecurity_threshold :public Object
	{
	public:
		Csecurity_threshold();
		~Csecurity_threshold();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_threshold); }
	};
}

using namespace n_security_threshold;

#endif
