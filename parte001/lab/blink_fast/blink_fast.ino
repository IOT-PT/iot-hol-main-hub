/*
  Blink Fast
  Cintila um led tão depressa que não é visivel ao olho humano
  
  Com uma camera de telemovel é visivel
 */
 

/*-----( Declarar constantes e numeros dos pinos )-----*/
int led = 13;
int wait = 11;

 /****** SETUP: Corre uma vez so ao ser iniciado o arduino ******/
void setup() {                
  // Inicializar o pino.
  pinMode(led, OUTPUT);     
}


void loop() /****** SETUP: Corre uma vez so ao ser iniciado o arduino ******/
{
  digitalWrite(led, HIGH);   // liga o LED  (HIGH é o nivel de voltagem)
  delay(wait);     
  digitalWrite(led, LOW);    // desliga o  LED passando a voltagem para LOW
  delay(wait);
  
}
