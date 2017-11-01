#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isUniqueUsingVar(string str){
  if(str.length()>26) return false;
  unsigned int bitset=0;
  for(int i=0;i<str.length();i++){
    if((1<<(str[i]-97)&bitset)==1) return false;
    else{
      bitset|=(1<<(str[i]-97)&bitset);
    }
  }
  return true;
}

bool isUniqueUsingArray(string str){
  bool ascii[256];
  for(int i=0;i<256;i++) ascii[i]=false;
  for(int i=0;i<str.length();i++){
    // printf("%c char produces %d\n",str[i],int(str[i]));
    if(ascii[int(str[i])]) return false;
    else ascii[int(str[i])]=true;
  }
  return true;
}

bool isUniqueUsingSort(string str){
    sort(str.begin(),str.end());
    for(int i=1;i<str.length();i++) if(str[i]==str[i-1]) return false;
    return true;
}

int main(){
  string str="abcdefghijklmnopqrstuvwxyza";
  if(isUniqueUsingVar(str)){
    printf("%s: YES\n",str.c_str());
  }else printf("%s: NO\n",str.c_str());
}
