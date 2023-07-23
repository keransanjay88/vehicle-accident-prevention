constintIR_Sensor=7; 
constint IR_Sensor1=8; 
int red =5; 
int green =6; 
int buzzer=9; 
int red1 =4; 
int green1 =3; 
int buzzer1= 10; 
void setup() { 
pinMode(IR_Sensor,INPUT); 
pinMode(IR_Sensor1,INPUT); 
pinMode(red, OUTPUT); 
pinMode(green, OUTPUT); 
pinMode(buzzer,OUTPUT); 
pinMode ( red1 , OUTPUT ); 
pinMode ( green1 , OUTPUT ); 
pinMode(buzzer1,OUTPUT); 
Serial.begin(9600);  
} 
void loop() { 
if((digitalRead(IR_Sensor)==LOW)&& 
(digitalRead(IR_Sensor1)==LOW))        
output 
{ 
digitalWrite(red, LOW);  
digitalWrite(green, HIGH);  
digitalWrite ( red1 , LOW); 
digitalWrite( green1 , HIGH); 
} 
else  if((digitalRead(IR_Sensor)==HIGH)&& 
(digitalRead(IR_Sensor1)==LOW)) 
{ 
digitalWrite(red, HIGH);  
digitalWrite(green, LOW);  
digitalWrite(buzzer,HIGH); 
digitalWrite ( red1 , LOW); 
digitalWrite( green1 ,HIGH); 
digitalWrite(buzzer1,LOW); 
} 
else  if((digitalRead(IR_Sensor)==LOW)&& 
(digitalRead(IR_Sensor1)==HIGH)) 
{ 
digitalWrite(red, LOW);  
digitalWrite(green, HIGH);  
digitalWrite(buzzer,LOW); 
digitalWrite ( red1 , HIGH); 
digitalWrite( green1 , LOW); 
digitalWrite(buzzer1,HIGH); 
} 
else  if((digitalRead(IR_Sensor)==HIGH)&& 
(digitalRead(IR_Sensor1)==HIGH)) 
{ 
digitalWrite(red, HIGH); 
digitalWrite(green, LOW);  
digitalWrite(buzzer,HIGH); 
digitalWrite ( red1 , HIGH); 
digitalWrite( green1 , LOW); 
digitalWrite(buzzer1,HIGH); 
}
