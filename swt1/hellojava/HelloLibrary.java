/*
 * Lehrstuhl Softwaretechnologie, TU Dresden, Datei HelloLibrary.java
 *
 * HelloLibrary-Klasse implementiert eine Anwendung,
 * die die Aufnahme von Büchern simuliert
 */

 public class HelloLibrary {
    // Simulation durch main()
    public static void main(String[] args) {
        // Erzeugung eines Library-Objektes
        Library lib = new Library();


        // Erzeugung von zwei Book-Objekten
        Book buch1 = new Book("Harry Potter");
        Book buch2 = new Book("Harry Potter2");



        // Nachricht an die Library, dass die Books aufgenommen werden sollen
        lib.register(buch1);
        lib.register(buch2);
        lib.search("Harry Potter");
        
    }
}
