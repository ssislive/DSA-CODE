public class deletionlinkedlist {

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

    public static Node deleteatfirst(Node head){
        if(head==null){
            return null;
        }

        Node p =head;
        head=head.next;
        return head;

    }

    public static Node deleteatindex(Node head,int index){
        Node p=head;
        Node q=p.next;
        int i=0;
        while(i!=index-1){
            p=p.next;
            i++;
        }
        p.next=q.next;
        return head;
    }

    public static Node deleteatend(Node head){
        Node p=head;
        Node q=p.next;
        if(head==null || head.next==null){
            return null;
        }

        while(p.next.next==null){
            p=p.next;
            q=q.next;
        }
        p.next=null;
        return head;

    }

    public static Node deleteatvalue(Node head,int value){
        if(head==null ){
            return null;
        }
        if(head.data==value){
            return head.next;
        }
        Node p=head;
        Node q=p.next;
        while(q.data!=value && q!=null){
            p=q;
            q=q.next;
        }
        if(q.data==value){
            p.next=q.next;
            return head;
        }
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

        head=deleteatvalue(head,45);
        linkedlisttraversl(head);
    }
}
