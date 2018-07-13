int ledPinC1 = 8;
int ledPinC2 = 9;
int ledPinC3 = 10;
int ledPinC4 = 11;
int ledPinR1 = 12;
int ledPinR2 = 13;

int delayTime = 0;

bool ledA = true;
bool ledB = false;
bool ledC = false;
bool ledD = false;
bool ledE = false;
bool ledF = false;
bool ledG = false;
bool ledH = false;

//LED wire layout。 Use 6 pins to control 8 LEDS.

//         c1    c2    c3    c4
//
//  r1      a     b     c     d
//
//  r2      e     f     g     h     

// a, b, c, d, e, f, g are the LEDS

void setup() {
  pinMode (ledPinC1, OUTPUT);
  pinMode (ledPinC2, OUTPUT);
  pinMode (ledPinC3, OUTPUT);
  pinMode (ledPinC4, OUTPUT);
  pinMode (ledPinR1, OUTPUT);
  pinMode (ledPinR2, OUTPUT);
    
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, LOW);
  digitalWrite (ledPinR2, LOW); 
}

void loop() {

if (ledA){
  turnOnA();
  delay(delayTime);
}

if (ledB){
  turnOnB();
  delay(delayTime);
}

if (ledC){
  turnOnC();
  delay(delayTime);
}

if (ledD){
  turnOnD();
  delay(delayTime);
}

if (ledE){
  turnOnE();
  delay(delayTime);
}


if (ledF){
  turnOnF();
  delay(delayTime);
}

if (ledG){
  turnOnG();
  delay(delayTime);
}

if (ledH){
  turnOnH();
  delay(delayTime);
}
  
  //lights turn on based on pulsing
  /*
turnOnA();
delay(delayTime);
turnOnB();
delay(delayTime);
turnOnC();
delay(delayTime);
turnOnD();
delay(delayTime);
turnOnE();
delay(delayTime);
turnOnF();
delay(delayTime);
turnOnG();
delay(delayTime);
turnOnH();
delay(delayTime);
*/
}


void turnOnA(){
  //turn only 'a' on
  digitalWrite (ledPinC1, HIGH);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, LOW);
  digitalWrite (ledPinR2, HIGH); 
}

void turnOnB(){
  //turn only 'b' on
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, HIGH);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, LOW);
  digitalWrite (ledPinR2, HIGH); 
}

void turnOnC(){
  //turn only 'c' on
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, HIGH);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, LOW);
  digitalWrite (ledPinR2, HIGH); 
}

void turnOnD(){
  //turn only 'd' on
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, HIGH);
  digitalWrite (ledPinR1, LOW);
  digitalWrite (ledPinR2, HIGH); 
}

void turnOnE(){
  //turn only 'e' on
  digitalWrite (ledPinC1, HIGH);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, HIGH);
  digitalWrite (ledPinR2, LOW); 
}

void turnOnF(){
  //turn only 'f' on
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, HIGH);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, HIGH);
  digitalWrite (ledPinR2, LOW); 
}

void turnOnG(){
  //turn only 'g' on
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, HIGH);
  digitalWrite (ledPinC4, LOW);
  digitalWrite (ledPinR1, HIGH);
  digitalWrite (ledPinR2, LOW); 
}

void turnOnH(){
  //turn only 'h' on
  digitalWrite (ledPinC1, LOW);
  digitalWrite (ledPinC2, LOW);
  digitalWrite (ledPinC3, LOW);
  digitalWrite (ledPinC4, HIGH);
  digitalWrite (ledPinR1, HIGH);
  digitalWrite (ledPinR2, LOW); 
}

