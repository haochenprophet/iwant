#ifndef SECURITY_RECORD_H
#define SECURITY_RECORD_H

#include "../object.h"

namespace n_security_record {
	class Csecurity_record :public Object
	{
	public:
		Csecurity_record();
		~Csecurity_record();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_record); }
	};
}

using namespace n_security_record;

#endif
