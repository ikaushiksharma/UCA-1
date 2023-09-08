import java.util.Scanner;
public class StringPalindrome{
        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                String in = sc.nextLine();
                // System.out.println(isPalindrome(in));
                System.out.println(largestPalindrome(in));
        }
       private static String largestPalindrome(String s){
               String max="";
               for(int i=0;i<s.length();i++){
                       for(int j=i+1;j<=s.length();j++){
                               String sub=s.substring(i,j);
                               if(isPalindrome(sub)){
                                       if(sub.length()>max.length()){
                                               max=sub;
                                       }
                               }
                       }
               }
               return max;
       }
       private static boolean isPalindrome(String s){
                if(s.length()==0 || s.length()==1){
                        return true;
                }
               int i=0;
               int j=s.length()-1;
               while(i<j){
                       char a=s.charAt(i);
                       char b = s.charAt(j);
                       System.out.println(a+" "+b);
                       if(!Character.isAlphabetic(a) && !Character.isDigit(b)){
                               i++;
                               continue;
                       }
                       else if(!Character.isAlphabetic(b) && !Character.isDigit(b)){
                               j--;
                               continue;
                       }
                       if(Character.toLowerCase(a)==Character.toLowerCase(b)){
                               i++;
                               j--;
                       }else{
                               return false;
                       }
               }
               return true;
       }
}