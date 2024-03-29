#ifndef RSA_H
#define RSA_H

#include "../object.h"

namespace n_rsa {
	class Crsa :public Object
	{
	public:
		Crsa();
		~Crsa();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crsa); }
	};
}

using namespace n_rsa;

#endif
