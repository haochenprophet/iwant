#ifndef SECURITY_PAGE_H
#define SECURITY_PAGE_H

#include "../object.h"

namespace n_security_page {
	class Csecurity_page :public Object
	{
	public:
		Csecurity_page();
		~Csecurity_page();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_page); }
	};
}

using namespace n_security_page;

#endif
