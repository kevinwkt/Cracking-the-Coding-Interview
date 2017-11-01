public class binaryToString{

  static String binToString(double d){
    StringBuilder sb=new StringBuilder();
    int count=0;
    while(d!=0){
      count++;
      if(count>32) return "ERROR";
      d*=2;
      if(d>=1){
        sb.append("1");
        d-=1;
      }else sb.append("0");
    }
    return sb.toString();
  }

  public static void main(String[] args){
    double d=0.625;
    System.out.println(binToString(d));
  }
}
