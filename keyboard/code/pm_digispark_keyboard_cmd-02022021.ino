// Nom sketch : pm_digispark_keyboard_cmd-02022021.ino
// Description : Simulateur de clavier USB avec une mini carte Digispark de chez Digistump
//  - Le script lance une fentre DOS avec la commande CMD puis la commande DATE pour afficher
//  - la date du jour ... 
//  - ATTENTION : les saisies clavier sont en QWERTY par défaut !!
//    * M devient ;
//    * A devient Q
//    * etc.
// Date : le 02/02/2021 

#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  // Lance l'execution de programme Windows (avec la touche Windows + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  // Ouvre le terminal Windows avec la commande CMD, ici traduite en QWERTY = C;D
  DigiKeyboard.println("C;D");
  DigiKeyboard.delay(2000);
  // Envoi de la commande DATE pour avoir la date du jour, ici traduite en QWERTY = DQTE
  DigiKeyboard.println("DQTE");
  DigiKeyboard.delay(2000);
  }

/* Boucle infinie */
void loop() {
  }
