import junit.framework.TestCase;
import junit.swingui.TestRunner;

public class TestCalculator extends TestCase {

    private Calculator calculator;
    public static void main(String[] args) {
        TestRunner.run(TestCalculator.class);
    }
    protected void setUp() {
        calculator = new Calculator(2, 4);
    }
    public void testRechnerA1() {
        assertEquals(6, calculator.getErgebnis());
    }
    
}
