#ifndef MOVD_H
#define MOVD_H

#include "../object.h"

namespace n_MOVD {
	class CMOVD :public Object
	{
	public:
		CMOVD();
		~CMOVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVD;

#endif
