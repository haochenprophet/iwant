#ifndef VPMOVDB_H
#define VPMOVDB_H

#include "object/object.h"

namespace n_VPMOVDB {
	class CVPMOVDB :public Object
	{
	public:
		CVPMOVDB();
		~CVPMOVDB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVDB;

#endif
