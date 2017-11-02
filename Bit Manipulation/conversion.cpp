#include <stdio.h>
#include <iostream>

using namespace std;

unsigned long convers(unsigned long a, unsigned long b){
  unsigned long count=0;
  while(a!=0||b!=0){
    // printf("%lu %lu\n",a,b);
    if((a&1)!=(b&1)) count++;
    // printf("count: %lu\n",count);
    a>>=1;
    b>>=1;
  }
  return count;
}

int main(){
  unsigned long a=29;
  unsigned long b=15;

  printf("%lu\n",convers(a,b));

}
