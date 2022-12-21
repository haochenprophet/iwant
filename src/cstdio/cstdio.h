#ifndef CSTDIO_H
#define CSTDIO_H

#include "../object.h"

namespace n_cstdio {
	//class Ccstdio is the cstdio package master class
	class Ccstdio :public Object
	{
	public:
		Ccstdio();
		~Ccstdio();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccstdio); }
		void add_global_objects(Object* p); //Add cstdio package global object to Object* p
	};
}

using namespace n_cstdio;

#endif
