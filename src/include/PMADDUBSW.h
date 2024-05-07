#ifndef PMADDUBSW_H
#define PMADDUBSW_H

#include "../object.h"

namespace n_PMADDUBSW {
	class CPMADDUBSW :public Object
	{
	public:
		CPMADDUBSW();
		~CPMADDUBSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMADDUBSW;

#endif
