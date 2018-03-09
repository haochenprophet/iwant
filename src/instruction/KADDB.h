#ifndef KADDB_H
#define KADDB_H

#include "../object.h"

namespace n_KADDB {
	class CKADDB :public Object
	{
	public:
		CKADDB();
		~CKADDB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KADDB;

#endif
