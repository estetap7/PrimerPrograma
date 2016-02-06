/*************************************************************************
**                                                                      **
**                    		Descripció programa                           **
**                                                                      **
*************************************************************************/

//******  Ineludes  ******************************************************

//******  Variables ******************************************************

int ledPin = 13;

// En aquesta variable li asignem nom al pin numero 13

//******  Setup **********************************************************
void setup() {

  // inicialitzar el pin digital com a una sortida
  // El Pin 13 té un LED connectat a la majoria dels Arduinos
  pinMode(ledPin, OUTPUT);


}
//******  Loop  **********************************************************
void loop () {
  digitalWrite(ledPin, HIGH);		// Encendre el LED
  delay(1000);				// Esperar un segon
  digitalWrite(ledPin, LOW);		// Apagar el LED
  delay(1000);				// Esperar un segon
}
