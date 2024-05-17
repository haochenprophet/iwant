#ifndef DEPLOY_DOC_H
#define DEPLOY_DOC_H

#include "object/object.h"

namespace n_deploy_doc {
	class Cdeploy_doc :public Object
	{
	public:
		Cdeploy_doc();
		~Cdeploy_doc();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_doc); }
	};
}

using namespace n_deploy_doc;

#endif
