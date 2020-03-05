#include <Ultrasonic.h>

short pin_motors[4] = { 16, 5, 4, 0 };

#define pin_echo 14
#define pin_trigger 12

Ultrasonic ultrasonic(pin_trigger, pin_echo); 

void setup() {
  
  Serial.begin(9600);
  set_pinmodes();
  
}

void loop() {
  
  Serial.println("Testing...");
  Serial.println(read_ultrassonic());
 
  delay(100);

}
