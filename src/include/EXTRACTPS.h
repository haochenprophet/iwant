#ifndef EXTRACTPS_H
#define EXTRACTPS_H

#include "../object.h"

namespace n_EXTRACTPS {
	class CEXTRACTPS :public Object
	{
	public:
		CEXTRACTPS();
		~CEXTRACTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_EXTRACTPS;

#endif
