#ifndef SSCANF_H
#define SSCANF_H

#include "../object.h"

namespace n_sscanf {
	class Csscanf :public Object
	{
	public:
		Csscanf();
		~Csscanf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sscanf;

#endif
