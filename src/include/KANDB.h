#ifndef KANDB_H
#define KANDB_H

#include "../object.h"

namespace n_KANDB {
	class CKANDB :public Object
	{
	public:
		CKANDB();
		~CKANDB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDB;

#endif
