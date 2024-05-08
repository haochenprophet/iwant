#ifndef OPENSSL_SHA_H
#define OPENSSL_SHA_H

#include "../object.h"

namespace n_openssl_sha {
	class Copenssl_sha :public Object
	{
	public:
		Copenssl_sha();
		~Copenssl_sha();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Copenssl_sha); }
	};
}

using namespace n_openssl_sha;

#endif
