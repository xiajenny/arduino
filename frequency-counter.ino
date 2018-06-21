const int switchPin = 2; // the input pin
long startcount; // Store the first time value returned from millis
long duration; // Store the duratation of a period or part there of of the incoming signal
float period; // Store the calculated period of the incoming signal (in seconds)
float scaled_period; // Store the scaled values of period (if necessary) due to timer clock changes
float frequency; // Store the calculated frequency in Hz

bool start = false;

void setup()
{
  pinMode ( switchPin, INPUT );
  Serial.begin(9600); //sets up communication with the serial monitor
 //TCCR0B = ( _BV(CS02) ); 
}

void loop()
{
    if ( digitalRead(switchPin) == HIGH ) {
      if ( digitalRead(switchPin) == LOW) {
        startcount = millis();
        while ( digitalRead(switchPin) == LOW ){
        }
            duration = millis() - startcount; //(measured half the period)
            period = (float)duration / 500; 
            scaled_period = period;
            frequency = 1 / scaled_period;
            Serial.print(" Frequency is = ");
            Serial.println(frequency/4);
          }
        }
      }
  


