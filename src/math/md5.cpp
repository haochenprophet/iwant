#include "md5.h"
int Cmd5::my_init(void *p)
{
	this->name = "Cmd5";
	this->alias = "md5";
	return 0;
}

Cmd5::Cmd5()
{
	this->my_init();
}

Cmd5::~Cmd5()
{

}

void Cmd5::init(MD5Context* ctx)
{
	ctx->size = (uint64_t)0;

	ctx->buffer[0] = (uint32_t)MD5_A;
	ctx->buffer[1] = (uint32_t)MD5_B;
	ctx->buffer[2] = (uint32_t)MD5_C;
	ctx->buffer[3] = (uint32_t)MD5_D;
}

void Cmd5::update(MD5Context* ctx, uint8_t* input_buffer, size_t input_len)
{
    uint32_t input[16];
    unsigned int offset = ctx->size % 64;
    ctx->size += (uint64_t)input_len;

    // Copy each byte in input_buffer into the next space in our context input
    for (int i = 0; i < input_len; ++i) {
        ctx->input[offset++] = (uint8_t) * (input_buffer + i);//

        if (offset % 64 == 0) 
        {
            for (unsigned int j = 0; j < 16; ++j) {

                input[j] = (uint32_t)(ctx->input[(j * 4) + 3]) << 24 |
                    (uint32_t)(ctx->input[(j * 4) + 2]) << 16 |
                    (uint32_t)(ctx->input[(j * 4) + 1]) << 8 |
                    (uint32_t)(ctx->input[(j * 4)]);
            }

            this->step(ctx->buffer, input);
            offset = 0;
        }
    }
}

static uint8_t PADDING[] = {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

void Cmd5::finalize(MD5Context* ctx)
{
    uint32_t input[16];
    unsigned int offset = ctx->size % 64;
    unsigned int padding_length = offset < 56 ? 56 - offset : (56 + 64) - offset;

    // Fill in the padding and undo the changes to size that resulted from the update
    this->update(ctx, PADDING, padding_length);
    ctx->size -= (uint64_t)padding_length;

    // Do a final update (internal to this function)
    // Last two 32-bit words are the two halves of the size (converted from bytes to bits)
    for (unsigned int j = 0; j < 14; ++j) {
        input[j] = (uint32_t)(ctx->input[(j * 4) + 3]) << 24 |
            (uint32_t)(ctx->input[(j * 4) + 2]) << 16 |
            (uint32_t)(ctx->input[(j * 4) + 1]) << 8 |
            (uint32_t)(ctx->input[(j * 4)]);
    }
    input[14] = (uint32_t)(ctx->size * 8);
    input[15] = (uint32_t)((ctx->size * 8) >> 32);

    this->step(ctx->buffer, input);

    // Move the result into digest (convert from little-endian)
    for (unsigned int i = 0; i < 4; ++i) {
        ctx->digest[(i * 4) + 0] = (uint8_t)((ctx->buffer[i] & 0x000000FF));
        ctx->digest[(i * 4) + 1] = (uint8_t)((ctx->buffer[i] & 0x0000FF00) >> 8);
        ctx->digest[(i * 4) + 2] = (uint8_t)((ctx->buffer[i] & 0x00FF0000) >> 16);
        ctx->digest[(i * 4) + 3] = (uint8_t)((ctx->buffer[i] & 0xFF000000) >> 24);
    }
}

void Cmd5::step(uint32_t* buffer, uint32_t* input)
{
    uint32_t md5_aa = buffer[0];
    uint32_t md5_bb = buffer[1];
    uint32_t md5_cc = buffer[2];
    uint32_t md5_dd = buffer[3];

    uint32_t md5_e;

    unsigned int j;

    for (unsigned int i = 0; i < 64; ++i) {
        switch (i / 16) {
        case 0:
            md5_e = MD5_F(md5_bb, md5_cc, md5_dd);
            j = i;
            break;
        case 1:
            md5_e = MD5_G(md5_bb, md5_cc, md5_dd);
            j = ((i * 5) + 1) % 16;
            break;
        case 2:
            md5_e = MD5_H(md5_bb, md5_cc, md5_dd);
            j = ((i * 3) + 5) % 16;
            break;
        default:
            md5_e = MD5_I(md5_bb, md5_cc, md5_dd);
            j = (i * 7) % 16;
            break;
        }

        uint32_t temp = md5_dd;
        md5_dd = md5_cc;
        md5_cc = md5_bb;
        md5_bb = md5_bb + this->rotateLeft(md5_aa + md5_e + MD5_K[i] + input[j], MD5_S[i]);
        md5_aa = temp;
    }

    buffer[0] += md5_aa;
    buffer[1] += md5_bb;
    buffer[2] += md5_cc;
    buffer[3] += md5_dd;
}

int Cmd5::buffer(uint8_t * input, size_t input_len, uint8_t* result, int result_len)
{
    MD5Context ctx;
    if (result_len < 16) return -1;
    this->init(&ctx);
    this->update(&ctx, (uint8_t*)input, input_len);
    this->finalize(&ctx);

    memcpy(result, ctx.digest, 16);
    return 0;
}

int Cmd5::str(char* input, uint8_t* result,int len)
{
    return this->buffer((uint8_t*)input, strlen(input), result,len);
}

int Cmd5::str(char* input)
{
    return this->str(input,this->md5_result,16);
}

int Cmd5::file(FILE* file, uint8_t* result,int len)
{
    char* input_buffer = new char [1024];
    size_t input_size = 0;
    
    MD5Context ctx;

    if(len <16 ) return -1; 

    this->init(&ctx);

    while ((input_size = fread(input_buffer, 1, 1024, file)) > 0) {
        this->update(&ctx, (uint8_t*)input_buffer, input_size);
    }

    this->finalize(&ctx);

    delete [] input_buffer;

    memcpy(result, ctx.digest, 16);
    return 0;
}

int Cmd5::file(FILE* file)
{
    return this->file(file,this->md5_result,16);
}

int Cmd5::file(char* filename, uint8_t* result,int len)
{
    FILE* fp;
    if(len <16 ) return -1; 

    if (!(fp = fopen(filename, "rb"))) {
        printf("Error:can not open the %s file.\n", filename);
        return -1;
    }
    this->file(fp, result,len);
    fclose(fp);
    return 0;
}

int Cmd5::file(char* filename)
{
    return this->file(filename,this->md5_result,16);    
}

void Cmd5::display(uint8_t* p, int len,bool cr_lf)
{
    for (int i = 0; i < len; ++i) {
        printf("%02X", p[i]);
    }
    if (cr_lf) { printf("\n"); }
}

void Cmd5::display(bool cr_lf)
{
    this->display(this->md5_result,16, cr_lf);
}

#ifndef MD5_TEST
#define MD5_TEST 0//1
#endif

#if MD5_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

    Cmd5 md5;

    md5.str((char *)"Hello World MD5");
    md5.display();

    md5.file((char*)"md5_test.txt");
    md5.display();

    md5.file((char*)"libmysql.dll");
    md5.display();

	return 0;
}
#endif
