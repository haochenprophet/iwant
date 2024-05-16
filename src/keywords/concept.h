#ifndef CONCEPT_H
#define CONCEPT_H

#include "object/object.h"

namespace n_concept {
	class Cconcept :public Object
	{
	public:
		Cconcept();
		int my_init(void *p=nullptr);
	};
}

using namespace n_concept;

#endif
