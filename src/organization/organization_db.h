#ifndef ORGANIZATION_DB_H
#define ORGANIZATION_DB_H

#include "object.h"

namespace n_organization_db {
	class Corganization_db :public Object
	{
	public:
		Corganization_db();
		~Corganization_db();
		int my_init(void *p=nullptr);
	};
}

using namespace n_organization_db;

#endif
