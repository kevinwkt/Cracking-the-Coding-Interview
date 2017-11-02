public class nextNumber{

  static void nextNumber(int a){
    int n=a;
    int zeros=0;
    int ones=0;

    while((n&1)==0&&n!=0){
      zeros++;
      n>>=1;
    }

    while((n&1)==1&&n!=0){
      ones++;
      n>>=1;
    }

    if(ones+zeros==31||ones+zeros==0) System.out.println("ERROR");

    a|=(1<<(ones+zeros));
    a=((a>>(ones+zeros))<<(ones+zeros))|((1<<(ones-1))-1);
    System.out.println("Higher number:"+a);

  }

  public static void main(String[] args){
    int a=13455;
    nextNumber(a);
  }

}
