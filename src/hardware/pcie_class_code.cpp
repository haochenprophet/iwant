#include "pcie_class_code.h"

//refer :PCI Code and ID Assignment Specification Revision 1.12 
Cclass_code class_code_tab[] =
{	//Base Class,Sub - Class,Programming Interface,Meaning
	//1.1. Base Class 00h
	{0x00,0x00,0x00,(char*)"All currently implemented devices except VGA-compatible devices"},
	{0x00,0x01,0x00,(char*)"VGA-compatible device"},
	//1.2.Base Class 01h Mass storage controller
	{0x01,0x00,0x00,(char*)"SCSI controller"},
	{0x01,0x00,0x11,(char*)"SCSI storage device"},
	{0x01,0x00,0x12,(char*)"SCSI controller SOP"},
	{0x01,0x00,0x13,(char*)"SCSI storage device and SCSI controller"},
	{0x01,0x00,0x21,(char*)"SCSI storage device SOP"},
	{0x01,0x01,0xFF,(char*)"IDE controller"},
	{0x01,0x02,0x00,(char*)"Floppy disk controller"},
	{0x01,0x03,0x00,(char*)"IPI bus controller"},
	{0x01,0x04,0x00,(char*)"RAID controller"},
	{0x01,0x05,0x20,(char*)"ATA controller"},
	{0x01,0x05,0x30,(char*)"ATA controller"},
	{0x01,0x06,0x00,(char*)"Serial ATA controller"},
	{0x01,0x06,0x01,(char*)"Serial ATA controller - AHCI"},
	{0x01,0x06,0x02,(char*)"Serial Storage Bus Interface"},
	{0x01,0x07,0x00,(char*)"Serial Attached SCSI (SAS) controller"},
	{0x01,0x07,0x01,(char*)"Obsolete"},
	{0x01,0x08,0x00,(char*)"Non-volatile memory subsystem"},
	{0x01,0x08,0x01,(char*)"Non-volatile memory subsystem - NVMHCI interface"},
	{0x01,0x08,0x02,(char*)"NVM Express (NVMe) I/O controller"},
	{0x01,0x08,0x03,(char*)"NVM Express (NVMe) administrative controller"},
	{0x01,0x09,0x00,(char*)"Universal Flash Storage (UFS) controller"},
	{0x01,0x09,0x00,(char*)"Universal Flash Storage (UFS) controller-UFSHCI"},
	{0x01,0x80,0x00,(char*)"Other mass storage controller"},
	//1.3. Base Class 02h network controllers.
	{0x02,0x00,0x00,(char*)"Ethernet controller"},
	{0x02,0x01,0x00,(char*)"Token Ring controller"},
	{0x02,0x02,0x00,(char*)"FDDI controller"},
	{0x02,0x03,0x00,(char*)"ATM controller"},
	{0x02,0x04,0x00,(char*)"ISDN controller"},
	{0x02,0x05,0x00,(char*)"WorldFip controller"},
	{0x02,0x06,0xFF,(char*)"PICMG 2.14 Multi Computing"},
	{0x02,0x07,0x00,(char*)"InfiniBand* Controller"},
	{0x02,0x08,0x00,(char*)"Host fabric controller"},
	{0x02,0x80,0x00,(char*)"Other network controller"},
	//1.4. Base Class 03h display controllers.
	{0x03,0x00,0x00,(char*)"VGA-compatible controlle"},
	{0x03,0x00,0x01,(char*)"8514-compatible controller"},
	{0x03,0x01,0x00,(char*)"XGA controller"},
	{0x03,0x02,0x00,(char*)"3D controller"},
	{0x03,0x02,0x00,(char*)"Other display controller"},
	//1.5. Base Class 04h multimedia devices
	{0x04,0x00,0x00,(char*)"Video device"},
	{0x04,0x01,0x00,(char*)"Audio device"},
	{0x04,0x02,0x00,(char*)"Computer telephony device"},
	{0x04,0x03,0x00,(char*)"High Definition Audio (HD-A) 1.0 compatible"},
	{0x04,0x03,0x80,(char*)"High Definition Audio (HD-A) 1.0 compatible extensions"},
	{0x04,0x80,0x00,(char*)"Other multimedia device"},
	//1.6.Base Class 05h memory controllers
	{0x05,0x00,0x00,(char*)"RAM"},
	{0x05,0x01,0x00,(char*)"Flash"},
	{0x05,0x80,0x00,(char*)"Other memory controller"},
	//1.7.Base Class 06h bridge devices
	{0x06,0x00,0x00,(char*)"Host bridge"},
	{0x06,0x01,0x00,(char*)"ISA bridge"},
	{0x06,0x02,0x00,(char*)"EISA bridge"},
	{0x06,0x03,0x00,(char*)"MCA bridge"},
	{0x06,0x04,0x00,(char*)"PCI-to-PCI bridge"},
	{0x06,0x04,0x01,(char*)"Subtractive Decode PCI-to-PCI bridge"},
	{0x06,0x05,0x00,(char*)"PCMCIA bridge"},
	{0x06,0x06,0x00,(char*)"NuBus bridge"},
	{0x06,0x07,0x00,(char*)"CardBus bridge"},
	{0x06,0x08,0xFF,(char*)"RACEway bridge"},
	{0x06,0x09,0x40,(char*)"Semi-transparent PCI-to-PCI bridge primary"},
	{0x06,0x09,0x80,(char*)"Semi-transparent PCI-to-PCI bridge secondary"},
	{0x06,0x0A,0x00,(char*)"InfiniBand-to-PCI host bridge"},
	{0x06,0x0B,0x00,(char*)"Advanced Switching to PCI host bridge"},
	{0x06,0x0B,0x01,(char*)"Advanced Switching to PCI host bridge¨CASI-SIG Defined Portal Interface"},
	{0x06,0x80,0x00,(char*)"Other bridge device"},
	//1.8. Base Class 07h simple communications controllers. 
	{0x07,0x00,0x00,(char*)"Generic XT-compatible serial controller"},
	{0x07,0x00,0x01,(char*)"16450-compatible serial controller"},
	{0x07,0x00,0x02,(char*)"16550-compatible serial controller"},
	{0x07,0x00,0x03,(char*)"16650-compatible serial controllerr"},
	{0x07,0x00,0x04,(char*)"16750-compatible serial controller"},
	{0x07,0x00,0x05,(char*)"16850-compatible serial controller"},
	{0x07,0x00,0x06,(char*)"16950-compatible serial controller"},
	{0x07,0x01,0x00,(char*)"Parallel port"},
	{0x07,0x01,0x01,(char*)"Bi-directional parallel port"},
	{0x07,0x01,0x02,(char*)"ECP 1.X compliant parallel port"},
	{0x07,0x01,0x03,(char*)"IEEE1284 controller"},
	{0x07,0x01,0xFE,(char*)"IEEE1284 target device"},
	{0x07,0x02,0x00,(char*)"Multiport serial controller"},
	{0x07,0x03,0x00,(char*)"Generic modem"},
	{0x07,0x03,0x01,(char*)"Hayes compatible modem 16450-compatible interface"},
	{0x07,0x03,0x02,(char*)"Hayes compatible modem 16550-compatible interface"},
	{0x07,0x03,0x03,(char*)"Hayes compatible modem 16650-compatible interface"},
	{0x07,0x03,0x04,(char*)"Hayes compatible modem 16750-compatible interface"},
	{0x07,0x04,0x00,(char*)"GPIB (IEEE 488.1/2) controller"},
	{0x07,0x05,0x00,(char*)"Smart Card"},
	{0x07,0x80,0x00,(char*)"Other communications device"},
	//1.9. Base Class 08h generic system peripherals
	{0x08,0x00,0x00,(char*)"Generic 8259 PIC"},
	{0x08,0x00,0x01,(char*)"ISA PIC"},
	{0x08,0x00,0x02,(char*)"EISA PIC"},
	{0x08,0x00,0x10,(char*)"I/O APIC interrupt controller"},
	{0x08,0x00,0x20,(char*)"I/O(x) APIC interrupt controller"},
	{0x08,0x01,0x00,(char*)"Generic 8237 DMA controller"},
	{0x08,0x01,0x01,(char*)"ISA DMA controller"},
	{0x08,0x01,0x02,(char*)"EISA DMA controller"},
	{0x08,0x02,0x00,(char*)"Generic 8254 system timer"},
	{0x08,0x02,0x01,(char*)"ISA system timer"},
	{0x08,0x02,0x02,(char*)"EISA system timers (two timers)"},
	{0x08,0x02,0x03,(char*)"High Performance Event Timer"},
	{0x08,0x03,0x00,(char*)"Generic RTC controller"},
	{0x08,0x03,0x01,(char*)"ISA RTC controller"},
	{0x08,0x04,0x00,(char*)"Generic PCI Hot-Plug controller"},
	{0x08,0x05,0x00,(char*)"SD Host controller"},
	{0x08,0x06,0x00,(char*)"IOMMU"},
	{0x08,0x07,0x00,(char*)"Root Complex Event Collector"},
	{0x08,0x80,0x00,(char*)"Other system peripheral"},
	//1.10. Base Class 09h input devices. 
	{0x09,0x00,0x00,(char*)"Keyboard controller"},
	{0x09,0x01,0x00,(char*)"Digitizer (pen)"},
	{0x09,0x02,0x00,(char*)"Mouse controller"},
	{0x09,0x03,0x00,(char*)"Scanner controller"},
	{0x09,0x04,0x00,(char*)"Gameport controller (generic)"},
	{0x09,0x04,0x10,(char*)"Gameport controller"},
	{0x09,0x80,0x00,(char*)"Other input controller"},
	//1.11.Base Class 0Ah docking stations
	{0x0A,0x00,0x00,(char*)"Generic docking station"},
	{0x0A,0x80,0x00,(char*)"Other type of docking station"},
	//1.12. Base Class 0Bh processors
	{0x0B,0x00,0x00,(char*)"386"},
	{0x0B,0x01,0x00,(char*)"486"},
	{0x0B,0x02,0x00,(char*)"Pentium"},
	{0x0B,0x10,0x00,(char*)"Alpha"},
	{0x0B,0x20,0x00,(char*)"PowerPC"},
	{0x0B,0x30,0x00,(char*)"MIPS"},
	{0x0B,0x40,0x00,(char*)"Co-processor"},
	{0x0B,0x80,0x00,(char*)"Other processors"},
	//1.13. Base Class 0Ch serial bus controllers
	{0x0C,0x00,0x00,(char*)"IEEE 1394 (FireWire)"},
	{0x0C,0x00,0x10,(char*)"IEEE 1394 following the 1394 OpenHCI specification"},
	{0x0C,0x01,0x00,(char*)"ACCESS.bus"},
	{0x0C,0x02,0x00,(char*)"SSA"},
	{0x0C,0x03,0x00,(char*)"USB UHCI"},
	{0x0C,0x03,0x10,(char*)"USB OHCI"},
	{0x0C,0x03,0x20,(char*)"USB EHCI"},
	{0x0C,0x03,0x30,(char*)"USB XHCI"},
	{0x0C,0x03,0x40,(char*)"USB4"},
	{0x0C,0x03,0x80,(char*)"USB"},
	{0x0C,0x03,0xFE,(char*)"USB device"},
	{0x0C,0x04,0x00,(char*)"Fibre Channel"},
	{0x0C,0x05,0x00,(char*)"SMBus (System Management Bus)"},
	{0x0C,0x06,0x00,(char*)"InfiniBand-This sub-class is deprecated"},
	{0x0C,0x07,0x00,(char*)"IPMI SMIC Interface"},
	{0x0C,0x07,0x01,(char*)"IPMI Keyboard Controller Style Interface"},
	{0x0C,0x07,0x02,(char*)"IPMI Block Transfer Interface"},
	{0x0C,0x08,0x00,(char*)"SERCOS Interface Standard (IEC 61491)"},
	{0x0C,0x09,0x00,(char*)"CAN bus"},
	{0x0C,0x0A,0x00,(char*)"MIPI I3C Host Controller Interface"},
	{0x0C,0x80,0x00,(char*)"Other Serial Bus Controllers"},
	//1.14. Base Class 0Dh wireless controllers.
	{0x0D,0x00,0x00,(char*)"iRDA compatible controller"},
	{0x0D,0x01,0x00,(char*)"Consumer IR controller"},
	{0x0D,0x01,0x10,(char*)"UWB Radio controller)"},
	{0x0D,0x10,0x00,(char*)"RF controller"},
	{0x0D,0x11,0x00,(char*)"Bluetooth"},
	{0x0D,0x12,0x00,(char*)"Broadband"},
	{0x0D,0x20,0x00,(char*)"Ethernet (802.11a - 5 GHz)"},
	{0x0D,0x21,0x00,(char*)"Ethernet (802.11b - 2.4 GHz)"},
	{0x0D,0x40,0x00,(char*)"Cellular controller/modem"},
	{0x0D,0x41,0x00,(char*)"Cellular controller/modem plus Ethernet (802.11)"},
	{0x0D,0x80,0x00,(char*)"Other type of wireless controller"},
	//1.15. Base Class 0Eh I/O controllers
	{0x0E,0x00,0x00,(char*)"Message FIFO"},
	{0x0E,0x00,0xFF,(char*)"Intelligent I/O (I2O) Architecture"},
	//1.16. Base Class 0Fh satellite communication controllers
	{0x0F,0x01,0x00,(char*)"TV"},
	{0x0F,0x02,0x00,(char*)"Audio"},
	{0x0F,0x03,0x00,(char*)"Voice"},
	{0x0F,0x04,0x00,(char*)"Data"},
	{0x0F,0x80,0x00,(char*)"Other satellite communication controller"},
	//1.17. Base Class 10h  encryption and decryption controllers.
	{0x10,0x00,0x00,(char*)"Network and computing encryption and decryption controller"},
	{0x10,0x10,0x00,(char*)"Entertainment encryption and decryption controller"},
	{0x10,0x80,0x00,(char*)"Other encryption and decryption controller"},
	//1.18. Base Class 11h data acquisition and signal processing controllers
	{0x11,0x00,0x00,(char*)"DPIO modules"},
	{0x11,0x01,0x00,(char*)"Performance counters"},
	{0x11,0x10,0x00,(char*)"Communications synchronization plus time and frequency test / measurement"},
	{0x11,0x20,0x00,(char*)"Management card"},
	{0x11,0x80,0x00,(char*)"Other data acquisition/signal processing controllers"},
	//1.19.Base Class 12h processing accelerators
	{0x12,0x00,0x00,(char*)"Processing Accelerator"},
	//1.20. Base Class 13h
	{0x13,0x00,0x00,(char*)"Non-Essential Instrumentation Function ¨C Vendorspecific interface"},
	//end
	{0xFF,0xFF,0xFF,(char*)"Unknow"},
};

#define CLASS_CODE_TABLE_COUNT (sizeof(class_code_tab)/sizeof(Cclass_code))

bool Cclass_code::is_me(unsigned char base, unsigned char sub, unsigned char programming_interface)
{
	if (this->base_class == base && this->sub_class == sub &&( this->programming_interface == programming_interface|| this->programming_interface == 0xFF)) { return true; }
	return false;
}

int Cpcie_class_code::my_init(void *p)
{
	this->name = "Cpcie_class_code";
	this->alias = "pcie_class_code";
	return 0;
}

Cpcie_class_code::Cpcie_class_code()
{
	this->my_init();
}

Cpcie_class_code::~Cpcie_class_code()
{

}

char * Cpcie_class_code::meaning(Cclass_code* tab, int tab_count, unsigned char base, unsigned char sub, unsigned char programming_interface)
{
	int i;
	for (i = 0; i < tab_count; i++)
	{
		if (tab[i].is_me(base, sub, programming_interface)) 
		{
			return tab[i].meaning;
		}
	}
	return nullptr;
}

char* Cpcie_class_code::meaning(unsigned char base, unsigned char sub, unsigned char programming_interface)
{
	return this->meaning(class_code_tab, (int)CLASS_CODE_TABLE_COUNT, base, sub, programming_interface);
}

#ifndef PCIE_CLASS_CODE_TEST
#define PCIE_CLASS_CODE_TEST 0//1
#endif

#if PCIE_CLASS_CODE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;
	Cpcie_class_code class_code;

	std::cout << class_code.meaning(0x07, 0x00, 0x01) << endl;
	std::cout << class_code.meaning(0xFF, 0x00, 0x00) << endl;//return nullptr will trigger => n_object::Object::rejoin_signal()
	return 0;
}
#endif
