#ifndef FOPEN_H
#define FOPEN_H

#include "../object.h"

namespace n_fopen {
	class Cfopen :public Object
	{
	public:
		Cfopen();
		~Cfopen();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fopen;

#endif
