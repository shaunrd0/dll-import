#include <algorithm>
#include <cstring>
#include <iostream>

// Export relative to Windows / Linux
#ifdef __MSC_VER
  #define EXPORT __declspec(dllexport)
#elif __GNUC__
  #define EXPORT __attribute__((visibility("default")))
#endif

extern "C" {
  EXPORT uint8_t IsPalindrome(char * str, int len)
  {
    if (len < 1) return false;
    if (len == 1) return true;
    char * rev = strdup(str);
    std::reverse(rev, rev+len);

    for (int i = 0; i < len; i++) {
      if (str[i] != rev[i]) {
        delete[] rev;
        return 0;
      }
    }

    delete[] rev;
    return 1;
  }
}
