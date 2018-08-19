#ifndef FREOPEN_H
#define FREOPEN_H

#include "../object.h"

namespace n_freopen {
	class Cfreopen :public Object
	{
	public:
		Cfreopen();
		~Cfreopen();
		int my_init(void *p=nullptr);
	};
}

using namespace n_freopen;

#endif
