#ifndef PADDB_H
#define PADDB_H

#include "object/object.h"

namespace n_PADDB {
	class CPADDB :public Object
	{
	public:
		CPADDB();
		~CPADDB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDB;

#endif
