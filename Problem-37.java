class A {

    int i;

    void set1(int x) {

        i = x;
    }

    void display1() {

        System.out.println("i : " + i);
    }
}

class B extends A {

    int j;

    void set2(int x, int y) {

        set1(x);
        j = y;
    }

    void display2() {

        display1();
        System.out.println("j : " + j);
    }
}

class AB {

    public static void main(String args[]) {

        A a = new A();
        a.set1(10);
        a.display1();

        A ref = new B();
        ref.set1(20);
        // ref.set2(100, 200); // Error : set2() is not defined in A class
        ref.display1();
        // ref.display2(); // Error : display2() is not defined in A class

        B b = new B();
        b.set2(100, 200);
        b.display2();
    }
}