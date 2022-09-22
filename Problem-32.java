class Box {

    int width, height, depth;

    Box(int w, int h, int d) {
        width = w;
        height = h;
        depth = d;
    }

    void display() {
        System.out.println("Width: " + width);
        System.out.println("Height: " + height);
        System.out.println("Depth: " + depth);
    }
}

class BoxDemo {

    public static void main(String[] args) {
        Box b1 = new Box(1, 2, 3);
        b1.display();

        Box b2 = new Box(10, 20, 30);
        b2.display();
    }
}