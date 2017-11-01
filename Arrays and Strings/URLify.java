public class URLify{

  static String urlifyIterate(String str){
    StringBuilder sb=new StringBuilder();
    for(int i=0;i<str.length();i++){
      if(str.charAt(i)==' ') sb.append("%20");
      else sb.append(str.charAt(i));
    }
    return sb.toString();
  }

  static String urlifyRegex(String str){
    return str.replaceAll(" ","%20");
  }

  public static void main(String[] args){
    String str="Hello there sir";
    System.out.println(str+" to "+urlifyIterate(str));
  }

}
