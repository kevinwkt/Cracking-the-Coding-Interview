#include <stdio.h>
#include <iostream>

using namespace std;

void rotateMat(int **arr,int n){
  for(int layer=0;layer<n/2;layer++){
    int first=layer;
    int last=n-1-layer;
    for(int i=first;i<last;i++){
      int offset=i-first;
      int top=arr[first][i];
      arr[first][i]=arr[last-offset][first];
      arr[last-offset][first]=arr[last][last-offset];
      arr[last][last-offset]=arr[i][last];
      arr[i][last]=top;
    }
  }
}

int main(){
  int n=4;
  int **arr=new int*[n];
  arr[0]=new int[n]{0,1,2,3};
  arr[1]=new int[n]{4,5,6,7};
  arr[2]=new int[n]{8,9,10,11};
  arr[3]=new int[n]{12,13,14,15};

  rotateMat(arr,n);

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%3d",arr[i][j]);
    }
    printf("\n");
  }

}
