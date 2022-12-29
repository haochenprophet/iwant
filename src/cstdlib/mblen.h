#ifndef MBLEN_H
#define MBLEN_H

#include "../object.h"

namespace n_mblen {
	class Cmblen :public Object
	{
	public:
		Cmblen();
		~Cmblen();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmblen); }
		static int mblen_c(const char* pmb, size_t max);

	};
}

using namespace n_mblen;

#endif
