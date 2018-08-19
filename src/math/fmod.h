#ifndef FMOD_H
#define FMOD_H

#include "../object.h"

namespace n_fmod {
	class Cfmod :public Object
	{
	public:
		Cfmod();
		~Cfmod();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fmod;

#endif
