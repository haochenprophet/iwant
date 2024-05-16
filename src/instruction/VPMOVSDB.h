#ifndef VPMOVSDB_H
#define VPMOVSDB_H

#include "object/object.h"

namespace n_VPMOVSDB {
	class CVPMOVSDB :public Object
	{
	public:
		CVPMOVSDB();
		~CVPMOVSDB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVSDB;

#endif
