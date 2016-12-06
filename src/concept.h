#ifndef CONCEPT_H
#define CONCEPT_H

#include "object.h"

namespace n_concept {
	class Cconcept :public Object
	{
	public:
		Cconcept();
		int my_init(void *p=NULL);
	};
}

using namespace n_concept;

#endif
