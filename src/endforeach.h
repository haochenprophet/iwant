#ifndef ENDFOREACH_H
#define ENDFOREACH_H

#include "object.h"

namespace n_endforeach {
	class Cendforeach :public Object
	{
	public:
		Cendforeach();
		int my_init(void *p=NULL);
	};
}

using namespace n_endforeach;

#endif
