/* Returning Object */

class Complex {

    float real, imaginary;

    void set(float r, float i) {

        real = r;
        imaginary = i;
    }

    void display() {

        System.out.println("Real = " + real);
        System.out.println("Imaginary = " + imaginary);
    }

    Complex add(Complex c) {

        Complex temp = new Complex();
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
}

class addComplex {

    public static void main(String args[]) {

        Complex c1 = new Complex();
        Complex c2 = new Complex();
        Complex c3;

        c1.set(10, 20);
        c2.set(30, 40);

        c3 = c1.add(c2);

        c3.display();
    }
}