#ifndef GPIO_H
#define GPIO_H

#include "object/object.h"

namespace n_gpio {
	class Cgpio :public Object
	{
	public:
		Cgpio();
		~Cgpio();
		int my_init(void *p=nullptr);
		virtual int get_native(void * gpio);//gpio point : gpio pin definition for all kinds of chips
		virtual int set_to_native(void* gpio);
		virtual int set_gpio_owner(void* gpio);//set chip owner 
		virtual int get_gpio_owner(void* gpio);//get chip owner 
		virtual int get_gpio(void* gpio);//get gpio select
		virtual int set_to_gpio(void* gpio);//set gpio select
		virtual int get_gpi(void* gpio);//get gpi pin select 
		virtual int set_to_gpi(void* gpio);//set gpi pin select 
		virtual int get_gpo(void* gpio);//set gpi pin select 
		virtual int set_to_gpo(void* gpio);
		virtual int get_level(void* gpio);// get gpio(gpi+gpo) level 
		virtual int set_level(void* gpio);//set gpo level 
		virtual int get_invert(void* gpio);//set gpo level 
		virtual int set_invert(void* gpio);//set gpo level 
		virtual int get_gpi_interrupt(void* gpio);
		virtual int set_gpi_interrupt(void* gpio);
		virtual int get_gpi_interrupt_mode(void* gpio);//edge ,level ...
		virtual int set_gpi_interrupt_mode(void* gpio);//edge ,level ...
		virtual int get_gpio_pin_power(void* gpio);
		virtual int set_gpio_pin_power(void* gpio);
		virtual int get_gpio_pin_reset(void* gpio);
		virtual int set_gpio_pin_reset(void* gpio);
	};
}

using namespace n_gpio;

#endif
