#ifndef SHA256MSG2_H
#define SHA256MSG2_H

#include "object/object.h"

namespace n_SHA256MSG2 {
	class CSHA256MSG2 :public Object
	{
	public:
		CSHA256MSG2();
		~CSHA256MSG2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHA256MSG2;

#endif
