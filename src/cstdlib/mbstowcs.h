#ifndef MBSTOWCS_H
#define MBSTOWCS_H

#include "../object.h"

namespace n_mbstowcs {
	class Cmbstowcs :public Object
	{
	public:
		Cmbstowcs();
		~Cmbstowcs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmbstowcs); }
	};
}

using namespace n_mbstowcs;

#endif
