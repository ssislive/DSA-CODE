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

class bstinsert{

    Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }

        if(data < root.data){
            root.left=insert(root.left , data);
        }
        else if (data > root.data){
            root.right=insert(root.right,data);
        }
        return root;
    }

    void inorder(Node root){
        if(root==null){
            return ;
        }

        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    public static void main(String [] args){
        bstinsert tree =new bstinsert();

        Node root=null;

        root=tree.insert(root,10);
        root = tree.insert(root, 6);
        root = tree.insert(root, 15);
        root = tree.insert(root, 3);
        root = tree.insert(root,8);
        root = tree.insert(root, 12);
        root = tree.insert(root,20);

        tree.inorder(root);
    }
}