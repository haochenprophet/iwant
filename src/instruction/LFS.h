#ifndef LFS_H
#define LFS_H

#include "object/object.h"

namespace n_LFS {
	class CLFS :public Object
	{
	public:
		CLFS();
		~CLFS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LFS;

#endif
