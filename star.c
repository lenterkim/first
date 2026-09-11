#include "stdio.h"

int main(){
  int n = 20;
  for(int i = 0; i < n; i++) {
    for(int j = n - i; j < n; j++) {
      printf("*");
    }
    printf("\n");
  }
}
