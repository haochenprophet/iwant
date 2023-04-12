#include "crc.h"
int Ccrc::my_init(void *p)
{
	this->name = "Ccrc";
	this->alias = "crc";
	return 0;
}

Ccrc::Ccrc()
{
	this->my_init();
}

Ccrc::~Ccrc()
{

}

int Ccrc::execute(char* func_name, uint8_t* data, size_t length, uint32_t* crc)
{
    if (func_name == nullptr) return -1;
    if (strlen(func_name) < 4) return -1; //check func_name length ; crc8 : min function 

    if (0 == strcmp(func_name, "crc4_itu")) { *crc = (uint32_t)crc4_itu(data, length); return 0; }
    if (0 == strcmp(func_name, "crc5_epc")) { *crc = (uint32_t)crc5_epc(data, length); return 0; }
    if (0 == strcmp(func_name, "crc5_itu")) { *crc = (uint32_t)crc5_itu(data, length); return 0; }
    if (0 == strcmp(func_name, "crc5_usb")) { *crc = (uint32_t)crc5_usb(data, length); return 0; }
    if (0 == strcmp(func_name, "crc6_itu")) { *crc = (uint32_t)crc6_itu(data, length); return 0; }
    if (0 == strcmp(func_name, "crc7_mmc")) { *crc = (uint32_t)crc7_mmc(data, length); return 0; }
    if (0 == strcmp(func_name, "crc8")) { *crc = (uint32_t)crc8(data, length); return 0; }
    if (0 == strcmp(func_name, "crc8_itu")) { *crc = (uint32_t)crc8_itu(data, length); return 0; }
    if (0 == strcmp(func_name, "crc8_rohc")) { *crc = (uint32_t)crc8_rohc(data, length); return 0; }
    if (0 == strcmp(func_name, "crc8_maxim")) { *crc = (uint32_t)crc8_maxim(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_ibm")) { *crc = (uint32_t)crc16_ibm(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_maxim")) { *crc = (uint32_t)crc16_maxim(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_usb")) { *crc = (uint32_t)crc16_usb(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_modbus")) { *crc = (uint32_t)crc16_modbus(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_ccitt")) { *crc = (uint32_t)crc16_ccitt(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_ccitt_false")) { *crc = (uint32_t)crc16_ccitt_false(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_x25")) { *crc = (uint32_t)crc16_x25(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_xmodem")) { *crc = (uint32_t)crc16_xmodem(data, length); return 0; }
    if (0 == strcmp(func_name, "crc16_dnp")) { *crc = (uint32_t)crc16_dnp(data, length); return 0; }
    if (0 == strcmp(func_name, "crc32")) { *crc = (uint32_t)crc32(data, length); return 0; }
    if (0 == strcmp(func_name, "crc32_mpeg_2")) { *crc = (uint32_t)crc32_mpeg_2(data, length); return 0; }

    printf("Ccrc::execute() not found func_name : %s\n", func_name);
    return -1;
}

/******************************************************************************
 * Name:    CRC-4/ITU           x4+x+1
 * Poly:    0x03
 * Init:    0x00
 * Refin:   True
 * Refout:  True
 * Xorout:  0x00
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc4_itu(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;                // Initial value
    while (length--)
    {
        crc ^= *data++;                 // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x0C;// 0x0C = (reverse 0x03)>>(8-4)
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-5/EPC           x5+x3+1
 * Poly:    0x09
 * Init:    0x09
 * Refin:   False
 * Refout:  False
 * Xorout:  0x00
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc5_epc(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0x48;        // Initial value: 0x48 = 0x09<<(8-5)
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; i++)
        {
            if (crc & 0x80)
                crc = (crc << 1) ^ 0x48;        // 0x48 = 0x09<<(8-5)
            else
                crc <<= 1;
        }
    }
    return crc >> 3;
}

/******************************************************************************
 * Name:    CRC-5/ITU           x5+x4+x2+1
 * Poly:    0x15
 * Init:    0x00
 * Refin:   True
 * Refout:  True
 * Xorout:  0x00
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc5_itu(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;                // Initial value
    while (length--)
    {
        crc ^= *data++;                 // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x15;// 0x15 = (reverse 0x15)>>(8-5)
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-5/USB           x5+x2+1
 * Poly:    0x05
 * Init:    0x1F
 * Refin:   True
 * Refout:  True
 * Xorout:  0x1F
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc5_usb(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0x1F;                // Initial value
    while (length--)
    {
        crc ^= *data++;                 // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x14;// 0x14 = (reverse 0x05)>>(8-5)
            else
                crc = (crc >> 1);
        }
    }
    return crc ^ 0x1F;
}

/******************************************************************************
 * Name:    CRC-6/ITU           x6+x+1
 * Poly:    0x03
 * Init:    0x00
 * Refin:   True
 * Refout:  True
 * Xorout:  0x00
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc6_itu(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;         // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x30;// 0x30 = (reverse 0x03)>>(8-6)
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-7/MMC           x7+x3+1
 * Poly:    0x09
 * Init:    0x00
 * Refin:   False
 * Refout:  False
 * Xorout:  0x00
 * Use:     MultiMediaCard,SD,ect.
 *****************************************************************************/
uint8_t Ccrc::crc7_mmc(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;        // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; i++)
        {
            if (crc & 0x80)
                crc = (crc << 1) ^ 0x12;        // 0x12 = 0x09<<(8-7)
            else
                crc <<= 1;
        }
    }
    return crc >> 1;
}

/******************************************************************************
 * Name:    CRC-8               x8+x2+x+1
 * Poly:    0x07
 * Init:    0x00
 * Refin:   False
 * Refout:  False
 * Xorout:  0x00
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc8(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;        // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; i++)
        {
            if (crc & 0x80)
                crc = (crc << 1) ^ 0x07;
            else
                crc <<= 1;
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-8/ITU           x8+x2+x+1
 * Poly:    0x07
 * Init:    0x00
 * Refin:   False
 * Refout:  False
 * Xorout:  0x55
 * Alias:   CRC-8/ATM
 *****************************************************************************/
uint8_t Ccrc::crc8_itu(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;        // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; i++)
        {
            if (crc & 0x80)
                crc = (crc << 1) ^ 0x07;
            else
                crc <<= 1;
        }
    }
    return crc ^ 0x55;
}

/******************************************************************************
 * Name:    CRC-8/ROHC          x8+x2+x+1
 * Poly:    0x07
 * Init:    0xFF
 * Refin:   True
 * Refout:  True
 * Xorout:  0x00
 * Note:
 *****************************************************************************/
uint8_t Ccrc::crc8_rohc(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0xFF;         // Initial value
    while (length--)
    {
        crc ^= *data++;            // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xE0;        // 0xE0 = reverse 0x07
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-8/MAXIM         x8+x5+x4+1
 * Poly:    0x31
 * Init:    0x00
 * Refin:   True
 * Refout:  True
 * Xorout:  0x00
 * Alias:   DOW-CRC,CRC-8/IBUTTON
 * Use:     Maxim(Dallas)'s some devices,e.g. DS18B20
 *****************************************************************************/
uint8_t Ccrc::crc8_maxim(uint8_t* data,size_t length)
{
    uint8_t i;
    uint8_t crc = 0;         // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; i++)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x8C;        // 0x8C = reverse 0x31
            else
                crc >>= 1;
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-16/IBM          x16+x15+x2+1
 * Poly:    0x8005
 * Init:    0x0000
 * Refin:   True
 * Refout:  True
 * Xorout:  0x0000
 * Alias:   CRC-16,CRC-16/ARC,CRC-16/LHA
 *****************************************************************************/
uint16_t Ccrc::crc16_ibm(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0;        // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xA001;        // 0xA001 = reverse 0x8005
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-16/MAXIM        x16+x15+x2+1
 * Poly:    0x8005
 * Init:    0x0000
 * Refin:   True
 * Refout:  True
 * Xorout:  0xFFFF
 * Note:
 *****************************************************************************/
uint16_t Ccrc::crc16_maxim(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0;        // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xA001;        // 0xA001 = reverse 0x8005
            else
                crc = (crc >> 1);
        }
    }
    return ~crc;    // crc^0xffff
}

/******************************************************************************
 * Name:    CRC-16/USB          x16+x15+x2+1
 * Poly:    0x8005
 * Init:    0xFFFF
 * Refin:   True
 * Refout:  True
 * Xorout:  0xFFFF
 * Note:
 *****************************************************************************/
uint16_t Ccrc::crc16_usb(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0xffff;        // Initial value
    while (length--)
    {
        crc ^= *data++;            // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xA001;        // 0xA001 = reverse 0x8005
            else
                crc = (crc >> 1);
        }
    }
    return ~crc;    // crc^0xffff
}

/******************************************************************************
 * Name:    CRC-16/MODBUS       x16+x15+x2+1
 * Poly:    0x8005
 * Init:    0xFFFF
 * Refin:   True
 * Refout:  True
 * Xorout:  0x0000
 * Note:
 *****************************************************************************/
uint16_t Ccrc::crc16_modbus(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0xffff;        // Initial value
    while (length--)
    {
        crc ^= *data++;            // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xA001;        // 0xA001 = reverse 0x8005
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-16/CCITT        x16+x12+x5+1
 * Poly:    0x1021
 * Init:    0x0000
 * Refin:   True
 * Refout:  True
 * Xorout:  0x0000
 * Alias:   CRC-CCITT,CRC-16/CCITT-TRUE,CRC-16/KERMIT
 *****************************************************************************/
uint16_t Ccrc::crc16_ccitt(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0;        // Initial value
    while (length--)
    {
        crc ^= *data++;        // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x8408;        // 0x8408 = reverse 0x1021
            else
                crc = (crc >> 1);
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-16/CCITT-FALSE   x16+x12+x5+1
 * Poly:    0x1021
 * Init:    0xFFFF
 * Refin:   False
 * Refout:  False
 * Xorout:  0x0000
 * Note:
 *****************************************************************************/
uint16_t Ccrc::crc16_ccitt_false(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0xffff;        //Initial value
    while (length--)
    {
        crc ^= (uint16_t)(*data++) << 8; // crc ^= (uint6_t)(*data)<<8; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 0x8000)
                crc = (crc << 1) ^ 0x1021;
            else
                crc <<= 1;
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-16/X25          x16+x12+x5+1
 * Poly:    0x1021
 * Init:    0xFFFF
 * Refin:   True
 * Refout:  True
 * Xorout:  0XFFFF
 * Note:
 *****************************************************************************/
uint16_t Ccrc::crc16_x25(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0xffff;        // Initial value
    while (length--)
    {
        crc ^= *data++;            // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0x8408;        // 0x8408 = reverse 0x1021
            else
                crc = (crc >> 1);
        }
    }
    return ~crc;                // crc^Xorout
}

/******************************************************************************
 * Name:    CRC-16/XMODEM       x16+x12+x5+1
 * Poly:    0x1021
 * Init:    0x0000
 * Refin:   False
 * Refout:  False
 * Xorout:  0x0000
 * Alias:   CRC-16/ZMODEM,CRC-16/ACORN
 *****************************************************************************/
uint16_t Ccrc::crc16_xmodem(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0;            // Initial value
    while (length--)
    {
        crc ^= (uint16_t)(*data++) << 8; // crc ^= (uint16_t)(*data)<<8; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 0x8000)
                crc = (crc << 1) ^ 0x1021;
            else
                crc <<= 1;
        }
    }
    return crc;
}

/******************************************************************************
 * Name:    CRC-16/DNP          x16+x13+x12+x11+x10+x8+x6+x5+x2+1
 * Poly:    0x3D65
 * Init:    0x0000
 * Refin:   True
 * Refout:  True
 * Xorout:  0xFFFF
 * Use:     M-Bus,ect.
 *****************************************************************************/
uint16_t Ccrc::crc16_dnp(uint8_t* data,size_t length)
{
    uint8_t i;
    uint16_t crc = 0;            // Initial value
    while (length--)
    {
        crc ^= *data++;            // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xA6BC;        // 0xA6BC = reverse 0x3D65
            else
                crc = (crc >> 1);
        }
    }
    return ~crc;                // crc^Xorout
}

/******************************************************************************
 * Name:    CRC-32  x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1
 * Poly:    0x4C11DB7
 * Init:    0xFFFFFFF
 * Refin:   True
 * Refout:  True
 * Xorout:  0xFFFFFFF
 * Alias:   CRC_32/ADCCP
 * Use:     WinRAR,ect.
 *****************************************************************************/
uint32_t Ccrc::crc32(uint8_t* data,size_t length)
{
    uint8_t i;
    uint32_t crc = 0xffffffff;        // Initial value
    while (length--)
    {
        crc ^= *data++;                // crc ^= *data; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xEDB88320;// 0xEDB88320= reverse 0x04C11DB7
            else
                crc = (crc >> 1);
        }
    }
    return ~crc;
}

/******************************************************************************
 * Name:    CRC-32/MPEG-2  x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1
 * Poly:    0x4C11DB7
 * Init:    0xFFFFFFF
 * Refin:   False
 * Refout:  False
 * Xorout:  0x0000000
 * Note:
 *****************************************************************************/
uint32_t Ccrc::crc32_mpeg_2(uint8_t* data,size_t length)
{
    uint8_t i;
    uint32_t crc = 0xffffffff;  // Initial value
    while (length--)
    {
        crc ^= (uint32_t)(*data++) << 24;// crc ^=(uint32_t)(*data)<<24; data++;
        for (i = 0; i < 8; ++i)
        {
            if (crc & 0x80000000)
                crc = (crc << 1) ^ 0x04C11DB7;
            else
                crc <<= 1;
        }
    }
    return crc;
}

#ifndef CRC_TEST
#define CRC_TEST 0//1
#endif

#if CRC_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
