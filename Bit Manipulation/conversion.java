public class conversion{

  static int convers(long a, long b){
    int count=0;
    while(a!=0||b!=0){
      if((a&1)!=(b&1)) count++;
      a>>=1;
      b>>=1;
    }
    return count;
  }

  public static void main(String[] args){
    long a=29;
    long b=15;
    System.out.println(convers(a,b));
  }

}
