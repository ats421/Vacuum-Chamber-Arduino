// include SPI, MP3 and SD libraries
#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>
// These are the pins used for the breakout example
#define BREAKOUT_RESET  9      // VS1053 reset pin (output)
#define BREAKOUT_CS     10     // VS1053 chip select pin (output)
#define BREAKOUT_DCS    8      // VS1053 Data/command select pin (output)
// These are the pins used for the music maker shield
#define SHIELD_RESET  -1      // VS1053 reset pin (unused!)
#define SHIELD_CS     7      // VS1053 chip select pin (output)
#define SHIELD_DCS    6      // VS1053 Data/command select pin (output)
// These are common pins between breakout and shield
#define CARDCS 4     // Card chip select pin
// DREQ should be an Int pin, see http://arduino.cc/en/Reference/attachInterrupt
#define DREQ 3       // VS1053 Data request, ideally an Interrupt pin
Adafruit_VS1053_FilePlayer musicPlayer = 
Adafruit_VS1053_FilePlayer(SHIELD_RESET, SHIELD_CS, SHIELD_DCS, DREQ, CARDCS);

const int buttonPin =5;     // the number of the pushbutton pin
    // the number of the LED pin
int buttonState = 0;         // variable for reading the pushbutton status
pinMode ledPin = 1;
void setup() {
pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  Serial.println("Adafruit VS1053 Library Test"); // initialise the music player
  if (! musicPlayer.begin()) { // initialise the music player
//     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
//     while (1);
  }
  if (!SD.begin(CARDCS)) {
  while (1);  // don't do anything more
  }
  printDirectory(SD.open("/"), 0);
   // Set volume for left, right channels. lower numbers == louder volume!
  musicPlayer.setVolume(20,20);
}
void loop(){ 
buttonState = digitalRead(buttonPin);

 if (buttonState == HIGH){
//  digitalWrite(ledPin, HIGH);

  musicPlayer.playFullFile("VacuumBoxAudioReward_mixdown.mp3");
 }
  else {
digitalWrite;

 }
 //
 }
 
 
/// File listing helper
void printDirectory(File dir, int numTabs) {
   while(true) {
    File entry =  dir.openNextFile();
    if (! entry) {
    break;
     }
 entry.close();
   }
   
   }
   

