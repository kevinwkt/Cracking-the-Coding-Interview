#include <stdio.h>
#include <iostream>

using namespace std;

unsigned long flipBitToWin(unsigned long a){
  int count=0;
  int maxLength=0;
  int count2=0;
  bool secondtry=false;
  while(a){
    if(a&1) count2++;
    else{
      if(a&2){
        count=count2;
        count2=1;
      }else{
        if(count+count2>maxLength) maxLength=count+count2;
        count=0;
        count2=0;
      }
    }
    if(count+count2>maxLength) maxLength=count+count2;
    a>>=1;
  }
  return maxLength;
}

int main(){
  unsigned long a=14815;
  printf("%lu\n",flipBitToWin(a));
}
