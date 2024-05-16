#ifndef MD5_H_H_
#define MD5_H_H_

#include "object/object.h"

#define MD5_INPUT_LEN 64

#define MD5_A 0x67452301
#define MD5_B 0xefcdab89
#define MD5_C 0x98badcfe
#define MD5_D 0x10325476

static uint32_t MD5_S[] = { 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
					   5,  9, 14, 20, 5,  9, 14, 20, 5,  9, 14, 20, 5,  9, 14, 20,
					   4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
					   6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21 };

static uint32_t MD5_K[] = { 0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
					   0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
					   0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
					   0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
					   0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
					   0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
					   0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
					   0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
					   0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
					   0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
					   0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
					   0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
					   0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
					   0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
					   0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
					   0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391 };

#define MD5_F(X, Y, Z) ((X & Y) | (~X & Z))
#define MD5_G(X, Y, Z) ((X & Z) | (Y & ~Z))
#define MD5_H(X, Y, Z) (X ^ Y ^ Z)
#define MD5_I(X, Y, Z) (Y ^ (X | ~Z))

namespace n_md5 {

	typedef struct {
		uint64_t size;        // Size of input in bytes
		uint32_t buffer[4];   // Current accumulation of hash
		uint8_t input[64];    // Input to be used in the next step
		uint8_t digest[16];   // Result of algorithm
	}MD5Context;

	class Cmd5 :public Object
	{
	public:
		uint8_t md5_result[16];
	public:
		Cmd5();
		~Cmd5();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmd5); }

		uint32_t rotateLeft(uint32_t x, uint32_t n) { return (x << n) | (x >> (32 - n)); };

		void init(MD5Context* ctx);
		void update(MD5Context* ctx, uint8_t* input_buffer, size_t input_len);
		void finalize(MD5Context* ctx);
		void step(uint32_t* buffer, uint32_t* input);

		int buffer(uint8_t * input, size_t input_len, uint8_t* result, int result_len);
		int str(char* input, uint8_t* result, int len);
		int str(char* input);
		int file(FILE* file, uint8_t* result, int len);
		int file(FILE* file);
		int file(char* filename, uint8_t* result, int len);
		int file(char* filename);

		void display(uint8_t* p, int len); 
		void display(); 
	};
}

using namespace n_md5;

#endif
