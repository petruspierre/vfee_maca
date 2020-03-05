#include <Ultrasonic.h>

#define in1 16
#define in2 5
#define in3 4
#define in4 0

#define pino_echo 14
#define pino_trigger 12

Ultrasonic ultrasonic(pino_trigger, pino_echo); 

void setup() {
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {
  float timing = ultrasonic.read();
  Serial.println("Testing...");
  Serial.println(timing);
 
  delay(100);

}


void foward(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);  
}

void stop_motors(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);  
}
