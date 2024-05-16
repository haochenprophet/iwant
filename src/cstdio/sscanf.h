#ifndef SSCANF_H
#define SSCANF_H

#include "object/object.h"

namespace n_sscanf {
	class Csscanf :public Object
	{
	public:
		Csscanf();
		~Csscanf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csscanf); }
		static int sscanf_c(const char* s, const char* format, ...);

	};
}

using namespace n_sscanf;

#endif
