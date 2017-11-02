#include <stdio.h>
#include <iostream>

using namespace std;

void nextNumber(unsigned long a){
  int zeros=0;
  int ones=0;
  unsigned long n=a;
  while(!(n&1)&&n!=0){
    zeros++;
    n>>=1;
  }

  while((n&1)&&n!=0){
    ones++;
    n>>=1;
  }

  if(ones+zeros==32||ones+zeros==0) printf("ERROR\n");

  a|=(1<<(ones+zeros));
  a=((a>>(ones+zeros))<<(ones+zeros))|((1<<(ones-1))-1);
  printf("%lu\n",a);

}

int main(){
  unsigned long a=13455;
  nextNumber(a);
}

// 11010010001111
