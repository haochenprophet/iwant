#ifndef REPZ_H
#define REPZ_H

#include "object.h"

namespace n_REPZ {
	class CREPZ :public Object
	{
	public:
		CREPZ();
		~CREPZ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_REPZ;

#endif
