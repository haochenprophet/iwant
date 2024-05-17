#ifndef DEPLOY_FILE_H
#define DEPLOY_FILE_H

#include "object/object.h"

namespace n_deploy_file {
	class Cdeploy_file :public Object
	{
	public:
		Cdeploy_file();
		~Cdeploy_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_file); }
	};
}

using namespace n_deploy_file;

#endif
