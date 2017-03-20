#ifndef COMPANY_H
#define COMPANY_H

#include "object.h"

namespace n_company {
	class Ccompany :public Object
	{
	public:
		Ccompany();
		~Ccompany();
		int my_init(void *p=nullptr);
	};
}

using namespace n_company;

#endif
