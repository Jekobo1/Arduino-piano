int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
c = analogRead(A0);
d = analogRead(A1);
e = analogRead(A2);
f = analogRead(A3);
g = analogRead(A4);

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
//Serial.println(t);// wait for a second
//440 f
//delayMicroseconds(350);

if(c > 300){
 digitalWrite(9, HIGH);
 delayMicroseconds(660);
 digitalWrite(9, LOW);
 delayMicroseconds(660);
}
if(d > 300){
   digitalWrite(9, HIGH);
 delayMicroseconds(550);
 digitalWrite(9, LOW);
 delayMicroseconds(550);
}
if(e > 300){
   digitalWrite(9, HIGH);
 delayMicroseconds(460);
 digitalWrite(9, LOW);
 delayMicroseconds(460);
}
if(f > 300){
   digitalWrite(9, HIGH);
 delayMicroseconds(418);
 digitalWrite(9, LOW);
 delayMicroseconds(418);
}
if(g > 300){
   digitalWrite(9, HIGH);
 delayMicroseconds(339);
 digitalWrite(9, LOW);
 delayMicroseconds(339);
}
}
