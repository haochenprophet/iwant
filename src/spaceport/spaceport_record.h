#ifndef SPACEPORT_RECORD_H
#define SPACEPORT_RECORD_H

#include "object/object.h"

namespace n_spaceport_record {
	class Cspaceport_record :public Object
	{
	public:
		Cspaceport_record();
		~Cspaceport_record();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_record); }
	};
}

using namespace n_spaceport_record;

#endif
