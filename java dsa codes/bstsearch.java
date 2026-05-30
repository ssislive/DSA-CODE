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

public class bstsearch {

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

    
    public Boolean search(Node root , int target){
        if (root == null){
            return false;
        }
        if(root.data==target){
            return true;
        }
        else if (root.data > target){
            return search(root.left , target);
        }
        else {
            return search (root.right , target);
        }
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
        bstsearch tree = new bstsearch();

        Node root = null;

        root=tree.insert(root,10);
        root = tree.insert(root, 6);
        root = tree.insert(root, 15);
        root = tree.insert(root, 3);
        root = tree.insert(root,8);
        root = tree.insert(root, 12);
        root = tree.insert(root,20);

        System.out.print(tree.search(root,200));
    }
}