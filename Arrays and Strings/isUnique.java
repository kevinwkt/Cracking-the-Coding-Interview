import java.util.Arrays;

public class isUnique{

    //O(n) but uses extra memory
    static boolean isUniqueUsingArray(String str){
      if(str.length()>128) return false;
      boolean[] arr=new boolean[128]; //Java initiates all bool arrays to false
      for(int i=0;i<str.length();i++){
        if(arr[str.charAt(i)]){ //If something's already there
          return false;
        }
        arr[str.charAt(i)]=true;
      }
      return true;
    }

    //O(n) but uses another variable, ONLY APPLICABLE FOR LOWERCASE LETTERS
    static boolean isUniqueUsingVar(String str){
      if(str.length()>128) return false;
      int vec=0;
      for(int i=0;i<str.length();i++){
        if((vec | (1<<(str.charAt(i)-'a')))==vec) return false;
        else vec|=(1<<(str.charAt(i)-'a'));
      }
      return true;
    }

    static boolean isUniqueUsingSort(String str){
      char arr[]=str.toCharArray();
      Arrays.sort(arr);
      for(int i=1;i<arr.length;i++) if(arr[i]==arr[i-1]) return false;
      return true;
    }

    public static void main(String[] args){
        String str="abcdefghijklmnopqrstuvwxyza";
        if(isUniqueUsingSort(str)){
          System.out.println(str+": YES");
        }else System.out.println(str+": NO");

    }
}
