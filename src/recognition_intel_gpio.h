#ifndef RECOGNITION_INTEL_GPIO_H
#define RECOGNITION_INTEL_GPIO_H

#include "object.h"
#include "recognition_tab.h"

#define  GPIO_RX_STATE_DESC " \
	GPIO RX State (GPIORXSTATE): \
	This is the current internal RX pad state after Glitch Filter logic stageand is not \
	affected by PModeand RXINV, hardware debouncer(if any) settings. \
	When read, this bit returns a ¡®0¡¯ if GPIORxDis is ¡®1¡¯."

#define GPIO_TX_STATE_DESC "GPIO TX State (GPIOTXSTATE):TX state in when PMode = 0 ONLY.No effect when the pad in native mode."


namespace n_recognition_intel_gpio {
	class Crecognition_intel_gpio :public Object
	{
	public:
		Crecognition_intel_gpio();
		~Crecognition_intel_gpio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crecognition_intel_gpio); }
	};
}

using namespace n_recognition_intel_gpio;

#endif
