#ifndef RECOGNITION_INTEL_GPIO_H
#define RECOGNITION_INTEL_GPIO_H

#include "object/object.h"
#include "recognition_tab.h"

#define INTEL_SBREG_BAR             0xFD000000
#define INTEL_PID_GPIOCOM0          0x6E0000
#define INTEL_PID_GPIOCOM1          0x6D0000
#define INTEL_PID_GPIOCOM2          0x6C0000
#define INTEL_PID_GPIOCOM3          0x6B0000
#define INTEL_PID_GPIOCOM4          0x6A0000
#define INTEL_PID_GPIOCOM5          0x690000

#define PAD_CFG_DW0_GPPC_A_0 (INTEL_SBREG_BAR+INTEL_PID_GPIOCOM0+0x700)

namespace n_recognition_intel_gpio {
	class Crecognition_intel_gpio :public Object
	{
	public:
		Crecognition_intel_gpio();
		~Crecognition_intel_gpio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crecognition_intel_gpio); }
		int analysis(bit_value_type bit_value, bit_information* infor, int infor_count);
		int analysis(unsigned long dw_data, data_information *infor,int infor_count);

	};
}

using namespace n_recognition_intel_gpio;

#endif
