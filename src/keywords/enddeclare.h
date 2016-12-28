#ifndef ENDDECLARE_H
#define ENDDECLARE_H

#include "object.h"

namespace n_enddeclare {
	class Cenddeclare :public Object
	{
	public:
		Cenddeclare();
		int my_init(void *p=nullptr);
	};
}

using namespace n_enddeclare;

#endif
