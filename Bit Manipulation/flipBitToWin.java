public class flipBitToWin{

  static long flipBitToWin(long a){
    int prev=0;
    long maxLength=0;
    int curr=0;
    while(a!=0){
      if((a&1)==1) curr++;
      else{
        if((a&2)==2){
          prev=curr+1;
          curr=0;
        }else{
          if(prev+curr>maxLength) maxLength=prev+curr;
          prev=0;
          curr=0;
        }
      }
      if(prev+curr>maxLength) maxLength=prev+curr;
      a>>=1;
    }
    return maxLength;
  }

  public static void main(String[] args){
    long a=14815;
    System.out.println(flipBitToWin(a));
  }

}
