#ifndef PROTOCOL_H
#define PROTOCOL_H

#include "../object.h"

namespace n_protocol {
	class Cprotocol :public Object
	{
	public:
		Cprotocol();
		~Cprotocol();
		int my_init(void *p=nullptr);
	};
}

using namespace n_protocol;

#endif
