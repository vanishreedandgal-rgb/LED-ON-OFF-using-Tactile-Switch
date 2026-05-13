/*
------------------------------------------------------------
 Project Name : LED ON/OFF using Tactile Switch
 Platform     : Arduino / Embedded C
 Author       : Your Name
 Description  : Control an LED using a tactile push button.
------------------------------------------------------------
*/

int switchPin = 6;   // Tactile switch connected to Digital Pin 6
int ledPin    = 7;   // LED connected to Digital Pin 7

int switchState;     // Variable to store switch reading

//------------------------------------------------------------
// Setup Function (Runs Once)
//------------------------------------------------------------
void setup() 
{
  Serial.begin(9600);        // Start serial communication

  pinMode(switchPin, INPUT); // Switch as INPUT
  pinMode(ledPin, OUTPUT);   // LED as OUTPUT
}

//------------------------------------------------------------
// Loop Function (Runs Continuously)
//------------------------------------------------------------
void loop() 
{
  // Read switch state
  switchState = digitalRead(switchPin);

  // Print switch value on Serial Monitor
  Serial.println(switchState);

  // If switch pressed → LED OFF
  if (switchState == 0)
  {
    digitalWrite(ledPin, LOW);
  }
  // If switch released → LED ON
  else
  {
    digitalWrite(ledPin, HIGH);
  }
}
