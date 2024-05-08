#ifndef SPACEPORT_NITROGEN_H
#define SPACEPORT_NITROGEN_H

#include "../object.h"

namespace n_spaceport_nitrogen {
	class Cspaceport_nitrogen :public Object
	{
	public:
		Cspaceport_nitrogen();
		~Cspaceport_nitrogen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_nitrogen); }
	};
}

using namespace n_spaceport_nitrogen;

#endif
