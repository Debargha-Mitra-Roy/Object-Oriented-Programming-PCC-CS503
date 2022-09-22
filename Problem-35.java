/* Inheritence :-
    * 
    * A object can acquire all properties of another class.
    * 
    * Types :-
        * Single Inheritence
        * Maulti-Level Inheritence
        * Multiple Inheritence
        * Multipath Inheritence
        * Hierarchial Inheritence
        * Hybrid Inheritence
    *
 */

class Base {

    int x, y;

    void set1(int a, int b) {

        x = a;
        y = b;
    }

    void display1() {

        System.out.println("x : " + x);
        System.out.println("y : " + y);
    }
}

class Derived extends Base {

    int z;

    void set2(int a, int b, int c) {

        set1(a, b);
        z = a;
    }

    void display2() {

        display1();
        System.out.println("z : " + z);
    }
}

class singleInheritence {

    public static void main(String args[]) {

        Base b = new Base();
        b.set1(10, 20);
        b.display1();

        // b1.set2(100, 200, 300); // Error : set2() is not defined in Base class
        // b1.display2(); // Error : display2() is not defined in Base class

        Derived d1 = new Derived();
        d1.set2(100, 200, 300);
        d1.display2();

        d1.set1(1000, 2000);
        d1.display1();
        d1.display2();
    }
}