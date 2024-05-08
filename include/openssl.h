#ifndef OPENSSL_H
#define OPENSSL_H

#include "../all_h_include.h"

namespace n_openssl {
	class Copenssl :public Object
	{
	public:
		Copenssl();
		~Copenssl();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Copenssl); }
	};
}

using namespace n_openssl;

#endif
