#ifndef SECURITY_LADDER_H
#define SECURITY_LADDER_H

#include "../object.h"

namespace n_security_ladder {
	class Csecurity_ladder :public Object
	{
	public:
		Csecurity_ladder();
		~Csecurity_ladder();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_ladder); }
	};
}

using namespace n_security_ladder;

#endif
