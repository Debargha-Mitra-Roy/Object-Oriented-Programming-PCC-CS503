/* Method / Function Overloading :-
    * Method / Function Overloading is a feature that allows a class to have more than one method / function having the same name, if their argument lists are different.
    * Method / Function Overloading is also known as Compile Time Polymorphism.
    * A class contains more than one function that shared the same name as long as either number of parameters or type of parameters are different.
    *
 */

class sumDemo {

    int sum(int a, int b) {

        return (a + b);
    }

    double sum(double a, double b) {

        return (a + b);
    }

    String sum(String a, String b) {

        return (a + b );
    }
}

class overloadingDemo {

    public static void main(String args[]) {

        sumDemo ob = new sumDemo();

        System.out.println("Sum of 10 and 20 = " + ob.sum(10, 20));
        System.out.println("Sum of 10.5 and 20.5 = " + ob.sum(10.5, 20.5));
        System.out.println("Sum of \"10\" and \"20\" = " + ob.sum("10", "20"));
        System.out.println("Sum of \"10\" and \"20\" = " + ob.sum("ab", "xy"));
        System.out.println("Sum of 10 and 20 = " + ob.sum(10, 20.5));
        // System.out.println("Sum of 10 and 20 = " + ob.sum("xy", 10)); // Error : Incompatible types
    }
}