#include <stdlib.h>
#include <string.h>
char *repeat_str(size_t count, const char *src)
{
// allocate a string on the heap
  char *ret = calloc(strlen(src) * count + 1, sizeof(char));
  if (!ret) return NULL;
  size_t i, a = 0;
  while (count) {
    i = 0;
    while (src[i])
      ret[a++] = src[i++];
    count--;
  }
  return ret;
}
