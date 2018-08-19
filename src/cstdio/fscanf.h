#ifndef FSCANF_H
#define FSCANF_H

#include "../object.h"

namespace n_fscanf {
	class Cfscanf :public Object
	{
	public:
		Cfscanf();
		~Cfscanf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fscanf;

#endif
