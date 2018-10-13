/* simple_io.ino
 *  
 * Polyhack 2018
 * Introduction to HardWearables
 * by Haiting (Michelle) Chan
 
 */

// the piece of conductive fabric
#define FABRIC 0

// the built in red LED
#define LED 1

int fabricIn = 0;
 
// the setup routine runs once when you press reset:
void setup() {

  // Initialize D0 as an input pin (aka, inform Gemma that D0 is for receiving input)
  pinMode(FABRIC, INPUT);
  // Initialize D1 as an output pin (aka, inform Gemma that D0 is for outputting)
  pinMode(LED, OUTPUT);
  
}
 
// the loop routine runs over and over again forever:
void loop() {
  fabricIn = digitalRead(FABRIC);
  if (fabricIn) {  // if the fabric is touched
    digitalWrite(LED, HIGH);    // light up the LED
  } else {
    digitalWrite(LED, LOW);
  }
}
