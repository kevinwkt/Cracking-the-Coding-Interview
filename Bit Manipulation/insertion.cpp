#include <stdio.h>
#include <iostream>

using namespace std;

unsigned long insert(unsigned long a, unsigned long b, int i, int j){
  return (b<<i)|(((a>>j)<<j)|((a<<i)>>i));
}

int main(){
  unsigned long a=1024;
  unsigned long b=19;
  int i=2;
  int j=6;

  printf("%lu\n",insert(a,b,i,j));

}
