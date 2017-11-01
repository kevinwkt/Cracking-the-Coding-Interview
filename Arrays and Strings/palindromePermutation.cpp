#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool palindromePermute(string s){
  int arr[256];
  fill(arr,arr+256,0);
  for(int i=0;i<s.length();i++) arr[int(s[i])]++;
  int odd=0;
  for(int i=0;i<256;i++){
    if(arr[i]%2) odd++;
    if(odd>1) return false;
  }
  return true;
}

int main(){
  string s="aabbbaa";
  if(palindromePermute(s)) printf("%s YES\n",s.c_str());
  else printf("%s NO\n",s.c_str());
}
