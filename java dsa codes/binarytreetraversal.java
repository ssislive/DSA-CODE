class Node{
    int data;
    Node left;
    Node right;

    Node(int data){
        this.data=data;
        this.left=null;
        this.right=null;
    }
}
//        1
//       / \
//      2    3
//     / \  / \
//    4   5
// creating above tree and doing operations

public class binarytreetraversal {
    

    public static void inorder(Node root){
        if(root == null){
            return;
        }
        inorder(root.left);
        System.out.print(root.data+"");
        inorder(root.right);
    }

    public static void preorder(Node root){
        if(root == null){
            return;
        }
        System.out.print(root.data + "");
        preorder(root.left);
        preorder(root.right);
    }

    public static void postorder(Node root){
        if(root == null){
            return ;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + "");
    }
    
    public static void main(String [] args){

        Node root = new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);

        inorder(root);
        System.out.println();
        postorder(root);
        System.out.println();
        preorder(root);
        
    }
    
}
