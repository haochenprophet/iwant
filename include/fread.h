#ifndef FREAD_H
#define FREAD_H

#include "../object.h"

namespace n_fread {
	class Cfread :public Object
	{
	public:
		Cfread();
		~Cfread();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfread); }
		static size_t fread_c(void* ptr, size_t size, size_t count, FILE* stream);

	};
}

using namespace n_fread;

#endif
