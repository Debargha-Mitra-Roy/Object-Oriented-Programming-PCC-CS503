/* A static block may access a static method of its own class without any object reference. */

class staticDemo2 {
    
    static {

        System.out.println("Inside static block");
        function();
    }

    public static void main(String args[]) {

        System.out.println("Inside main method");
    }
    
    static void function() {

        System.out.println("Inside static function");
    }
}