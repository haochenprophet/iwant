#ifndef SATELLITE_TREE_H
#define SATELLITE_TREE_H

#include "../object.h"

namespace n_satellite_tree {
	class Csatellite_tree :public Object
	{
	public:
		Csatellite_tree();
		~Csatellite_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_tree); }
	};
}

using namespace n_satellite_tree;

#endif
