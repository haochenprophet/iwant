#ifndef CRC32_H
#define CRC32_H

#include "object/object.h"

namespace n_CRC32 {
	class CCRC32 :public Object
	{
	public:
		CCRC32();
		~CCRC32();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CRC32;

#endif
