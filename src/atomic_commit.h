#ifndef ATOMIC_COMMIT_H
#define ATOMIC_COMMIT_H

#include "object.h"

namespace n_atomic_commit {
	class Catomic_commit :public Object
	{
	public:
		Catomic_commit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atomic_commit;

#endif
