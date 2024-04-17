import java.util.Arrays;

public class Taxi {
    private Human driver;
    private Human[] passengers;
    
    public Taxi(Human driver) {
        this.driver = driver;
        this.passengers = new Human[4];
        
    }
    
    public String getDriverName() {
        return driver.getFullName();
    }
    
    private int getPassengerAmount() {
        int passenger_amount = 0;
        for (int i = 0; i < passengers.length; i++) {
            if (passengers[i] != null) {
                passenger_amount++;
            }
        }
        return passenger_amount;
    }
    
    public void add(Human passenger) {
        String message;
        int passenger_amount = getPassengerAmount();
        
        if (passenger_amount != 4) {
            passengers[passenger_amount] = passenger;
            message = String.format(passenger.getFullName() + " gets in.");
        }
        else {
            message = String.format("we are sorry, " + passenger.getFullName() +". The taxi is full.");
        }
        System.out.println(message);
    }
    
    public String getStatus() {
        String message = String.format("This is the Taxi of " + driver.getFullName() + ". ");
        int passenger_amount = getPassengerAmount();
        if (passenger_amount == 0) {
            message = String.format(message + " He takes nobody along");
        }
        else {
            message = String.format(message + "He takes " + passengers[0].getFullName());
            if (passenger_amount >= 2) {
                for(int i = 1; i < passenger_amount-1; i++) {
                message = String.format(message + ", " + passengers[i].getFullName());
                }
                message = String.format(message + " and " + passengers[passenger_amount-1].getFullName());
            }
            message = String.format(message + " along.");
        }
        return message;
    }
    
    public Human[] allGetOut() {
        int passenger_amount = getPassengerAmount();
        Human[] peopleInCar = Arrays.copyOf(passengers, passenger_amount);
        for (int i = 0; i < passenger_amount; i++) {
            passengers[i] = null;
        }
        return peopleInCar;
    }
    
    public String toString() {
        return getStatus();
    }
}


