#ifndef EXPORT_H
#define EXPORT_H

#include "object.h"

namespace n_export {
	class Cexport :public Object
	{
	public:
		Cexport();
		int my_init(void *p=NULL);
	};
}

using namespace n_export;

#endif
