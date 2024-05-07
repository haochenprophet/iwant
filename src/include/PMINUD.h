#ifndef PMINUD_H
#define PMINUD_H

#include "../object.h"

namespace n_PMINUD {
	class CPMINUD :public Object
	{
	public:
		CPMINUD();
		~CPMINUD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINUD;

#endif
