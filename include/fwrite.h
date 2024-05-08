#ifndef FWRITE_H
#define FWRITE_H

#include "../object.h"

namespace n_fwrite {
	class Cfwrite :public Object
	{
	public:
		Cfwrite();
		~Cfwrite();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfwrite); }
		static size_t fwrite_c(const void* ptr, size_t size, size_t count, FILE* stream);

	};
}

using namespace n_fwrite;

#endif
