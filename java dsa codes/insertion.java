
public class insertion {
    public static void main(String[] arg) {
        int[] arr = new int[100];
        arr[0] = 7;
        arr[1] = 8;
        arr[2] = 12;
        arr[3] = 27;
        arr[4] = 88;
        int index = 3;
        int element = 45;
        int size = 5;
        insert(arr, index, size, element);
        if (arr[index] == element) {
            System.out.println("Insertion Successfull");
            print(arr, size + 1);
        } else {
            System.out.println("insertion not succesful");
        }

    }

    public static void insert(int arr[], int index, int size, int element) {
        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }

    public static void print(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}
