#ifndef SHA256MSG1_H
#define SHA256MSG1_H

#include "object/object.h"

namespace n_SHA256MSG1 {
	class CSHA256MSG1 :public Object
	{
	public:
		CSHA256MSG1();
		~CSHA256MSG1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA256MSG1;

#endif
