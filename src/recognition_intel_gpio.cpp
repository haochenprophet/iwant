
#include "recognition_intel_gpio.h"

//give an example intel PCH gpio table 

#define  GPIO_RX_STATE_DESC " \
	GPIO RX State (GPIORXSTATE): \
	This is the current internal RX pad state after Glitch Filter logic stageand is not \
	affected by PModeand RXINV, hardware debouncer(if any) settings. \
	When read, this bit returns a ¡®0¡¯ if GPIORxDis is ¡®1¡¯."

bit_information GPIO_RX_State[] =
{
	{0,(char*)"GPIO RX level is 0"},
	{1,(char*)"GPIO RX level is 1"},
};
#define GPIO_RX_STATE_COUNT (sizeof(GPIO_RX_State)/sizeof(bit_information))


#define GPIO_TX_STATE_DESC "GPIO TX State (GPIOTXSTATE):TX state in when PMode = 0 ONLY.No effect when the pad in native mode."

bit_information GPIO_TX_State[] =
{
	{0,(char*)"Drive a level '0' to the TX output pad"},
	{1,(char*)"Drive a level '1' to the TX output pad"},
};
#define GPIO_TX_STATE_COUNT (sizeof(GPIO_TX_State)/sizeof(bit_information))

data_information pad_configuration_dw_0[] =
{
	{granularity_type::bit,PAD_CFG_DW0_GPPC_A_0,0,1 ,GPIO_TX_State,(char *)GPIO_TX_STATE_DESC,GPIO_TX_STATE_COUNT},//offset 0, length 1 = bit 0 ; 
	{granularity_type::bit,PAD_CFG_DW0_GPPC_A_0,1,1 ,GPIO_RX_State,(char*)GPIO_RX_STATE_DESC,GPIO_RX_STATE_COUNT},//offset 1, length 1 = bit 1 ; 
};

int Crecognition_intel_gpio::my_init(void *p)
{
	this->name = "Crecognition_intel_gpio";
	this->alias = "recognition_intel_gpio";
	return 0;
}

Crecognition_intel_gpio::Crecognition_intel_gpio()
{
	this->my_init();
}

Crecognition_intel_gpio::~Crecognition_intel_gpio()
{

}

#ifndef RECOGNITION_INTEL_GPIO_TEST
#define RECOGNITION_INTEL_GPIO_TEST 0//1
#endif

#if RECOGNITION_INTEL_GPIO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
