#ifndef WARSHIP_RADIO_H
#define WARSHIP_RADIO_H

#include "object/object.h"

namespace n_warship_radio {
	class Cwarship_radio :public Object
	{
	public:
		Cwarship_radio();
		~Cwarship_radio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_radio); }
	};
}

using namespace n_warship_radio;

#endif
