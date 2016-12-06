#ifndef SQL_DISK_H
#define SQL_DISK_H

#include "object.h"

namespace n_sql_DISK {
	class Csql_DISK :public Object
	{
	public:
		Csql_DISK();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DISK;

#endif
