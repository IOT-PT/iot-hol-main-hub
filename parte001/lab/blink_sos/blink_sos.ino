/*
  Blink SOS
  apaga e acende o led fazendo S.O.S
 */
 

/*-----( Declarar constantes e numeros dos pinos )-----*/
int led = 13;

 /****** SETUP: Corre uma vez so ao ser iniciado o arduino ******/
void setup() {                
  // Inicializar o pino.
  pinMode(led, OUTPUT);     
}


void loop() /****** SETUP: Corre uma vez so ao ser iniciado o arduino ******/
{
  digitalWrite(led, HIGH);   // liga o LED  (HIGH é o nivel de voltagem)
  delay(500);     // Espera meio segundo
  digitalWrite(led, LOW);    // desliga o  LED passando a voltagem para LOW
  delay(500);
  digitalWrite(led, HIGH);   
  delay(500);     
  digitalWrite(led, LOW);   
  delay(500);
  digitalWrite(led, HIGH);  
  delay(500);     
  digitalWrite(led, LOW);    
  delay(500);
  
  
  digitalWrite(led, HIGH);   
  delay(1500); 
  
  digitalWrite(led, LOW);    
  delay(500);               

  digitalWrite(led, HIGH);   
  delay(500);     
  digitalWrite(led, LOW);    
  delay(500);
  digitalWrite(led, HIGH);   
  delay(500);     
  digitalWrite(led, LOW);    
  delay(500);
  digitalWrite(led, HIGH);   
  delay(500);     
  digitalWrite(led, LOW);    
  delay(1000);
  
  
  // entao mas nao se faziam aqui umas funcoes ou uns ciclos for???


}
