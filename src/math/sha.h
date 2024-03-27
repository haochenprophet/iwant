#ifndef SHA_H
#define SHA_H

#include "../object.h"

#define SHA224_DIGEST_SIZE ( 224 / 8)
#define SHA256_DIGEST_SIZE ( 256 / 8)
#define SHA384_DIGEST_SIZE ( 384 / 8)
#define SHA512_DIGEST_SIZE ( 512 / 8)

#define SHA256_BLOCK_SIZE  ( 512 / 8)
#define SHA512_BLOCK_SIZE  (1024 / 8)
#define SHA384_BLOCK_SIZE  SHA512_BLOCK_SIZE
#define SHA224_BLOCK_SIZE  SHA256_BLOCK_SIZE


namespace n_sha {
	typedef struct {
		uint64 tot_len;
		uint64 len;
		uint8 block[2 * SHA256_BLOCK_SIZE];
		uint32 h[8];
	} sha256_ctx;

	typedef struct {
		uint64 tot_len;
		uint64 len;
		uint8 block[2 * SHA512_BLOCK_SIZE];
		uint64 h[8];
	} sha512_ctx;

	typedef sha512_ctx sha384_ctx;
	typedef sha256_ctx sha224_ctx;

	class Csha :public Object
	{
	public:
		uint8 digest[SHA512_DIGEST_SIZE];
	public:
		Csha();
		~Csha();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csha); }

	public:
		void sha224(const uint8* message, uint64 len);
		void sha256(const uint8* message, uint64 len);
		void sha384(const uint8* message, uint64 len);
		void sha512(const uint8* message, uint64 len);

	public:
		void sha256_transf(sha256_ctx* ctx, const uint8* message, uint64 block_nb);
		void sha512_transf(sha512_ctx* ctx, const uint8* message, uint64 block_nb);

		void sha224_init(sha224_ctx* ctx);
		void sha224_update(sha224_ctx* ctx, const uint8* message, uint64 len);
		void sha224_final(sha224_ctx* ctx, uint8* digest);
		void sha224(const uint8* message, uint64 len, uint8* digest);

		void sha256_init(sha256_ctx* ctx);
		void sha256_update(sha256_ctx* ctx, const uint8* message, uint64 len);
		void sha256_final(sha256_ctx* ctx, uint8* digest);
		void sha256(const uint8* message, uint64 len, uint8* digest);

		void sha384_init(sha384_ctx* ctx);
		void sha384_update(sha384_ctx* ctx, const uint8* message, uint64 len);
		void sha384_final(sha384_ctx* ctx, uint8* digest);
		void sha384(const uint8* message, uint64 len, uint8* digest);

		void sha512_init(sha512_ctx* ctx);
		void sha512_update(sha512_ctx* ctx, const uint8* message, uint64 len);
		void sha512_final(sha512_ctx* ctx, uint8* digest);
		void sha512(const uint8* message, uint64 len, uint8* digest);
	};
}

using namespace n_sha;

#endif
