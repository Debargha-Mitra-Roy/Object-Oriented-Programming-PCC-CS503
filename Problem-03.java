import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

class Inputdemo {
    
    public static void main(String args[]) throws IOException {

        InputStreamReader is = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(is);
        BufferedReader or = new BufferedReader(new InputStreamReader(System.in));

        int n;
        float f;
        double d;
        char c;
        String s;

        System.out.println("Enter an Integer : ");
        n = Integer.parseInt(br.readLine());

        System.out.println("Enter a Float : ");
        f = Float.parseFloat(or.readLine());

        System.out.println("Enter a Double : ");
        d = Double.parseDouble(br.readLine());

        System.out.println("Enter a Character : ");
        c = (char) br.read();

        System.out.println("Enter a String : ");
        s = or.readLine();

        System.out.println("Integer : " + n);
        System.out.println("Float : " + f);
        System.out.println("Double : " + d);
        System.out.println("Character : " + c);
        System.out.println("String : " + s);
    }
}