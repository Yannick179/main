fn main() {
    // Program entry point
     // Mutable variable binding
    for mut n in 1..=2000 {
        print!("{n}"); // Macro for printing, like printf
        while n != 1 {
            // No parenthesis around expression
            if n % 2 == 0 { // No modulo 2
                n /= 2; // divide by 2
                } else {
                    n = 3 * n + 1;
            }
        print!(" -> {n}");
        }
        println!();
    }
}