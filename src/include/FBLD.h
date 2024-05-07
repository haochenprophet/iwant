#ifndef FBLD_H
#define FBLD_H

#include "../object.h"

namespace n_FBLD {
	class CFBLD :public Object
	{
	public:
		CFBLD();
		~CFBLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FBLD;

#endif
