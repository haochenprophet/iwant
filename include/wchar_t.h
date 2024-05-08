#ifndef WCHAR_T_H
#define WCHAR_T_H

#include "../object.h"

namespace n_wchar_t {
	class Cwchar_t :public Object
	{
	public:
		Cwchar_t();
		int my_init(void *p=nullptr);
	};
}

using namespace n_wchar_t;

#endif
