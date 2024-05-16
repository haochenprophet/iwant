#ifndef CODE_CHECKSUM_H
#define CODE_CHECKSUM_H

#include "object/object.h"

namespace n_code_checksum {
	class Ccode_checksum :public Object
	{
	public:
		Ccode_checksum();
		~Ccode_checksum();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_checksum); }
	};
}

using namespace n_code_checksum;

#endif
