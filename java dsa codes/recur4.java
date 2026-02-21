public class recur4 {

    public static void firstandlast(String s,int idx,char k){
        if(idx==0){
            if(s.charAt(idx)==k){
                System.out.println("first and last occurrence is at index "+idx);
            }
        }
        else{
            if(s.charAt(idx)==k){
                System.out.println("last occureance is at index"+idx);
                firstandlast(s,idx-1,k);
                System.out.println("first occureance is at index"+idx);
            }
        }
    }
    public static void main(String[] args){
        String s="abaacdaefaah";
        int idx=s.length()-1;
        char d='a';
        firstandlast(s,idx,d);
    }
    
}
