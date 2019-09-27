#ifndef TREE_DB_H
#define TREE_DB_H

#include "object.h"

namespace n_tree_db {
	class Ctree_db :public Object
	{
	public:
		Ctree_db();
		~Ctree_db();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tree_db;

#endif
