class Sum {

    int sum(int a, int b) {
        return (a + b);
    }

    // void sum(int a, int b) {
    //     System.out.println("Sum = " + (a + b));
    // }
}

class overloadDemo {

    public static void main(String args[]) {

        Sum obj = new Sum();

        int c = obj.sum(10, 20);
        System.out.println("Sum = " + c);
    }
}