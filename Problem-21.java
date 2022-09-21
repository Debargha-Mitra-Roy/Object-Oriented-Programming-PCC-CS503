/* Constructor Overloading :-
    *
    *  Constructor Overloading is a technique of having more than one constructor with different parameter lists.
    *  A class may contain more than one constructor as long as their parameter lists are different.
    *  These set of constructors are known as constructor overloading.
    *
 */

class Circle {

    int r;
    double x, y;

    Circle() {

        r = 0;
        x = 0;
        y = 0;
    }

    Circle(int r1, double x1, double y1) {

        r = r1;
        x = x1;
        y = y1;
    }

    Circle(int i) {

        r = i;
        x = i;
        y = i;
    }

    Circle(Circle obj) {

        r = obj.r;
        x = obj.x;
        y = obj.y;
    }

    void display() {

        System.out.println("Radius = " + r);
        System.out.println("X-coordinate = " + x);
        System.out.println("Y-coordinate = " + y);
    }
}

class CircleDemo {

    public static void main(String args[]) {

        Circle ob1 = new Circle();
        ob1.display();

        Circle ob2 = new Circle(10);
        ob2.display();

        Circle ob3 = new Circle(10, 5.0, 2.0);
        ob3.display();

        Circle ob4 = new Circle(ob3);
        ob4.display();

        // Circle ob5 = new Circle(10.0); // Error: Incompatible types, possible lossy conversion from double to int
    }
}