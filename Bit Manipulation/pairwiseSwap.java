public class pairwiseSwap{

  static int pairwiseSwap(int a){
    return ((a&0xaaaaaaaa)>>1)|((a&0x55555555)<<1);
  }

  public static void main(String[] args){
    int a=12134;
    System.out.println(pairwiseSwap(a));
  }

}
