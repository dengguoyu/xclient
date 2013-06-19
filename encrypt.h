#ifndef __ENCRYPT_H__
#define __ENCRYPT_H__

#include <stdint.h>

typedef struct {
	uint32_t i[2];
	uint32_t buf[4];
	uint8_t in[64];
	char digest[16];
} MD5_CTX;

void MD5Init(MD5_CTX *mdContext);
void MD5Update(MD5_CTX *mdContext, char *data, int len);
void MD5Final(MD5_CTX *mdContext);
int Base64Encode(const char *source, char *destination, int len);

#endif

