#ifndef VALIGND_H
#define VALIGND_H

#include "../object.h"

namespace n_VALIGND {
	class CVALIGND :public Object
	{
	public:
		CVALIGND();
		~CVALIGND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VALIGND;

#endif
