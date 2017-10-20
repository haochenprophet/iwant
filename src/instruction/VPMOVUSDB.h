#ifndef VPMOVUSDB_H
#define VPMOVUSDB_H

#include "object.h"

namespace n_VPMOVUSDB {
	class CVPMOVUSDB :public Object
	{
	public:
		CVPMOVUSDB();
		~CVPMOVUSDB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVUSDB;

#endif
