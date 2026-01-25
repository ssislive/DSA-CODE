public class linkedlist {

    static class Node{
        int data;
        Node next;
    }

    public static void linkedlisttraversl(Node head){
        while(head!=null){
            System.out.println(head.data);
            head=head.next;
        }
    }
    public static void main(String [] args){
        Node head=new Node();
        head.data=11;
        head.next=null;

        Node second=new Node();
        second.data=22;
        second.next=null;

        Node third=new Node();
        third.data=45;
        third.next=null;

        head.next=second;
        second.next=third;

        linkedlisttraversl(head);

    } 
    
}
