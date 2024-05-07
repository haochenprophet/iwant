#ifndef TOWLOWER_H
#define TOWLOWER_H

#include "../object.h"

namespace n_towlower {
	class Ctowlower :public Object
	{
	public:
		Ctowlower();
		~Ctowlower();
		int my_init(void *p=nullptr);
	};
}

using namespace n_towlower;

#endif
