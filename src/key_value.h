#ifndef KEY_VALUE_H
#define KEY_VALUE_H

#include "object.h"

namespace n_key_value {

	class key_value
	{
	public:
		void * key;//point key .UUID ,MD5 SHA key ..or  Udata
		void * value;// point value or value buffer address
		size_t size;// value size
	public:

	};

	typedef std::list<key_value *> key_value_list;

	class Ckey_value :public Object
	{
	public:
		key_value_list list;
	public:
		Ckey_value();
		~Ckey_value();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ckey_value); }
	};
}

using namespace n_key_value;

#endif
