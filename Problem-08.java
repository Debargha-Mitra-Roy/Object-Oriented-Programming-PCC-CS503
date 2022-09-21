class staticDemo3 {

    static {

        System.out.println("Inside static block");

        String list[] = { "One", "Two", "Three" };
        main(list);
    }

    public static void main(String args[]) {
        
        System.out.println("Inside main method");
    }
}