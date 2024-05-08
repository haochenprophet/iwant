#ifndef SPACEPORT_CLOTHES_H
#define SPACEPORT_CLOTHES_H

#include "../object.h"

namespace n_spaceport_clothes {
	class Cspaceport_clothes :public Object
	{
	public:
		Cspaceport_clothes();
		~Cspaceport_clothes();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_clothes); }
	};
}

using namespace n_spaceport_clothes;

#endif
