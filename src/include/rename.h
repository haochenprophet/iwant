#ifndef RENAME_H
#define RENAME_H

#include "../object.h"

namespace n_rename {
	class Crename :public Object
	{
	public:
		Crename();
		~Crename();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Crename); }
		static int rename_c(const char* oldname, const char* newname);

	};
}

using namespace n_rename;

#endif
