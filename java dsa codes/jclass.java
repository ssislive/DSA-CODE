class rectangle {
    int l, b;

    void getdata(int x, int y) {
        l = x;
        b = y;
    }

    int area(int l, int b) {
        int area = l * b;
        return area;
    }
}

public class jclass {
    public static void main(String arg[]) {
        rectangle rec1 = new rectangle();
        rec1.getdata(10, 20);
        int a1 = rec1.area(10, 20);
        rectangle rec2 = new rectangle();
        rec2.l = 15;
        rec2.b = 10;
        int a2 = rec2.area(15, 10);
        System.out.println("Area of rectangle 1:" + a1);
        System.out.println("Area of rectangle 2:" + a2);

    }
}