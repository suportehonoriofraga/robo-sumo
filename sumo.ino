//Pinos de Controle Motor A
#define HBRIDGE1 9
#define HBRIDGE2 10 

//Pinos de Controle Motor B
#define HBRIDGE3 11
#define HBRIDGE4 12


//Pinos Sensores Opticos

#define Sensor_INT1 8
#define Sensor_INT2 7
#define Sensor_INT3 6

int Valor_INT1 = 0;
int Valor_INT2 = 0;
int Valor_INT3 = 0;

void setup()
{
  
  //Serial.begin(9600);
  
  pinMode(HBRIDGE1,OUTPUT); 
  pinMode(HBRIDGE2,OUTPUT); 
  pinMode(HBRIDGE3,OUTPUT); 
  pinMode(HBRIDGE4,OUTPUT); 
  
  pinMode(Sensor_INT1, INPUT);
  pinMode(Sensor_INT2, INPUT);
  pinMode(Sensor_INT3, INPUT);

}
void loop()
{
  
  Valor_INT1 = digitalRead(Sensor_INT1);
  Valor_INT2 = digitalRead(Sensor_INT2);
  Valor_INT3 = digitalRead(Sensor_INT3);

 if (Valor_INT1 == HIGH)
 {
   //Motor A - FRENTE
   digitalWrite(HBRIDGE1, HIGH);  
   digitalWrite(HBRIDGE2, LOW);
   
   //Motor B - FRENTE
   digitalWrite(HBRIDGE3, HIGH);  
   digitalWrite(HBRIDGE4, LOW);
 }
else
{
  //Motor A - FRENTE
   digitalWrite(HBRIDGE1, LOW);  
   digitalWrite(HBRIDGE2, LOW);
   
   //Motor B - FRENTE
   digitalWrite(HBRIDGE3, LOW);  
   digitalWrite(HBRIDGE4, LOW);

   delay(1000);

   //Motor A - FRENTE PARA O LADO
   digitalWrite(HBRIDGE1, HIGH);  
   digitalWrite(HBRIDGE2, LOW);
   
   //Motor B - FRENTE PARA O LADO
   digitalWrite(HBRIDGE3, LOW);  
   digitalWrite(HBRIDGE4, HIGH);

   delay(300);
   
}
 if (Valor_INT2 == HIGH)
 {
  //Motor A - RE
   digitalWrite(HBRIDGE1, LOW);  
   digitalWrite(HBRIDGE2, HIGH);
   
   //Motor B - RE
   digitalWrite(HBRIDGE3, LOW);  
   digitalWrite(HBRIDGE4, HIGH);
 }
 else
{
  
}
if (Valor_INT3 == HIGH)
 {
  //Motor A - RE
   digitalWrite(HBRIDGE1, LOW);  
   digitalWrite(HBRIDGE2, HIGH);
   
   //Motor B - RE
   digitalWrite(HBRIDGE3, LOW);  
   digitalWrite(HBRIDGE4, HIGH);
 }
 else
{
}
}
