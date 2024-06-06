#[derive(Debug)]
struct Author {
    name: String,
    birthyear: i32
}
impl Author {
    fn new(name: String, birthyear: i32) -> Self {
        Self {name, birthyear}
    }
}
struct Book<'a> {
    title: String,
    year: i32,
    author: &'a Author,
}


fn main() {
    let author = Author::new(String::from("Donald"), 1987);
    let book = (String::from("The Da Vinci Code"), 2003, &author);
    println!("{:#?}", author);
    println!("{:#?}", book);
}

