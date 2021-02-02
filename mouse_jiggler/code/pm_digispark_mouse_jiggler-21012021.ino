// Nom sketch : pm_digispark_mouse_jiggler-21012021
// Description : Simulateur de souris USB avec une mini carte Digispark de chez Digistump
// - Les parametres comme Vendor ID et Device ID, Devcice name par défaut peuvent etre modifiés
// sous Windows à ses risques et perils dans le fichier usbconfig.h a l emplacement suivant : 
// C:\Users\[votre user Windows]\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkMouse
// Date : le 24/01/2021 
// Source : Basé sur l'article de suivant :
// https://ericdraken.com/usb-mouse-jiggler/

#include <DigiMouse.h>
void setup(){
  DigiMouse.begin();
  pinMode(1, OUTPUT);
}
 
void loop() {
  while(true) {
    digitalWrite(1, HIGH);  
    DigiMouse.move(2,0,0); // Déplacement de 2 pixels a droite
    DigiMouse.delay(50);
    DigiMouse.move(-2,0,0); // Déplacement de 2 pixels a gauche
    digitalWrite(1, LOW);
    DigiMouse.delay(30000); // Attente pendant 30 secondes
  }
}
