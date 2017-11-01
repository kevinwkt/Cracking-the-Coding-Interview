#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool checkPermUsingSort(string str1, string str2){
  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end());
  for(int i=0;i<str1.length();i++) if(str1[i]!=str2[i])return false;
  return true;
}

bool checkPermUsingCountArr(string str1, string str2){
  int arr[256];
  // for(int i=0;i<256;i++) arr[i]=0;
  fill(arr,arr+256,0);

  if(str1.length()!=str2.length()) return false;
  for(int i=0;i<str1.length();i++){
    // printf("%c char is %d \n",str1[i],int(str1[i]));
    arr[int(str1[i])]++;
    // printf("add %d\n",arr[int(str1[i])]);
  }
  for(int i=0;i<str1.length();i++){
    // printf("%c char is %d \n",str2[i],int(str2[i]));
    arr[int(str2[i])]--;
    // printf("take away %d\n",arr[int(str2[i])]);
  }
  for(int i=0;i<sizeof(arr)/sizeof(arr[i]);i++) if(arr[i]!=0) return false;
  return true;
}

int main(){
  string str1="abc";
  string str2="baa";

  if(checkPermUsingCountArr(str1,str2)) printf("%s %s YES\n",str1.c_str(),str2.c_str());
  else printf("%s %s NO\n",str1.c_str(),str2.c_str());

}
