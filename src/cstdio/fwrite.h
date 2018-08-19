#ifndef FWRITE_H
#define FWRITE_H

#include "../object.h"

namespace n_fwrite {
	class Cfwrite :public Object
	{
	public:
		Cfwrite();
		~Cfwrite();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fwrite;

#endif
