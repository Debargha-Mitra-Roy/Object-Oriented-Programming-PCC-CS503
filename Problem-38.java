class A {

    void m() {

        System.out.println(" In A");
    }

    class B extends A {

        void m() {

            System.out.println(" In B");
        }
    }
}

class AB {

    public static void main(String args[]) {

        A ref;
        ref = new A();
        ref.m();
    }
}