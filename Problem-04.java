/* Static Block */

class A {
    
    static int a, b;
}

class B {

    public static void main(String args[]) {

        A.a = 10;
        A.b = 20;

        System.out.println("A.a = " + A.a);
        System.out.println("A.b = " + A.b);
    }
}