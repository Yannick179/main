package koenigreich;

public class Adel extends Einwohner {
    public int steuer() {
        // Vorschrift (4)
        int betrag = super.steuer();
        if (betrag < 20) {
            return 20;
        }
        return betrag;
    }
}