#ifndef PSUBB_H
#define PSUBB_H

#include "object/object.h"

namespace n_PSUBB {
	class CPSUBB :public Object
	{
	public:
		CPSUBB();
		~CPSUBB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBB;

#endif
