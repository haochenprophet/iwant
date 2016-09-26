#ifndef OBJECT_H
#define OBJECT_H

#define OBJECT_DEBUG 0	//1
namespace n_object {
	class Object
	{
	public:
		virtual void * getClass();
	};
}

using namespace n_object;
#endif
