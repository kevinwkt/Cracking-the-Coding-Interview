#include <stdio.h>
#include <iostream>

using namespace std;

unsigned long pairwiseSwap(unsigned long a){
  return ((a&0xaaaaaaaa)>>1)|((a&0x55555555)<<1);
}

int main(){
  unsigned long a=12134;  //10111101100110 01111110011001
  // 100101000001011001110
  // 100010100000111001101
  printf("%lu\n",pairwiseSwap(a));

}
