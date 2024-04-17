public class hello_world {
    int number = 10;
    String Name = "Yannick";
    public static void main(String[] args) {
        System.out.println("Hello world");
        System.out.println(args[0]);

        Calculator calculator = new Calculator();
        int hypothenuse = calculator.calc_hypothenuse(5, 5);
        System.out.println(hypothenuse);
    }
    
}

public class Calculator {
    public static int calc_hypothenuse(int gegenkath, int ankat) {
    int hypothenuse = Math.sqrt(gegenkath*gegenkath + ankat*ankat);
    return hypothenuse;
    }
}