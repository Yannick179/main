class Calculator {
    public static double calc_hypothenuse(double gegenkath, double ankat) {
    double hypothenuse = Math.sqrt(gegenkath*gegenkath + ankat*ankat);
    return hypothenuse;
    }
}

public class Hello_world {
    int number = 10;
    String Name = "Yannick";
    public static void main(String[] args) {
        System.out.println("Hello world");
        Calculator calculator = new Calculator();
        double hypothenuse = calculator.calc_hypothenuse(5.0, 5.0);
        System.out.println(hypothenuse);
    }
    
}

