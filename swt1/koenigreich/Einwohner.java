public class Einwohner {
    private int einkommen;

    private int zuVersteuerndesEinkommen() { //public oder private?
        return einkommen;
    }

    public int steuer() {
        int steuerabgabe = zuVersteuerndesEinkommen()/10;
        if (steuerabgabe < 1) {
            steuerabgabe = 1;
        }
        return steuerabgabe;
    }

    public void setEinkommen(int einkommen) {
        this.einkommen = einkommen;
    }
}