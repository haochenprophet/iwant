#ifndef OCEAN_SOUND_H
#define OCEAN_SOUND_H

#include "object/object.h"

namespace n_ocean_sound {
	class Cocean_sound :public Object
	{
	public:
		Cocean_sound();
		~Cocean_sound();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_sound); }
	};
}

using namespace n_ocean_sound;

#endif
