void setup()
{
 Serial.begin(9600);
  
}
void loop ()
{
  long tecladoA5=0;
  tecladoA5 =analogRead(A5);
  
  Serial.println(tecladoA5);
  delay (100);
}
void setuo ()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop()
{
  long tecladoA5=0;
  tecladoA5 =analogRead(A5);
  if(tecladoA5 == 205){
    digitalWrite(2, HIGH);
  }else{
    
    digitalWrite(2, LOW);
  }
  
