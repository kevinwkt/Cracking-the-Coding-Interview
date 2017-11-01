#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string stringComp(string s){
  string result="";
  int count=0;
  bool same=false;
  for(int i=0;i<s.length()-1;i++){
    count++;
    if(s[i+1]!=s[i]){
      result.append(s[i]+to_string(count));
      count=0;
    }else{
      if(i==s.length()-1) same=true;
    }
  }
  if(same) result+=(s[s.length()-1]+"1");
  else result.append(s[s.length()-1]+to_string(++count));

  return result;
}

int main(){
  string s="aaaaaabbbbccd";
  printf("%s to %s\n",s.c_str(),stringComp(s).c_str());
}
