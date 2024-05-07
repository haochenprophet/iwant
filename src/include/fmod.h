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
		size_t my_size() { return sizeof(Cfmod); }
		static double fmod_c(double numer, double denom);

	};
}

using namespace n_fmod;

#endif
