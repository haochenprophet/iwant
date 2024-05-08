#ifndef CSTDLIB_H
#define CSTDLIB_H

#include "../object.h"

namespace n_cstdlib {
	class Ccstdlib :public Object
	{
	public:
		Ccstdlib();
		~Ccstdlib();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccstdlib); }
		void add_global_objects(Object* p); //Add stdlib package global object to Object* p

	};
}

using namespace n_cstdlib;

#endif
