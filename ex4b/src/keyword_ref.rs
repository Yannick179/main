fn main() {
    let lecture = Some("INF-B-240".to_string());

    // Your implementation follows here
    // ...
    match lecture {
        Some(ref s) => println!("{}", s),
        None => println!("value is None"),
    }
    // Print the final sentence
    println!("I'm attending the module {}",lecture.unwrap_or("programming".into()));
}

