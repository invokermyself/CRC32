#include <stdint.h>

#define CRC32_POLYNOMIAL 0xEDB88320L

 unsigned long CRC32Value(int i);
 unsigned long CalculateBlockCRC32( unsigned long ulCount, unsigned char *ucBuffer );
 unsigned long CalculateCRC32(unsigned char *szBuf, uint16_t iSize);