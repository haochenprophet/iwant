#ifndef STRTOK_H
#define STRTOK_H

#include "../object.h"

namespace n_strtok {
	class Cstrtok :public Object
	{
	public:
		Cstrtok();
		~Cstrtok();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strtok;

#endif
