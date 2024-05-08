#ifndef SPACEPORT_DECORATE_H
#define SPACEPORT_DECORATE_H

#include "../object.h"

namespace n_spaceport_decorate {
	class Cspaceport_decorate :public Object
	{
	public:
		Cspaceport_decorate();
		~Cspaceport_decorate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_decorate); }
	};
}

using namespace n_spaceport_decorate;

#endif
