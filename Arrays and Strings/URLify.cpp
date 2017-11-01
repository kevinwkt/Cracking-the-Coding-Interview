#include <stdio.h>
#include <iostream>
#include <string>
#include <regex>

using namespace std;

string urlifyIterate(string str){
  string result="";
  for(int i=0;i<str.length();i++){
    if(str[i]==' ') result+="%20";
    else result+=str[i];
  }
  return result;
}

string urlifyRegex(string str){
  regex r(" ");
  return regex_replace(str,r,"%20");
}

int main(){
  string str= "Mr John Smith     ";
  printf("From %s to %s\n",str.c_str(),urlifyIterate(str).c_str());
  // printf("From %s to %s\n",str.c_str(),urlifyRegex(str).c_str());
}
