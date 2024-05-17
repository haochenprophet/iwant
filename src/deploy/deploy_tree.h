#ifndef DEPLOY_TREE_H
#define DEPLOY_TREE_H

#include "object/object.h"

namespace n_deploy_tree {
	class Cdeploy_tree :public Object
	{
	public:
		Cdeploy_tree();
		~Cdeploy_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_tree); }
	};
}

using namespace n_deploy_tree;

#endif
