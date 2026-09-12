#include "stdio.h"
#include "math.h"

int main(){
  const int len = 200000;
  int mul = 2;
  bool x[len+1] = {};
  x[0] = x[1] = 1;
  for(int i = 2; i < sqrt(len); i++){
    if(!x[i]) {
      mul = 2;
      while(i*mul < len) {
        x[i*mul] = 1;
        mul++;
      }
    }
  }
  for(int i = 0; i < len; i++){
    if(!x[i]) printf("%i ", i);
  }

  return 0;
}
