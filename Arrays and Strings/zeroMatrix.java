public class zeroMatrix{

  static void turnZeros(int i, int j, int arr[][], boolean seen[][]){
    for(int a=0;a<arr.length;a++){
      arr[a][j]=0;
      arr[i][a]=0;
      seen[a][j]=true;
      seen[i][a]=true;
    }
  }

  static void zeroMat(int arr[][]){
    boolean seen[][]=new boolean[arr.length][arr.length];
    for(int i=0;i<arr.length;i++) for(int j=0;j<arr.length;j++) seen[i][j]=false;

    for(int i=0;i<arr.length;i++){
      for(int j=0;j<arr.length;j++){
        if(arr[i][j]==0&&seen[i][j]==false){seen[i][j]=true;turnZeros(i,j,arr,seen);}
      }
    }
  }

  public static void main(String[] args){
    int n=4;
    int arr[][]=new int[n][n];
    int count=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) {arr[i][j]=count;count++;}

    // for(int i=0;i<n;i++){
    //   for(int j=0;j<n;j++) System.out.printf(arr[i][j]+" ");
    //   System.out.println();
    // }

    zeroMat(arr);

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++) System.out.printf(arr[i][j]+" ");
      System.out.println();
    }

  }
}
