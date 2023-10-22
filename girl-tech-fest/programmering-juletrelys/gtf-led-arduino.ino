// LED program - GirlTechFest

// --> En int er en av de vanligste variabeltypene. Int er en forkortelse for integer (engelsk for heltall) og brukes til å lagre heltallsverdier. 
// Her i vårt tilfelle sier vi at variabelen `led1` er av typen `int`, og har heltallsverdien 1!
// Vi har plassert (deklarert) disse variablene først i programmet fordi de skal være tilgjengeligte for hele programmet, og da kalles de "globale variabler".

// syntax: int variabel = verdi;
int led1 = 1; // hvit LED
int led2 = 2; // gul LED
int led3 = 3; // blå LED
int led4 = 4; // rød LED
int led5 = 5; // grønn LED


// I setup-funksjonen under starter vi en seriell kommunikasjon med Arduinoen.
// Dere husker så klart at vi ga de globale integer variablene heltallsverdier i begynnelsen av programmet?
// Ja? Fantastisk, for allerede nå får vi bruk for de!
// Funksjonen under heter `pinMode`, og brukes for å sette en spesifik pin(port) på Arduinoen som en output (port ut) eller input (port inn).
void setup() {

pinMode(1,OUTPUT);  // syntax: pinMode(pin,modus);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

// loop-funksjonen er kontinuerlig og kjører (looper) koden til du stopper programmet, overskriver det eller definerer et sted i koden at loopen skal stoppes.
void loop() {

// digitalWrite-funksjonen brukes for å "aktivere" LED lysene.
// `pin` er en parameter og her er det IDen til LEDen du ønsker å aktivere, "value" settes enten til HIGH eller LOW.
// HIGH skrur på LEDen, LOW skrur av LEDen.
// Med delay-funksjonen sier vi hvor lenge, i millisekunder, LEDen skal skrus av/på.
// --> 1000 millisekund(ms) = 1 sekund(s)

// led1 skrus på i 1000 ms
digitalWrite(led1, HIGH); // syntax: digitalWrite(pin, value);
delay(1000);  // syntax: delay(millisekunder);

// led1 skrus av i 1000 ms
digitalWrite(led1, LOW);
delay(1000);

// led2 skrus på i 1000 ms
digitalWrite(led2, HIGH);
delay(1000);

// led2 skrus av i 1000 ms
digitalWrite(led2, LOW);
delay(1000);

// led3 skrus på i 1000 ms
digitalWrite(led3, HIGH);
delay(1000);

// led3 skrus av i 1000 ms
digitalWrite(led3, LOW);
delay(1000);

// led4 skrus på i 1000 ms
digitalWrite(led4, HIGH);
delay(1000);

// led4 skrus av i 1000 ms
digitalWrite(led4, LOW);
delay(1000);

// led5 skrus på i 1000 ms
digitalWrite(led5, HIGH);
delay(1000);

// led5 skrus av i 1000 ms
digitalWrite(led5, LOW);
delay(1000);
}


//Sjekk at riktig port (COM) i PCen er valgt, og at riktig Arduino (MKR1000) er valgt
//For å laste koden opp på Arduinoen, trykk på haken (Verify) og sjekk at koden kompilerer (compile).
//Deretter trykk på pilen som peker til høyre og last opp (Upload) programmet til Arduinoen.
