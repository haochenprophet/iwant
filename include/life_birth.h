#ifndef LIFE_BIRTH_H
#define LIFE_BIRTH_H

#include "../object.h"

namespace n_life_birth {
	class Clife_birth :public Object
	{
	public:
		Clife_birth();
		~Clife_birth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_birth); }
	};
}

using namespace n_life_birth;

#endif
