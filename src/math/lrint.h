#ifndef LRINT_H
#define LRINT_H

#include "../object.h"

namespace n_lrint {
	class Clrint :public Object
	{
	public:
		Clrint();
		~Clrint();
		int my_init(void *p=nullptr);
	};
}

using namespace n_lrint;

#endif
