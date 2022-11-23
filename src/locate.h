#ifndef LOCATE_H
#define LOCATE_H

#include "object.h"

namespace n_locate {
	class Clocate :public Object
	{
	public:
		Clocate();
		~Clocate();
		int my_init(void *p=nullptr);
		uint8_t* line(uint8_t* start, uint8_t* end, int64_t line_number);
		uint8_t* line(uint8_t* start, size_t size, int64_t line_number);
	};
}

using namespace n_locate;

#endif
