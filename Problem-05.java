/* Static Method :- Static Method can access all static members of its own class without object reference. */

class Add {

    static int a, b;

    public static void main(String args[]) {

        a = 10;
        b = 20;

        int c = a + b;

        System.out.println("Sum = " + c);
    }
}

class Add1 {

    int a, b;

    public static void main(String args[]) {

        Add a1 = new Add();
        a1.a = 10;
        a1.b = 20;

        int c = a1.a + a1.b;
        System.out.println("Sum = " + c);
    }
}

class B {
    static int a, b;

    static void add() {

        int c = a + b;
        System.out.println("Sum = " + c);
    }

    class A {

        public void main(String args[]) {

            B.a = 10;
            B.b = 20;

            B.add();
        }
    }
}