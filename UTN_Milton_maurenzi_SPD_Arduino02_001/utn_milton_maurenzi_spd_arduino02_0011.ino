// C++ code
//Codigo ejemplo
int buttonState =0;

void setup()
{
  //configurar PIN como entrada
  pinMode(2, INPUT);
  //Configurar Pines como Salida
  pinMode(5, OUTPUT);
  //pinMode(6, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  //Lee Estado del puerto de entrada 2(Interruptor)
  buttonState = digitalRead(2);
  //Accion a tomar segun el estado del puerto
  if (buttonState == HIGH)
  {
  //Apaga LED en Puerto 5
  	digitalWrite(5,LOW);
    //digitalWrite(6,LOW);
  //Enciende Led En Puerto 13
    digitalWrite(13,HIGH);
    //digitalWrite(7,HIGH);
  //Espera (miliseg)
    delay(150);
  //Enciende Led en Puerto 5
    digitalWrite(5, HIGH);
    //digitalWrite(6, HIGH);
  //Apaga Led Puerto 13
    digitalWrite(13,LOW);
  //Espera
    delay(200);
  }else
  	{
  	//Apaga leds en Puertos 5 y 13
    digitalWrite(5,LOW);
    digitalWrite(13,LOW);
  	}
  //digitalWrite(LED_BUILTIN, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}