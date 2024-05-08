#ifndef SPACEPORT_DELETE_H
#define SPACEPORT_DELETE_H

#include "../object.h"

namespace n_spaceport_delete {
	class Cspaceport_delete :public Object
	{
	public:
		Cspaceport_delete();
		~Cspaceport_delete();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_delete); }
	};
}

using namespace n_spaceport_delete;

#endif
