#ifndef STRFTIME_H
#define STRFTIME_H

#include "../object.h"

namespace n_strftime {
	class Cstrftime :public Object
	{
	public:
		Cstrftime();
		~Cstrftime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrftime); }
		static size_t strftime_c(char* ptr, size_t maxsize, const char* format, const struct tm* timeptr);

	};
}

using namespace n_strftime;

#endif
