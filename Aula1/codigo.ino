const int botao1 = 2;
const int botao2 = 3;

int var1;
int var2;
  
 void setup()
 { 
    pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT); 
    pinMode (led2, OUTPUT);
   	Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if(var1){
     Serial.println("botao 1 apertado");
   }
   if(!var2){
     Serial.println("botao 2 apertado");
   }
 }
