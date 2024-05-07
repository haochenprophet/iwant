#ifndef FOPEN_H
#define FOPEN_H

#include "../object.h"

namespace n_fopen {
	class Cfopen :public Object
	{
	public:
		Cfopen();
		~Cfopen();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfopen); }
		static FILE* fopen_c(const char* filename, const char* mode);

	};
}

using namespace n_fopen;

#endif
