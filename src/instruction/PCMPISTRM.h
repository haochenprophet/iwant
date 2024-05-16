#ifndef PCMPISTRM_H
#define PCMPISTRM_H

#include "object/object.h"

namespace n_PCMPISTRM {
	class CPCMPISTRM :public Object
	{
	public:
		CPCMPISTRM();
		~CPCMPISTRM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPISTRM;

#endif
