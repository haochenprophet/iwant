#ifndef SHA_H
#define SHA_H

#include "../object.h"

namespace n_sha {
	class Csha :public Object
	{
	public:
		Csha();
		~Csha();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csha); }
	};
}

using namespace n_sha;

#endif
