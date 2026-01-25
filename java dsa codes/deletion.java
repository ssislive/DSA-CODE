public class deletion {

    public static void main(String[] arg) {
        int[] arr = new int[100];
        arr[0] = 7;
        arr[1] = 8;
        arr[2] = 12;
        arr[3] = 27;
        arr[4] = 88;
        int index = 2;
        int size = 5;
        int s = delete(arr, index, size);
        if (s == 1) {
            System.out.println("Deletion Successfull");
            print(arr, size - 1);
        } else {
            System.out.println("Deletion not succesful");
        }

    }

    public static int delete(int arr[], int index, int size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        return 1;
    }

    public static void print(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }

}
