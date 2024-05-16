#ifndef SPACEPORT_CLEAN_H
#define SPACEPORT_CLEAN_H

#include "object/object.h"

namespace n_spaceport_clean {
	class Cspaceport_clean :public Object
	{
	public:
		Cspaceport_clean();
		~Cspaceport_clean();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_clean); }
	};
}

using namespace n_spaceport_clean;

#endif
