public class Functions {
    // TODO: insert your implementation here
    public static void main(String[] args) {
        System.out.println("The factorial of 5 is:");
        System.out.println(factorial(5));
    }
    public static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        else {
            int fac = 1;
            while (n > 1) {
                fac *= n;
                n--;
            }
            return fac;
        }
    }
}