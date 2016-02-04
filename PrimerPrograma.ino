/************************************************************************* 
**                                                                      **
**                    		Descripció programa                           **
**                                                                      **
*************************************************************************/

//******  Ineludes  ******************************************************

//******  Variables ******************************************************

//******  Setup **********************************************************
void setup(){

	// inicialitzar el pin digital com a una sortida
	// El Pin 13 té un LED connectat a la majoria dels Arduinos
	pinMode(13, OUTPUT);


}
//******  Loop  **********************************************************
void loop (){
	digitalWrite(13, HIGH);		// Encendre el LED
	delay(1000);				// Esperar un segon
	digitalWrite(13, LOW);		// Apagar el LED
	delay(1000);				// Esperar un segon
}
