/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int messagePin = 1; 
const int buttonPin = 2;     // the number of the pushbutton pin
const int buttonPin1 = 3;
const int buttonPin2 = 4;  
const int buttonPin3 = 5;     // the number of the pushbutton pin
const int buttonPin4 = 6;
const int buttonPin5 = 7;  
const int ledPin =  8;      // the number of the LED pin
const int ledPin1 =  9;
const int ledPin2 =  10;
const int ledPin3 =  11;      // the number of the LED pin
const int ledPin4 =  12;
const int ledPin5 =  13;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState1 = 0; 
int buttonState2 = 0;  
int buttonState3 = 0;         // variable for reading the pushbutton status
int buttonState4 = 0; 
int buttonState5 = 0; 

void setup() {
  // initialize the LED pin as an output:
  
  
  pinMode(ledPin, OUTPUT); 
  pinMode(messagePin, OUTPUT);   
    pinMode(ledPin1, OUTPUT);   
      pinMode(ledPin2, OUTPUT); 
      pinMode(ledPin3, OUTPUT);      
    pinMode(ledPin4, OUTPUT);   
      pinMode(ledPin5, OUTPUT);   
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
    pinMode(buttonPin1, INPUT);  
      pinMode(buttonPin2, INPUT);  
        pinMode(buttonPin3, INPUT);     
    pinMode(buttonPin4, INPUT);  
      pinMode(buttonPin5, INPUT);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
    buttonState1 = digitalRead(buttonPin1);
      buttonState2 = digitalRead(buttonPin2);
        buttonState3 = digitalRead(buttonPin3);
    buttonState4 = digitalRead(buttonPin4);
      buttonState5 = digitalRead(buttonPin5);
      

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
   else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW); 
         digitalWrite(messagePin, LOW); 
  }
    if (buttonState1 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin1, HIGH);  
  }
   else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW); 
         digitalWrite(messagePin, LOW); 
  }
    if (buttonState2 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin2, HIGH);  
  }
   else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW); 
         digitalWrite(messagePin, LOW); 
  }
  
    if (buttonState3 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin3, HIGH);  
  }
   else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW);
        digitalWrite(messagePin, LOW);  
  }
    if (buttonState4 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin4, HIGH);  
  }
   else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW);
        digitalWrite(messagePin, LOW);  
  }
    if (buttonState5 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin5, HIGH);  
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW);
        digitalWrite(messagePin, LOW);  
  }
  
   if (buttonState5 == HIGH && buttonState4 == HIGH && buttonState3 == HIGH ) {     
    // turn LED on:    
    digitalWrite(ledPin5, HIGH);  
        digitalWrite(ledPin4, HIGH); 
              digitalWrite(ledPin3, HIGH); 
                    digitalWrite(messagePin, HIGH); 
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW); 
         digitalWrite(messagePin, LOW); 
  }
   if (buttonState2 == HIGH && buttonState1 == HIGH && buttonState == HIGH ) {     
    // turn LED on:    
    digitalWrite(ledPin2, HIGH);  
        digitalWrite(ledPin1, HIGH); 
              digitalWrite(ledPin, HIGH); 
                    digitalWrite(messagePin, HIGH); 
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, LOW); 
         digitalWrite(ledPin3, LOW); 
      digitalWrite(ledPin4, LOW); 
        digitalWrite(ledPin5, LOW); 
         digitalWrite(messagePin, LOW); 
  }
}
