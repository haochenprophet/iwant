#ifndef VSCANF_H
#define VSCANF_H

#include "../object.h"

namespace n_vscanf {
	class Cvscanf :public Object
	{
	public:
		Cvscanf();
		~Cvscanf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vscanf;

#endif
