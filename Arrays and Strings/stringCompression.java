
public class stringCompression{

  static String stringComp(String s){
    StringBuilder sb=new StringBuilder();

    int count=0;
    boolean same=false;
    for(int i=0;i<s.length()-1;i++){
      count++;
      if(s.charAt(i+1)!=s.charAt(i)){
        sb.append(s.charAt(i)+Integer.toString(count));
        count=0;
      }else{
        if(i==s.length()-1) same=true;
      }
    }
    if(same) sb.append(s.charAt(s.length()-1)+"1");
    else sb.append(s.charAt(s.length()-1)+Integer.toString(++count));

    return sb.toString();
  }

  public static void main(String[] args){
    String s="aaabbcccc";
    System.out.println(s+" to "+stringComp(s));
  }


}
