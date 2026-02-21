public class queue {

    class queuenode{
        int size;
        int f;
        int r;
        int arr[];
    }

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
        queue q=new queue();
        queuenode node=q.new queuenode();
        node.size=10;
        node.f=-1;
        node.r=-1;
        node.arr=new int[node.size];
        enqueue(node,10);
        enqueue(node,20);
        dequeue(node);
    }
}