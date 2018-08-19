#ifndef VSPRINTF_H
#define VSPRINTF_H

#include "../object.h"

namespace n_vsprintf {
	class Cvsprintf :public Object
	{
	public:
		Cvsprintf();
		~Cvsprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vsprintf;

#endif
