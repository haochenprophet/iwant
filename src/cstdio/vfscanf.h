#ifndef VFSCANF_H
#define VFSCANF_H

#include "../object.h"

namespace n_vfscanf {
	class Cvfscanf :public Object
	{
	public:
		Cvfscanf();
		~Cvfscanf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vfscanf;

#endif
