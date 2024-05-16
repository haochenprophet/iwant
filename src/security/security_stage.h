#ifndef SECURITY_STAGE_H
#define SECURITY_STAGE_H

#include "object/object.h"

namespace n_security_stage {
	class Csecurity_stage :public Object
	{
	public:
		Csecurity_stage();
		~Csecurity_stage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_stage); }
	};
}

using namespace n_security_stage;

#endif
