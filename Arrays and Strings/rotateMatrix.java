public class rotateMatrix{

  static void rotateMat(int arr[][],int n){

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

  public static void main(String[] args){
    int n=4;
    int arr[][]=new int[n][n];
    int count=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        arr[i][j]=count;
        count++;
      }
    }

    rotateMat(arr,n);

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        System.out.printf(arr[i][j]+" ");
      }
      System.out.println();
    }

  }
}
