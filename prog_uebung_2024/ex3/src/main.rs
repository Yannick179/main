use std::io;

enum type {
    book, 
    movie, 
    newspaper
}
#[derive(Debug)]
struct Author {
    name: String,
    birthyear: i32,
}

#[derive(Debug)]
struct Book<'a> {
    title: String,
    publication_year: i32,
    author: &'a Author,

#[derive(Debug)]
struct Book<'a> {
    title: String,
    publication_year: i32,
    author: &'a Author,
}
impl Author {
    fn create_author(name: String, birthyear: i32) -> Author {
        Author {
            name,
            birthyear,
        }
    }
    fn set_name(&mut self, name: String) {
        self.name = name;
    }
    fn set_birthyear(&mut self, birthyear: i32) {
        self.birthyear = birthyear;
    }
}

impl<'a> Book<'a> {
    fn create_book(title: String, publication_year: i32, author: &'a Author) -> Book {
        Book {
            title,
            publication_year,
            author,
        }
    }
    fn set_title(&mut self, title: String) {
        self.title = title;
    }
    fn set_publication_year(&mut self, publication_year: i32) {
        self.publication_year =publication_year;
    }
    fn set_author(&mut self, author: &'a Author) {
        self.author = author;
    }
}

fn main() {
    
    let author = Author::create_author(String::from("Dan Brown"), 1964);
    let mut book = Book::create_book(String::from("The Da Vinci Code"), 2003, &author);
    book.set_title(String::from("10 Gruende warum ich Neele Liebe"));

    let book2 =  Book::create_book(String::from("apfel und birnen"), 2004, &author);
    //println!("{:#?}, \n\n{:#?}", book, book2);


    let mut books = Vec::new();

    let mut title = String::new();
    let mut publication_year = String::new();
    loop {
        title = String::new();
        publication_year = String::new();
        println!("printing title and pub: {}, {} \n \n", title, publication_year);
        println!("enter X to exit");
        println!("Enter Title:");
        io::stdin()
        .read_line(&mut title)
        .expect("Failed to read line");
        title = title.trim().to_string();
        if (title.eq("X")) {
            break;
        }

    println!("Enter publication year:");
        io::stdin()
        .read_line(&mut publication_year)
        .expect("Failed to read line");
        
        let year = publication_year.trim().parse().unwrap();
        let new_book = Book::create_book(title.clone(), year, &author);
        books.push(new_book);

        println!("printing title and pub: {}, {} \n \n", title, publication_year);
    }
    println!("{:#?}", books);
}

