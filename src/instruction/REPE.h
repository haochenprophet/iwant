#ifndef REPE_H
#define REPE_H

#include "../object.h"

namespace n_REPE {
	class CREPE :public Object
	{
	public:
		CREPE();
		~CREPE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_REPE;

#endif
