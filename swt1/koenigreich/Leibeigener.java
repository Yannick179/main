package koenigreich;

public class Leibeigener extends Bauer {
    public int zuVersteuerndesEinkommen() {
        // Vorschrift (5)
        int betrag = einkommen - 12;
        if (betrag < 0) {
            return 0;
        }
        return betrag;
    }
}
