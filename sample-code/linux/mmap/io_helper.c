#include "io_helper.h"

#include <fcntl.h>
#include <sys/io.h>
#include <sys/mman.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>


#define RW_DELAY	1	

#define FILL_REG \
 "movl		%0, %%eax\n" \
 "movl		%1, %%ebx\n" \
 "movl		%2, %%ecx\n" \
 "movl		%3, %%edx\n" \
 "movl		%4, %%esi\n" \
 "movl		%5, %%edi\n"


int GetPortVal(uint16_t uPortAddr, uint32_t *puPortVal, size_t nSize)
{
	int ret = 0;

	if (!puPortVal) 
		return -1;

	if (uPortAddr >= 0x3FF) {
		if ((ret = iopl(3)) != 0)
			return errno;
	}else{
		if ((ret = ioperm(uPortAddr, 1, 1)) != 0)
			return errno;
	}

	switch(nSize)
	{
	case sizeof(uint8_t):
		*puPortVal = (uint32_t)inb(uPortAddr);
		break;
	case sizeof(uint16_t):
		*puPortVal = (uint32_t)inw(uPortAddr);
		break;
	case sizeof(uint32_t):
		*puPortVal = (uint32_t)inl(uPortAddr);
		break;
	default:
		return 1;
	}

	if ((ret = ioperm(uPortAddr, 1, 0)) != 0)
		return errno;

	usleep(RW_DELAY);

	if (uPortAddr >= 0x3FF) {
		if ((ret = iopl(0)) != 0)
			return errno;
	}else{
		if ((ret = ioperm(uPortAddr, 1, 0)) != 0)
			return errno;
	}

	return ret;
}

int SetPortVal(uint16_t uPortAddr, uint32_t uPortVal, size_t nSize)
{
	int ret = 0;

	if (uPortAddr >= 0x3FF) {
		if ((ret = iopl(3)) != 0)
			return errno;
	}else{
		if ((ret = ioperm(uPortAddr, 1, 1)) != 0)
			return errno;
	}

	switch(nSize)
	{
	case sizeof(uint8_t):
		outb((uint8_t)uPortVal, uPortAddr);
		break;
	case sizeof(uint16_t):
		outw((uint16_t)uPortVal, uPortAddr);
		break;
	case sizeof(uint32_t):
		outl((uint32_t)uPortVal, uPortAddr);
		break;
	default:
		return 1;
	}

	usleep(RW_DELAY);

	if (uPortAddr >= 0x3FF) {
		if ((ret = iopl(0)) != 0)
			return errno;
	}else{
		if ((ret = ioperm(uPortAddr, 1, 0)) != 0)
			return errno;
	}

	return ret;
}

int IoRead8(uint16_t uPortAddr, uint8_t* pValue)
{
	int ret = 0;

	uint32_t uPortVal = 0;

	if ((ret = GetPortVal(uPortAddr, &uPortVal, 1)) != 0)
		return ret;

	*pValue = (uint8_t)uPortVal;
	
	return ret;
}

int IoRead16(uint16_t uPortAddr, uint16_t* pValue)
{
	int ret = 0;

	uint32_t uPortVal = 0;

	if ((ret = GetPortVal(uPortAddr, &uPortVal, 2)) != 0)
		return ret;

	*pValue = (uint16_t)uPortVal;

	return ret;
}

int IoRead32(uint16_t uPortAddr, uint32_t* pValue)
{
	int ret = 0;

	uint32_t uPortVal = 0;

	if ((ret = GetPortVal(uPortAddr, &uPortVal, 4)) != 0)
		return ret;

	*pValue = uPortVal;

	return ret;
}

int IoWrite8(uint16_t uPortAddr, uint8_t uValue)
{
	int ret = 0;

	uint32_t uPortVal = (uint32_t)uValue;

	if ((ret = SetPortVal(uPortAddr, uPortVal, 1)) != 0)
		return ret;

	return ret;
}

int IoWrite16(uint16_t uPortAddr, uint16_t uValue)
{
	int ret = 0;

	uint32_t uPortVal = (uint32_t)uValue;

	if ((ret = SetPortVal(uPortAddr, uPortVal, 2)) != 0)
		return ret;

	return ret;
}

int IoWrite32(uint16_t uPortAddr, uint32_t uValue)
{
	int ret = 0;

	if ((ret = SetPortVal(uPortAddr, uValue, 4)) != 0)
		return ret;

	return ret;
}

int SetPortValReg(uint16_t uPortAddr, uint32_t uPortVal, size_t nSize, CPU_REG cpuReg)
{
	int ret = 0;

	//uint32_t _EAX = cpuReg._EAX;
	uint32_t _EBX = cpuReg._EBX;
	uint32_t _ECX = cpuReg._ECX;
	//uint32_t _EDX = cpuReg._EDX;
	uint32_t _ESI = cpuReg._ESI;
	uint32_t _EDI = cpuReg._EDI;

	uint32_t port_addr = uPortAddr;
	uint32_t port_val = uPortVal;

	if (uPortAddr >= 0x3FF) {
		if((ret = iopl(3)) != 0)
			return errno;
	}else{
		if ((ret = ioperm(uPortAddr, 1, 1)) != 0)
			return errno;
	}

	switch (nSize)
	{
	case sizeof(uint8_t) :
		__asm__ __volatile__
		(
			FILL_REG \
			"outb	%%al, %%dx\n"
			:// Output 
			: "m"(port_val), "m"(_EBX), "m"(_ECX), "m"(port_addr), "m"(_ESI), "m"(_EDI)
			: "%eax", "%ebx", "%ecx", "%edx", "%esi", "%edi"
		);
		break;
	case sizeof(uint16_t) :
		__asm__ __volatile__
		(
			FILL_REG \
			"outw	%%ax, %%dx\n"
			:// Output 
			: "m"(port_val), "m"(_EBX), "m"(_ECX), "m"(port_addr), "m"(_ESI), "m"(_EDI)
			: "%eax", "%ebx", "%ecx", "%edx", "%esi", "%edi"
		);
		break;
	case sizeof(uint32_t) :
		__asm__ __volatile__
		(
			FILL_REG \
			"outl	%%eax, %%dx\n"
			:// Output 
			: "m"(port_val), "m"(_EBX), "m"(_ECX), "m"(port_addr), "m"(_ESI), "m"(_EDI)
			: "%eax", "%ebx", "%ecx", "%edx", "%esi", "%edi"
		);
		break;
	default:
		break;
	}

	if ((ret = ioperm(uPortAddr, 1, 0)) != 0)
		return errno;

	usleep(RW_DELAY);

	if (uPortAddr >= 0x3FF) {
		if ((ret = iopl(0)) != 0)
			return errno;
	}else{
		if ((ret = ioperm(uPortAddr, 1, 0)) != 0)
			return errno;
	}

	return ret;
}

int MemRead(uint64_t uPhysAddd, void *pBuf, size_t nSize)
{
	int ret = 0;

	if (nSize == 0)
		return ret;

	int fd = open("/dev/mem", O_RDONLY | O_SYNC);
	if (fd == -1)
		return errno;

	const long page_size = sysconf(_SC_PAGE_SIZE);

	uint32_t uPhysAddrOffset = uPhysAddd % page_size;
	uint64_t uBasePhysAddr = uPhysAddd - uPhysAddrOffset;

	size_t read_size = 0;

	do{
		size_t read_max = page_size - uPhysAddrOffset;
		size_t rest_size = nSize - read_size;
		size_t copy_size = (rest_size > read_max) ? read_max : rest_size;

		unsigned char* map_addr = (char*)mmap(NULL, page_size, PROT_READ, MAP_SHARED, fd, uBasePhysAddr);

		if (map_addr == MAP_FAILED) {
			close(fd);
			return -1;
		}

		memcpy(pBuf + read_size, map_addr + uPhysAddrOffset, copy_size);

		if ((ret = munmap(map_addr, page_size)) != 0) {
			close(fd);
			return ret;
		}

		read_size += copy_size;
		uPhysAddrOffset = (uPhysAddrOffset + copy_size) % page_size;	// if cycle continue, offset always 0
		uBasePhysAddr += page_size;	// every cycle read a memory page

	} while (read_size < nSize);

	close(fd);
	
	return ret;
}

int MemRead8(uint64_t uPhysAddd, uint8_t *pValue)
{
	return MemRead(uPhysAddd, (void *)pValue, 1);
}

int MemRead16(uint64_t uPhysAddd, uint16_t *pValue)
{
	return MemRead(uPhysAddd, (void *)pValue, 2);
}

int MemRead32(uint64_t uPhysAddd, uint32_t *pValue)
{
	return MemRead(uPhysAddd, (void *)pValue, 4);
}

int MemWrite(uint64_t uPhysAddd, void *pBuf, size_t nSize)
{
	int ret = 0;

	if (nSize == 0)
		return ret;

	int fd = open("/dev/mem", O_RDWR | O_SYNC);
	if (fd == -1)
		return errno;

	const long page_size = sysconf(_SC_PAGE_SIZE);

	uint32_t uPhysAddrOffset = uPhysAddd % page_size;
	uint64_t uBasePhysAddr = uPhysAddd - uPhysAddrOffset;

	size_t write_size = 0;

	do {
		size_t write_max = page_size - uPhysAddrOffset;
		size_t rest_size = nSize - write_size;
		size_t copy_size = (rest_size > write_max) ? write_max : rest_size;

		unsigned char* map_addr = (char*)mmap(NULL, page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, uBasePhysAddr);

		if (map_addr == MAP_FAILED) {
			close(fd);
			return -1;
		}

		memcpy(map_addr + uPhysAddrOffset, pBuf + write_size, copy_size);

		if ((ret = munmap(map_addr, page_size)) != 0) {
			close(fd);
			return ret;
		}

		write_size += copy_size;
		uPhysAddrOffset = (uPhysAddrOffset + copy_size) % page_size;	// if cycle continue, offset always 0
		uBasePhysAddr += page_size;	// every cycle read a memory page

	} while (write_size < nSize);

	close(fd);

	return ret;
}

int MemWrite8(uint64_t uPhysAddd, uint8_t uValue)
{
	return MemWrite(uPhysAddd, (void *)&uValue, 1);
}

int MemWrite16(uint64_t uPhysAddd, uint16_t uValue)
{
	return MemWrite(uPhysAddd, (void *)&uValue, 2);
}

int MemWrite32(uint64_t uPhysAddd, uint32_t uValue)
{
	return MemWrite(uPhysAddd, (void *)&uValue, 4);
}


