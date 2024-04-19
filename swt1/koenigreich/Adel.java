public class Adel extends Einwohner {
    @Override
    public int steuer() {
    int steuerabgabe = zuVersteuerndesEinkommen()/10;
        if (steuerabgabe < 20) {
            steuerabgabe = 20;
        }
        return steuerabgabe;
}
