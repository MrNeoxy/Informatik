/*
Grundlagen der Informatik I, WS 2015/16
Uebungszettel 1
Aufgabe 1
Autor/en:Maurice Happy
Matrikelnummer:4380986
Datum:07.11.16
Allgemeine Beschreibung der Loesung und eventuelle Referenzen
(mind. 2-3 Saetze):Wir ändern bei den Vorgegebnen Wartezeiten die Zeit, sodass sie den Wartezeiten der Aufgabe entsprechen (eine kurze Pause [500 ms] eine 3-mal
solange lange Pause [1500 ms]
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a half second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a half second
  digitalWrite(LED_BUILTIN, HIGH);  // turn on LED again
  delay(1500);                      //Wait one and a half seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn of LED 
  delay(500);                      //Wait for a half second
}
