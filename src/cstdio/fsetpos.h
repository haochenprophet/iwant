#ifndef FSETPOS_H
#define FSETPOS_H

#include "../object.h"

namespace n_fsetpos {
	class Cfsetpos :public Object
	{
	public:
		Cfsetpos();
		~Cfsetpos();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfsetpos); }
		static int fsetpos_c(FILE* stream, const fpos_t* pos);

	};
}

using namespace n_fsetpos;

#endif
