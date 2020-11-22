
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

#include "codes.h"


static void array_char2int(uint8_t *dest, const char *src, const size_t len)
{
  char byte_hex[3];

  for (int i = 0; i < len; i+=2)
    {
      snprintf(byte_hex, sizeof byte_hex, "%c%c", src[i], src[i + 1]);
      dest[i / 2] = strtol(byte_hex, NULL, 16);
    }
}

static int generate_random(void)
{
  srand(time(NULL));
  return 1 + (rand() % 254);
}

static void array_encode(uint8_t *dest, uint8_t *src, const size_t len)
{
  int random = generate_random();

  for (int i = 0; i < len; i++)
    {
      if (!i)
        {
          dest[i] = random;
          continue;
        }

#ifndef NDEBUG
      fprintf(stderr, "%x ^ %x = %x\n", random, src[i - 1], random ^ src[i - 1]);
#endif
      dest[i] = random ^ src[i - 1];
    }
}

static void array_int2char(char *dest, uint8_t *src, const size_t len)
{
  char byte_hex[3];

  for (int i = 0, j = 0; i < len; i++, j += 2)
    {
      snprintf(byte_hex, sizeof byte_hex, "%02X", src[i]);
      dest[j]     = byte_hex[0];
      dest[j + 1] = byte_hex[1];
#ifndef NDEBUG
      fprintf(stderr, "%c%c ", dest[j], dest[j+1]);
#endif
    }
}



char * encode(const char *code)
{
  const int len = strlen(code);
  uint8_t array_int_code[len / 2];        // string code to code integer
  uint8_t array_encoded[ (len / 2) + 1 ]; // code integer to code "encoded"

  static char encoded_str[10];            // code "encoded" to string code encoded


  array_char2int(array_int_code, code, len);

  array_encode(array_encoded, array_int_code, sizeof array_encoded);

  array_int2char(encoded_str, array_encoded, sizeof array_encoded);

  return encoded_str;
}


int main(int argc, char **argv)
{

  if (argc == 1)
    {
      printf("Usage: %s id\nsee codes.h\n", argv[0]);
      return 1;
    }

  int id = atoi(argv[1]) - 1;

  printf("id - %d\n"
         "key - %s\n"
         "code - %s\n"
         "encoded - %s\n", code[id].id, code[id].key, code[id].code, encode(code[id].code));

  return 0;
}
