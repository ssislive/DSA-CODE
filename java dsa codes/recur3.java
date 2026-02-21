public class recur3 {

    public static void printrev(String s,int idx){
        if(idx==0){
            System.out.println(s.charAt(idx));
        }
        else{
            System.out.println(s.charAt(idx));
            printrev(s,idx-1);
        }
    }
    public static void main (String[] args){
        String s="abcd";
        int idx=s.length()-1;
        printrev(s,idx);
    }
    
}
