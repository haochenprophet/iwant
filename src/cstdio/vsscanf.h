#ifndef VSSCANF_H
#define VSSCANF_H

#include "../object.h"

namespace n_vsscanf {
	class Cvsscanf :public Object
	{
	public:
		Cvsscanf();
		~Cvsscanf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vsscanf;

#endif
