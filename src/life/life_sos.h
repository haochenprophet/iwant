#ifndef LIFE_SOS_H
#define LIFE_SOS_H

#include "object/object.h"

namespace n_life_sos {
	class Clife_sos :public Object
	{
	public:
		Clife_sos();
		~Clife_sos();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_sos); }
	};
}

using namespace n_life_sos;

#endif
