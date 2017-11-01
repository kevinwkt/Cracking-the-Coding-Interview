public class palindromePermute{

  static boolean palindromePerm(String s){
    //Work only for a-z lowercase
    long bit=0;
    for(int i=0;i<s.length();i++){
      bit^=(1<<(s.charAt(i)-97));
    }
    int count=0;
    while(bit!=0){
      if((bit&1)==1) count++;
      if(count>1) return false;
      bit=bit>>1;
    }
    return true;
  }

  public static void main(String[] args){
    String s="aabbaaa";
    if(palindromePerm(s)) System.out.println(s+" YES");
    else System.out.println(s+" NO");
  }

}
