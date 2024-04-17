public class Human {
    private String forename;
    private String name;
    
    public Human(String forename, String name) {
        this.forename = forename;
        this.name = name;
    }
    
    public String getName() {
        return name;
    }
    
    public String getForname() {
        return forename;
    }
    
    public String getFullName() {
        return forename +" " + name;
    }
    
    public String toString() {
        return getFullName();
    }
}