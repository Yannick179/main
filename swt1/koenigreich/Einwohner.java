package koenigreich;

public class Einwohner {
    protected int einkommen;

    public int zuVersteuerndesEinkommen() {
        // Vorschrift (1)
        return einkommen;
    }

    public int steuer() {
        // Vorschrift (2)
        int betrag = (int) (0.1 * zuVersteuerndesEinkommen());
        if (betrag < 1) {
            return 1;
        }
        return betrag;
    }

    public void setEinkommen(int einkommen) {
        // Neue Anforderung seit U02: negative Einkommen verbieten
        if (einkommen < 0) {
            throw new IllegalArgumentException("Einkommen darf nicht negativ sein");
        }
        this.einkommen = einkommen;
    }
}