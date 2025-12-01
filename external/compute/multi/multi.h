#include <compute/add/add.h>

inline int multi(int a, int b) {
  int tmp = 0;
  for (int i = 0; i < b; ++i) {
    tmp = add(tmp, a);
  }
  return tmp;
}
