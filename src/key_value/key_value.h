#ifndef KEY_VALUE_H
#define KEY_VALUE_H

#include "object/object.h"

namespace n_key_value {

	class key_value
	{
	public:
		void * key;//point key .UUID ,MD5 SHA key ..or  Udata
		size_t key_size;// key size
		void * value;// point value or value buffer address
		size_t value_size;// value size
		int type;
	public:
		key_value();
		~key_value();
		void my_init();
		bool is_me(void* key, size_t size);
		void set(void* key, size_t k_size, void* value, size_t v_size, int type);
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
