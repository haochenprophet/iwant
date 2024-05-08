#ifndef PCIE_H
#define PCIE_H

#include "../object.h"

namespace n_pcie {
	class Cpcie :public Object
	{
	public:
		Cpcie();
		~Cpcie();
		int my_init(void *p=nullptr);
	};
}

using namespace n_pcie;

#endif
