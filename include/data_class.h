#ifndef DATA_CLASS_H 
#define DATA_CLASS_H

#include "object.h"

namespace n_data {
	class Cdata :public Object
	{
	public:
		Cdata();
		~Cdata();
	};
}
using namespace n_data;

#endif