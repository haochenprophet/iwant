#ifndef PSLLW_H
#define PSLLW_H

#include "../object.h"

namespace n_PSLLW {
	class CPSLLW :public Object
	{
	public:
		CPSLLW();
		~CPSLLW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSLLW;

#endif
