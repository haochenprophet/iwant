#ifndef ASSIGN_DIRECT_H
#define ASSIGN_DIRECT_H

#include "../operator.h"

namespace n_assign_direct {
	class Cassign_direct :public Coperator
	{
	public:
		Cassign_direct();
		~Cassign_direct();
		int my_init(void *p=nullptr);
	};
}

using namespace n_assign_direct;

#endif
