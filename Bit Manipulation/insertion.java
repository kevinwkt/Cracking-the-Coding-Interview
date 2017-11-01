public class insertion{

  static int insert(int a, int b, int i, int j){
      return (b<<i)|(((a>>j)<<j)|((a<<i)>>i));
  }

  public static void main(String[] args){
    int a=1024;
    int b=19;
    int i=2;
    int j=6;

    System.out.println(insert(a,b,i,j));
  }

}
