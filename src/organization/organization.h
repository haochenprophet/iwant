#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include "../object.h"

namespace n_organization {
	class Corganization :public Object
	{
	public:
		Corganization();
		~Corganization();
		int my_init(void *p=nullptr);
	};
}

using namespace n_organization;

#endif
