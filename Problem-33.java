class Box {

    int w, h, d;

    Box(int w, int h, int d) {

        this.w = w;
        this.h = h;
        this.d = d;
    }

    void display() {

        System.out.println("Width: " + w);
        System.out.println("Height: " + h);
        System.out.println("Depth: " + d);
    }
}

class BoxDemo {

    public static void main(String[] args) {

        Box b1 = new Box(10, 20, 30);
        b1.display();
    }
}