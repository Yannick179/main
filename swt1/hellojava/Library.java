public class Library {
    
    private Book[] myBooks;
    private int number;

    public Library() {
        myBooks = new Book[10];
        number = 0;
        System.out.println("Hello, I am a small library for at most 10 books.");
    }

    public void register(Book book) {
        myBooks[number] = book;
        number += 1;
        System.out.println("A new book is registered: " + book);  // impliziter book.toString() Aufruf
    }

    private Book search(String title) {
        for (int i = 0; i < number; i++) {
            if (myBooks[i].getTitle().equals(title)) {

                return myBooks[i];
            }
        }
        System.out.println("The Book" + title + "isnt registered");
        return null;
    }

    public void loan(String title) {
        Book book = search(title);
        if (book != null) {
            if (book.getIsLent()) {
                System.out.println("Book is already lent.");
                return null
            }
            
        }
        return null;

        
    }
}
