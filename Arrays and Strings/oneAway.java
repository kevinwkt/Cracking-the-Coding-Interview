import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class oneAway{

  static boolean oneAway(String s1, String s2){
    HashMap<Character,Integer> hm=new HashMap();
    for(int i=0;i<s1.length();i++){
      if(hm.containsKey(s1.charAt(i))) hm.put(s1.charAt(i),hm.get(s1.charAt(i))+1);
      else  hm.put(s1.charAt(i),1);
    }
    for(int i=0;i<s2.length();i++){
      if(hm.containsKey(s2.charAt(i))) hm.put(s2.charAt(i),hm.get(s2.charAt(i))+1);
      else  hm.put(s2.charAt(i),-1);
    }
    int count=0;
    for(Iterator it=hm.entrySet().iterator();it.hasNext();){
      Map.Entry pair=(Map.Entry)it.next();
      int c=(int)pair.getValue();
      if(c!=0) count++;
      if(c>2) return false;
    }
    return true;
  }

  public static void main(String[] args){
    String s1="one";
    String s2="tne";
    if(oneAway(s1,s2)) System.out.println(s1+" and "+s2+" YES");
    else System.out.println(s1+" and "+s2+" NO");
  }

}
