#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
  size_t i = 0, c = 0;
  while (i < count){
    if (sheep[i] == true)
      c++;
    i++;
  }
  return c;
}
