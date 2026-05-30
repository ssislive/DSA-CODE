

class queuenode{
    int size;
    int f;
    int r;
    int arr[];
}
public class queue {

    public static void enqueue(queuenode node,int val){
        if(node.r==node.size-1){
            System.out.println("queue overflow");
        } else{
            node.r++;
            node.arr[node.r]=val;
            System.out.println("the value is enqueued "+val);
            }
    }
    
    public static int dequeue(queuenode node){
        if(node.f==node.r){
            System.out.println("queue underflow");
            return -1;
        } else{
            node.f++;
            int val=node.arr[node.f];
            System.out.println("the value is dequeued "+val);
            return val;
        }
    } 
    public static void main(String [] args){
        queuenode q=new queuenode();

        q.size=10;
        q.f=-1;
        q.r=-1;
        q.arr=new int[q.size];
        enqueue(q,10);
        enqueue(q,20);
        dequeue(q);
    }
}