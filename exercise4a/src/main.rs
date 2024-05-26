use serde_json::Error;
use std::fs::File;
use std::io::BufReader;
use std::io::prelude::*;
use serde::Deserialize;


#[derive(Debug, Deserialize)]
struct Library {
    items: Vec<Item>,
}

#[derive(Debug, Deserialize)]
enum Item{
    Book(Book),
    Movie(Movie),
    Newspaper(Newspaper),
}

#[derive(Debug, Deserialize)]
struct Movie {
    title: String,
    year: i32,
}

#[derive(Debug, Deserialize)]
struct Newspaper {
    title: String,
    date: String,
}

#[derive(Debug, Deserialize)]
struct Author {
    name: String,
    birthyear: i32,
}

#[derive(Debug, Deserialize)]
struct Book {
    title: String,
    publication_year: i32,
    author: Author,
}




fn read_library_file() -> Result<Library, Error> {
    
    let file = File::open("../library.json");
    let reader = BufReader::new(file);
    let library: Library = serde_json::from_reader(reader)?;
    return Ok(library);
    

}

fn main() {
    // Implement function body
}
