#ifndef LIFE_TEACH_H
#define LIFE_TEACH_H

#include "object/object.h"

namespace n_life_teach {
	class Clife_teach :public Object
	{
	public:
		Clife_teach();
		~Clife_teach();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_teach); }
	};
}

using namespace n_life_teach;

#endif
