public class insertionlinkedlist {


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

    public static Node insertatfirst(Node head , int data){
        Node ptr=new Node();
        ptr.data=data;
        ptr.next=head;

        return ptr;
    }

    public static Node insertatindex(Node head , int data,int index){
        Node ptr=new Node();
        Node p=head;
        int i=0;
        while(i!=index-1){
            p=p.next;
            i++;
        }
        ptr.data=data;
        ptr.next=p.next;
        p.next=ptr;
        return head;
    }

    public static Node insertatend(Node head , int data){
        Node ptr=new Node();
        ptr.data=data;
        Node p= head;

        while(p.next!=null){
            p=p.next;
        }
        ptr.next=p.next;
        p.next=ptr;

        return head;
    }

    public static Node insertafternode(Node head ,Node prevnode,  int data){
        Node ptr=new Node();
        ptr.data=data;
        
        ptr.next=prevnode.next;
        prevnode.next=ptr;

        return head;
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
        
        System.out.println("Before insertion:");
        linkedlisttraversl(head);

        // head = insertatfirst(head,56);

        // System.out.println("After insertion at first:");

        // linkedlisttraversl(head);

        // System.out.println("After insertion at index 1:");

        // head=insertatindex(head,89,1);

        // linkedlisttraversl(head);

        // System.out.println("After insertion at end:");

        // head=insertatend(head,99);

        // linkedlisttraversl(head);

        System.out.println("After insertion after a node:");

        head=insertafternode(head,second,78);
        linkedlisttraversl(head);

    } 
    
}
