public class stack {

    class stacknode{
        int size;
        int top;
        int arr[];
    }

    public static int isempty(stacknode node){
        if(node.top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    public static int isfull(stacknode node){
        if(node.top==node.size-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    public static int push(stacknode node,int val){
        if(isfull(node)==1){
            System.out.println("stack overflow");
            return -1;
        }
        else{
            node.top++;
            node.arr[node.top]=val;
            System.out.println("the value is pushed");
            return 0;
        }
    }

    public static int pop(stacknode node){
        if(isempty(node)==1){
            System.out.println("stack underflow");
            return -1;
        }
        else{
            int val=node.arr[node.top];
            node.top--;
            System.out.println("the value is popped"+val);
            return val;
        }
    }

    public static int peek(stacknode node,int i){
        if(node.top-i+1<0){
            System.out.println("invalid position");
            return -1;
        }
        else{
            return node.arr[node.top-i+1];
        }
    }

    public static int stacktop(stacknode node){
        if(isempty(node)==1){
            System.out.println("stack is empty");
            return -1 ;
        }
        else{
            return node.arr[node.top];
        }
    }

    public static int stackbottom(stacknode node){
        if(isempty(node)==1){
            System.out.println("Stack is empty");
            return -1;
        }
        else{
            return node.arr[0];
        }
    }

    public static void main(String [] args){
        stack s=new stack();
        stacknode node=s.new stacknode();
        node.size=10;
        node.top=-1;
        node.arr=new int[node.size];

        System.out.println("stack created of succesfully");

        push(node,78);
        push(node,18);
        push(node,28);
        
        stackbottom(node);
        System.out.println("the top element is :"+stacktop(node));
        stackbottom(node);





    }
}
