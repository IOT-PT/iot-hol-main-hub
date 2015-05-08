
/*-----( Declarar constantes e numeros dos pinos )-----*/
#define led 13  // LED do arduino mas tb o que tem resistencia activa por defeito

/*-----( Declarar  variaveis )-----*/
int ByteReceived;

void setup()   /****** SETUP: Corre uma vez so ao ser iniciado o arduino ******/
{
  Serial.begin(9600);  
  Serial.println("--- Comecar o serial monitor : enviar e receber ---");
    Serial.println(" Escreve na caixa acima, . ");
  Serial.println("(Decimal)(Hex)(Character)");  
  Serial.println(); 
}
//--(end setup )---

void loop()   /****** LOOP: Esta sempre a correr ******/
{
  if (Serial.available() > 0)
  {
    ByteReceived = Serial.read();
    Serial.print(ByteReceived);   
    Serial.print("        ");      
    Serial.print(ByteReceived, HEX);
    Serial.print("       ");     
    Serial.print(char(ByteReceived));
    
    if(ByteReceived == '1') // Estamos a receber um caracter.
    {
      digitalWrite(led,HIGH);
      Serial.print(" LED ON ");
    }
    
    if(ByteReceived == '0')
    {
      digitalWrite(led,LOW);
      Serial.print(" LED OFF");
    }
    
    Serial.println();    // Fim da linha

  // FIM do if do se serail esta disponivel
  }
}

//--(fim do loop principal )---

/*-----( Deaclarar as funções do utilizador... )-----*/

/*********( Fim do sketch... the end... kaput .... no more... finito... adios...  you've got it )***********/
