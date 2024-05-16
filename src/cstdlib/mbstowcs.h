#ifndef MBSTOWCS_H
#define MBSTOWCS_H

#include "object/object.h"

namespace n_mbstowcs {
	class Cmbstowcs :public Object
	{
	public:
		Cmbstowcs();
		~Cmbstowcs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmbstowcs); }
		static size_t mbstowcs_c(wchar_t* dest, const char* src, size_t max);

	};
}

using namespace n_mbstowcs;

#endif
