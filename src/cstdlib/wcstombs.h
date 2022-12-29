#ifndef WCSTOMBS_H
#define WCSTOMBS_H

#include "../object.h"

namespace n_wcstombs {
	class Cwcstombs :public Object
	{
	public:
		Cwcstombs();
		~Cwcstombs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cwcstombs); }
		static size_t wcstombs_c(char* dest, const wchar_t* src, size_t max);

	};
}

using namespace n_wcstombs;

#endif
