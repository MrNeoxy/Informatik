/*
  Grundlagen der Informatik I, WS 2015/16
  Uebungszettel 1
  Aufgabe 1
  Autor/en:Maurice Happy
  Matrikelnummer:4380986
  Datum:07.11.16
  Allgemeine Beschreibung der Loesung und eventuelle Referenzen
  (mind. 2-3 Saetze)
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.print("STARTING");
  delay(1000);
  Serial.print("TEST");
}
char name[] = "MAURICE" ;
int alphabet[][26] = {
  {0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1},
  {1, 0, 0, 0, 2, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 2, 0, 0, 1, 0, 0, 1},
  {2, 0, 1, 0, 2, 1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 1, 0, 0, 0, 2, 1, 0, 1, 0, 1, 0},
  {2, 0, 0, 2, 2, 0, 2, 0, 2, 1, 2, 0, 2, 2, 2, 0, 1, 2, 2, 2, 2, 1, 2, 1, 1, 0}
};
void my_morse_dot() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
void my_morse_stroke() {
  digitalWrite(13, HIGH);
  delay(1500);
  digitalWrite(13, LOW);
  delay(500);
}
int z = 0;
void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 7 ; i++) {
    for (int y = 0 ; y < 4 ; y++) {

      z = name[i] - 65;
      if (alphabet [y][z] == 0) {
        my_morse_dot();
        Serial.println(".");
        

      }
      else if (alphabet [y][z] == 1) {
        my_morse_stroke();
        Serial.println("-");
      }
      else {
        //NIX TUN
      }
      
    }
    delay(1000);

  }
  delay(2000);

}
