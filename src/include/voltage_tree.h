#ifndef VOLTAGE_TREE_H
#define VOLTAGE_TREE_H

#include "../object.h"

namespace n_voltage_tree {
	class Cvoltage_tree :public Object
	{
	public:
		Cvoltage_tree();
		~Cvoltage_tree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cvoltage_tree); }
	};
}

using namespace n_voltage_tree;

#endif
