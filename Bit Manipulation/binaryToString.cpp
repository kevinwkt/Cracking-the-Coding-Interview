#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string binToString(double d){
  int count=0;
  string str="";
  while(d){
    count++;
    if(count>32) return "ERROR";
    d*=2;
    if(d>=1){
      str.append("1");
      d-=1;
    }
    else str.append("0");
  }
  return str;
}

int main(){
  double d=0.625;
  printf("%s\n",binToString(d).c_str());
}
