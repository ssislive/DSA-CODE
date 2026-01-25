

public class insertioncll {
    static class node{
        int data;
        node next;
    }

    public static node insertatbeg(node head,int data){
        node p=new node();
        p.data=data;

        p.next=head;
        head=p; 
        return head;
    }

    public static node insertatindex(node head,int data,int index){
        node p=new node();
        p.data=data;
        int i=0;
        node ptr=head;
        while(i!=index-1){
            ptr=ptr.next;
            i++;
        }
        p.next=ptr.next;
        ptr.next=p;
        return head;
    }

    public static node insertatend(node head,int data){
        node p=new node();
        p.data=data;
        node ptr=head;
        while(ptr.next!=null){
            ptr=ptr.next;
        }
        ptr.next=p;
        p.next=null;

        return head;
    }

    public static node insertatnode(node head,node prev,int data){
        node p = new node();
        p.data=data;
        p.next=prev.next;
        prev.next=p;
        return head;
    }
    public static void linkedlisttraversl(node head){
        while(head!=null){
            System.out.println(head.data);
            head=head.next;
        }
    }
    public static void main(String [] args){
        node head=new node();
        head.data=10;
        head.next=null;

        node second=new node();
        second.data=20;
        second.next=null;

        node third=new node();
        third.data=30;
        third.next=null;
        
        head.next=second;
        second.next=third;

        head=insertatend(head ,5);
        linkedlisttraversl(head);
        
    }
}