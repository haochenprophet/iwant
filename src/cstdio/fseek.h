#ifndef FSEEK_H
#define FSEEK_H

#include "../object.h"

namespace n_fseek {
	class Cfseek :public Object
	{
	public:
		Cfseek();
		~Cfseek();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfseek); }
		static int fseek_c(FILE* stream, long int offset, int origin);

	};
}

using namespace n_fseek;

#endif
