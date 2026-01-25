public class stacklinkedlist {
    static class node{
        int data;
        node next;
    }

    public static int isempty(node top){
        if (top==null){
            return 1;
        }
        else{
            return 0;
        }
    }

    public static int push(node top,int val){
        node p=new node();
        p.data=val;
        p.next=top;
        top=p;
        return 0;
    }

    public static int pop(node top){
        if(isempty(top)==1){
            System.out.println("stack undeflow");
            return -1;
        }
        else{
            int val=top.data;
            top=top.next;
            System.out.println("the value is popped"+val);
            return val;
        }
    }

    public static int isfull(node top){
        node p=new node();
        if(p==null){
            return 1;
        }
        else{
            return 0;
        }
    }

    public static int peek(node top,int pos){
        node p=top;
        for(int i=0;i<pos-1 && p!=null;i++){
            p=p.next;
        }
        if(p!=null){
            return p.data;
        }
        else{
            return -1;
        }
    }

    public static void main(String [] args){
        node top=new node();
        top.data=10;
        top.next=null;
    }    
}
