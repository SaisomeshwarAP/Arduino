const int LED=0,LED1=1,LED2=2,LED3=3,LED4=4,LED5=5,LED6=6;
void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
}

void loop() 
{
  digitalWrite(LED,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,LOW);
  delay(500);
  digitalWrite(LED,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  delay(500);
  digitalWrite(LED,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,HIGH);
  delay(500);
  digitalWrite(LED,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  delay(500);
  digitalWrite(LED,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  delay(500);
  
}