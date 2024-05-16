#ifndef FSCANF_H
#define FSCANF_H

#include "object/object.h"

namespace n_fscanf {
	class Cfscanf :public Object
	{
	public:
		Cfscanf();
		~Cfscanf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfscanf); }
		static int fscanf_c(FILE* stream, const char* format, ...);

	};
}

using namespace n_fscanf;

#endif
