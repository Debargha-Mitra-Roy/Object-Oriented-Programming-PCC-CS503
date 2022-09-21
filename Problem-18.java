/* Constructor and Method Overloading
    *
    *  Constructor Overloading :- Constructor Overloading is a technique of having more than one constructor with different parameter lists.
    *  Method Overloading :- Method Overloading is a technique of having more than one method with same name but different parameter lists.
    *  Constructor Overloading is not possible in java.
    *  Method Overloading is possible in java.
    *  Constructor Overloading is not possible in java because constructor name is same as class name.
    *  Method Overloading is possible in java because method name is different from class name.
    *  Constructor Overloading is not possible in java because constructor is called automatically when object is created.
    *  Method Overloading is possible in java because method is called by object reference.
    *  Constructor is a special member function with the same name as of the class.
    *  It is used to initialize the objects of its class.
    *  It is automatically invoked whenever an object is created.
    *  It can have default arguments.
    *  It cannot return values and does not have a return type.
    *  It can be overloaded.
    *  It is the only member of the class which does not have a return type.
    *  It is invoked at the time of object creation.
    *  It is used to allocate memory to the object.
    *  It is called automatically whenever an object is created.
    *  It is called constructor because it constructs the values at the time of object creation.
    *  It is a special type of method which is used to initialize the instance members of the class.
    *  It is invoked implicitly.
    *  It is invoked only once in the lifetime of an object.
    * 
 */

class Circle {

    int r;
    double x, y;

    void set(int r1, double x1, double y1) {

        r = r1;
        x = x1;
        y = y1;
    }

    Circle(int r1, double x1, double y1) {

        r = r1;
        x = x1;
        y = y1;
    }

    void display() {

        System.out.println("Radius = " + r);
        System.out.println("X-coordinate = " + x);
        System.out.println("Y-coordinate = " + y);
    }
}

class CircleDemo {

    public static void main(String args[]) {

        /* Constructor default constructor, show error value */
        // Circle c1 = new Circle();

        Circle c2 = new Circle(10, 2.5, 3.5);
        c2.display();

        c2.set(10, 5.0, 6.0);
        c2.display();
    }
}