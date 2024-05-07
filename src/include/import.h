#ifndef IMPORT_H
#define IMPORT_H

#include "../object.h"

namespace n_import {
	class Cimport :public Object
	{
	public:
		Cimport();
		int my_init(void *p=nullptr);
	};
}

using namespace n_import;

#endif
