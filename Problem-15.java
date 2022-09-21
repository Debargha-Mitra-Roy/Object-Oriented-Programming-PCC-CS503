/* Call by Value */
class callValue {

    void swap(int a, int b) {

        int temp = a;
        a = b;
        b = temp;
    }
}

class callByValue {

    public static void main(String args[]) {

        callValue obj = new callValue();

        int a = 10;
        int b = 20;

        System.out.println("Before Swapping : a = " + a + " b = " + b);
        obj.swap(a, b);
        System.out.println("After Swapping : a = " + a + " b = " + b);
    }
}

/* Call by Reference */
class callReference {

    int a, b;

    void swap(callReference obj) {

        int temp = obj.a;
        obj.a = obj.b;
        obj.b = temp;
    }
}

class callByReference {

    public static void main(String args[]) {

        callReference obj = new callReference();

        obj.a = 10;
        obj.b = 20;

        System.out.println("Before Swapping : a = " + obj.a + " b = " + obj.b);
        obj.swap(obj);
        System.out.println("After Swapping : a = " + obj.a + " b = " + obj.b);
    }
}