#ifndef SQL_BACKUP_H
#define SQL_BACKUP_H

#include "../object.h"

namespace n_sql_BACKUP {
	class Csql_BACKUP :public Object
	{
	public:
		Csql_BACKUP();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_BACKUP;

#endif
