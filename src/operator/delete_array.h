#ifndef DELETE_ARRAY_H
#define DELETE_ARRAY_H

#include "operator.h"

namespace n_delete_array {
	class Cdelete_array :public Coperator
	{
	public:
		Cdelete_array();
		~Cdelete_array();
		int my_init(void *p=nullptr);
	};
}

using namespace n_delete_array;

#endif
