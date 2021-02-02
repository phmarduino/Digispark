// Nom sketch : pm_digispark_blink_30_01_2021
// Description : Blink LED sur la carte Digispak de Digistump
// Date : le 30/01/2021 

void setup() {
// Initialisation des pins
pinMode(1, OUTPUT); //LED on Model A or Pro
}
void loop() {
//Allume la LED
digitalWrite(1, HIGH);
delay(1000); //Attend une seconde
//Eteint la LED
digitalWrite(1, LOW);
delay(1000); //Attend une seconde
}
