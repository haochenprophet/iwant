#ifndef PCMPESTRM_H
#define PCMPESTRM_H

#include "object/object.h"

namespace n_PCMPESTRM {
	class CPCMPESTRM :public Object
	{
	public:
		CPCMPESTRM();
		~CPCMPESTRM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPESTRM;

#endif
