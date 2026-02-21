public class recur {

    static void toh(int n,char src,char help,char dest){
        if(n==1){
            System.out.println("move disk "+n+" from "+src+" to "+dest);
        }
        else{
            toh(n-1,src,dest,help);
            System.out.println("move disk "+n+" from "+src+" to "+dest);
            toh(n-1,help,src,dest);
        }
    }
    public static void main(String[] args){
        int n=3;
        toh(n,'S','H','D');

    }
}
