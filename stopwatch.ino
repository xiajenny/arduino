const int switchPin = 2; // the number of the input pin
long startTime; // store starting time here
long duration; // variable to store how long the timer has been running
float secduration; // variable to store the duration in seconds


void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if( digitalRead(switchPin) == LOW ) {
  startTime = millis();
  }
  
  while ( digitalRead(switchPin) == LOW ) {
  duration = millis() - startTime;
  secduration = (float)duration / 1000;
  Serial.print("Time: "); // print out your results
  Serial.print(secduration);
  Serial.println(" seconds");
  }
}
