#include <stdlib.h>

//  return a dynamically allocated `long long` array of results

long long *tribonacci(const long long signature[3], size_t n) {

    //  <----  inizio!
    if (n == 0)
        return NULL;
    long long *result = (long long *)calloc(n, sizeof(long long));
    if (!result)
      return NULL;
    
    result[0] = signature[0];
    result[1] = signature[1];
    result[2] = signature[2];

    int i = 3;
    while (i < n)
    {
        result[i] = result[i - 1] + result[i - 2] + result[i - 3];
        i++;
    }
    return result;
}
