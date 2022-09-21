/* When a class contains more than one static block then one static bloc is executed according to their defination. */

class staticDemo1 {
    
    static {

        System.out.println("Inside first static block");
    }

    public static void main(String args[]) {

        System.out.println("Inside main method");
    }

    static {

        System.out.println("Inside second static method");
    }
}