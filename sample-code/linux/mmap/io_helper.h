#ifndef __IO_HELPER_H__
#define __IO_HELPER_H__

#include <stdint.h>
#include <sys/types.h>


#pragma pack(1)
typedef struct {
	uint32_t _EAX;
	uint32_t _EBX;
	uint32_t _ECX;
	uint32_t _EDX;
	uint32_t _ESI;
	uint32_t _EDI;
	uint32_t _EBP;
}__attribute__((packed)) CPU_REG;
#pragma pack()


// IO Port
int IoRead8(uint16_t uPortAddr, uint8_t* pValue);
int IoRead16(uint16_t uPortAddr, uint16_t* pValue);
int IoRead32(uint16_t uPortAddr, uint32_t* pValue);

int IoWrite8(uint16_t uPortAddr, uint8_t uValue);
int IoWrite16(uint16_t uPortAddr, uint16_t uValue);
int IoWrite32(uint16_t uPortAddr, uint32_t uValue);

int SetPortValReg(uint16_t uPortAddr, uint32_t uPortVal, size_t nSize, CPU_REG cpuReg);


// Memory Map
int MemRead(uint64_t uPhysAddd, void *pBuf, size_t nSize);

int MemRead8(uint64_t uPhysAddd, uint8_t *pValue);
int MemRead16(uint64_t uPhysAddd, uint16_t *pValue);
int MemRead32(uint64_t uPhysAddd, uint32_t *pValue);

int MemWrite(uint64_t uPhysAddd, void *pBuf, size_t nSize);

int MemWrite8(uint64_t uPhysAddd, uint8_t uValue);
int MemWrite16(uint64_t uPhysAddd, uint16_t uValue);
int MemWrite32(uint64_t uPhysAddd, uint32_t uValue);

#endif	//#ifndef __IO_HELPER_H__
