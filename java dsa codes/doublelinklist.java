public class doublelinklist {

    static class node{
        int data;
        node next;
        node prev;
    }

    public static void linklisttraversal(node head){
        node ptr=head;
        while(ptr!=null){
            System.out.println("elements :"+ptr.data);
            ptr=ptr.next;
        }
    }
    
    public static void main(String [] args){
        node head=new node();
        head.data=10;
        head.next=null;
        head.prev=null;
        
        node second=new node();
        second.data=20;
        second.next=null;
        second.prev=null;

        node third=new node();
        third.data=30;
        third.next=null;
        third.prev=null;

        head.next=second;
        second.next=third;
        second.prev=head;
        third.prev=second;

        linklisttraversal(head);
    }

    
}
