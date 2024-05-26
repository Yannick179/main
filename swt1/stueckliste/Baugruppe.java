package stueckliste;

import java.util.HashSet;
import java.util.Set;

public class Baugruppe extends Bauteil {
    private Set<Bauteil> bauteile;

    public Baugruppe(String id, Bauteil teil) {
        bauteile = new HashSet<Bauteil>();
        addBauteil(teil);
        this.id = id;
    }
    public double preis() {
        double preis = 0;
        for (Bauteil bauteil : bauteile) {
            preis += bauteil.preis();
        }
        return preis;
    }
    public boolean addBauteil(Bauteil teil) {
        return bauteile.add(teil);
    }
    public boolean removeBauteil(Bauteil teil) {
        if (bauteile.contains(teil)) {
            return bauteile.remove(teil);
        }
        return false;


    }
}
