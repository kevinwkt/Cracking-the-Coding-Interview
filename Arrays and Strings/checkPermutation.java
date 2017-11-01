import java.util.Arrays;

public class checkPermutation{


  static boolean checkPermUsingSort(String str1, String str2){
    char arr1[]=str1.toCharArray();
    Arrays.sort(arr1);
    char arr2[]=str2.toCharArray();
    Arrays.sort(arr2);

    if(arr1.length!=arr2.length) return false;
    for(int i=0;i<arr1.length;i++) if(arr1[i]!=arr2[i])return false;
    return true;
  }

  static boolean checkPermUsingCountArr(String str1, String str2){
    int arr[]=new int[256];
    for(int i=0;i<256;i++) arr[i]=0;

    for(int i=0;i<str1.length();i++) arr[(int)str1.charAt(i)]++;
    for(int i=0;i<str1.length();i++) arr[(int)str2.charAt(i)]--;
    for(int i=0;i<arr.length;i++) if(arr[i]!=0) return false;

    return true;
  }

  public static void main(String[] args){
    String str1="abc";
    String str2="bca";

    if(checkPermUsingSort(str1,str2)) System.out.println(str1+" "+str2+" YES");
    else System.out.println(str1+" "+str2+" NO");
  }

}
