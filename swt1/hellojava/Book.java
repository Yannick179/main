public class Book {

    private String title;
    private boolean isLent;

    public Book(String title) {
        this.title = title;
        this.isLent = false;
    }

    @Override
    public String toString() {
        return title;
    }

    public String getTitle() {
        return title;
    }

    public setIsLent(boolean val) {
        this.isLent = val;
    }

    public getIsLent() {
        return isLent;
    }



}
