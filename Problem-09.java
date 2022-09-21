/* if the static block  is define in different class then this block is executed when class file is loaded. */

class B {
    void f() {
        System.out.println("Inside class B");
    }

    static {
        System.out.println("Inside class B static block");
    }
}

class staticDemo4 {
    public static void main(String args[]) {
        
        System.out.println("Inside main method");

        B obj1 = new B();
        obj1.f();

        B obj2 = new B();
        obj2.f(); // No Loading
    }
}