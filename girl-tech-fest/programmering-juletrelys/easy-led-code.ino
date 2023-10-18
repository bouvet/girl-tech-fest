// Gi LED lysene en ID
// syntax: integer variabelnavn = verdi;

int led1 = 1; //white LED
int led2 = 2; //yellow LED
int led3 = 3; //blue LED
int led4 = 4; //red LED
int led5 = 5; //green LED


// Første funksjonen som skal utføres er void setup(), og den utføres bare en gang.

void setup() {
// pinMode() funksjonen brukes for å konfigurere en spesifik pin(port) i Arduinoen som Output eller Input 
// syntax: pinMode(pin,modus);

pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}


// Etter setup funksjonen, kommer void loop() funksjonen
// Denne funksjonen er en kontinuerlig loop som looper koden til du stopper programmet eller definerer at loopen skal stoppes

void loop() {

// digitalWrite() funksjonen brukes for å "aktivere" LED lysene. Parametren "pin" er IDen til LEDen du ønsker å aktivere, "value" settes enten til HIGH eller LOW. 
// HIGH aktiverer LED-en, LOW deaktiverer LED-en som er valgt.
// syntax: digitalWrite(pin, value)

digitalWrite(led1, HIGH);

// delay() funksjonen pauser programmet for tiden i millisekundene som er spesifisert.
// syntax: delay(millisekunder)

delay(1000);

digitalWrite(led1, LOW);
delay(1000);

digitalWrite(led2, HIGH);
delay(1000);

digitalWrite(led2, LOW);
delay(500);

digitalWrite(led3, HIGH);
delay(1000);

digitalWrite(led3, LOW);
delay(1000);

digitalWrite(led4, HIGH);
delay(1000);

digitalWrite(led4, LOW);
delay(1000);

digitalWrite(led5, HIGH);
delay(1000);

digitalWrite(led5, LOW);
delay(1000);

}


//Sjekk at riktig port i PCen er valgt, og at riktig Arduino (MKR1000) er valgt
//For å laste koden opp på Arduinoen, trykk på haken (Verify) og sjekk at koden compiler.
//Deretter trykk på pilen (Upload)

