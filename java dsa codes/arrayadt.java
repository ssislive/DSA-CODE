import java.util.*;

class myarray {
    int total_size;
    int used_size;
    int[] ptr;

    void createarray(int tsize, int usize) {
        total_size = tsize;
        used_size = usize;
        ptr = new int[tsize];
    }

    void showarray() {
        for (int i = 0; i < used_size; i++) {
            System.out.println(ptr[i]);
        }
    }

    void setvalue() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < used_size; i++) {
            System.out.println("enter the number");

            int n = sc.nextInt();
            ptr[i] = n;

        }
        sc.close();
    }
}

public class arrayadt {
    public static void main(String[] arg) {
        myarray marks = new myarray();
        marks.createarray(100, 2);
        marks.setvalue();
        marks.showarray();
    }
}
