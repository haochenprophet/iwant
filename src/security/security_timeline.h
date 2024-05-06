#ifndef SECURITY_TIMELINE_H
#define SECURITY_TIMELINE_H

#include "../object.h"

namespace n_security_timeline {
	class Csecurity_timeline :public Object
	{
	public:
		Csecurity_timeline();
		~Csecurity_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_timeline); }
	};
}

using namespace n_security_timeline;

#endif
