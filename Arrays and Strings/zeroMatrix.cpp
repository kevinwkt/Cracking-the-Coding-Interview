#include <stdio.h>
#include <iostream>

using namespace std;

void markZeros(int i, int j,int n,int **arr, bool **seenMat){
  for(int a=0;a<n;a++){
    arr[i][a]=0;
    seenMat[i][a]=true;
    arr[a][j]=0;
    seenMat[a][j]=true;
  }
}

void zeroMat(int **arr, int n){
  bool **seenMat=new bool*[n];
  for(int i=0;i<n;i++) seenMat[i]=new bool[n]{false,false,false,false};
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]==0&&seenMat[i][j]==false){
        seenMat[i][j]=true;
        markZeros(i,j,n,arr,seenMat);
      }
    }
  }
}

int main(){
  int n=4;
  int **arr=new int*[n];
  arr[0]=new int[n]{0,2,3,4};
  arr[1]=new int[n]{5,0,7,8};
  arr[2]=new int[n]{9,10,11,12};
  arr[3]=new int[n]{13,14,15,0};

  zeroMat(arr,n);

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) printf("%3d",arr[i][j]);
    printf("\n");
  }

}
