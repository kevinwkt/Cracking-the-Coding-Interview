#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

bool oneAway(string s1, string s2){
  map<char,int> mp;
  for(int i=0;i<s1.length();i++){
    if(mp.find(s1[i])!=mp.end()) mp[s1[i]]++;
    else mp[s1[i]]=1;
  }
  for(int i=0;i<s2.length();i++){
    if(mp.find(s2[i])!=mp.end()) mp[s2[i]]--;
    else mp[s2[i]]=-1;
  }
  int count=0;
  for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
    if(it->second!=0)count++;
    if(count>2) return false;
  }
  return true;
}

int main(){

  string s1="one";
  string s2="tnee";

  if(oneAway(s1,s2)) printf("%s to %s YES\n",s1.c_str(),s2.c_str());
  else printf("%s to %s NO\n",s1.c_str(),s2.c_str());

}
