#ifndef IWANT_H
#define IWANT_H

#include "object.h"

namespace n_iwant {
	class Ciwant:public Object
	{
	public:
		Ciwant();
		~Ciwant();
		Object * who_am_i();//object introduce
	};

}
using namespace n_iwant;
#endif