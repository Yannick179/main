void main() {

printCalendar(1,7);
}

var monthMap = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];

void printCalendar(month, startDay){
  //print Tage
  print("|MO|DI|MI|DO|FR|SA|SO|");

  //laenge des Monats in Tagen
  int length = monthMap[month-1];
  //Ausgabe String
  String currOutput = '';

  //Schleife durch leere Tage am Anfang + Kalendertage + leere Tage am Ende (naechstes Vielfaches von 7)
  for(int i = 0; i < length + (startDay-1) + (7 - (length+(startDay-1)) % 7)%7; i++){
    //Ausgabe einer Woche und zuruecksetzen von currOutput
    if(i % 7 == 0 && i != 0){
      print("|$currOutput");
      currOutput = '';
    }
    //checken ob wir Tage ausgeben -> Tag zuweisen oder leere Tage -> '  ' zuweisen
    var character = i-(startDay-1) >= 0 && i-(startDay-1) < length ? (i - startDay + 2).toString() : '  ';
    //ein Leerzeichen mehr falls Tag < 10 und Tag kein leerer Tag
    if(i-startDay+2 < 10 && i-startDay+2 > 0){
    character = ' $character';
    }
    // anhaengen von unserem Tag und | an currOutput
    currOutput += "$character|";
  }
  //Ausgabe der letzten Zeile die in der Schleife nicht Ausgegeben wird
  print("|$currOutput");
}