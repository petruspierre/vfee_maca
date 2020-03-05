void set_pinmodes(){

  for(int i=0;i<4;i++) pinMode(pin_motors[i], OUTPUT);
  
}

void foward(){
  digitalWrite(pin_motors[0], HIGH);
  digitalWrite(pin_motors[1], LOW);
  
  digitalWrite(pin_motors[2], HIGH);
  digitalWrite(pin_motors[3], LOW);  
}

void stop_motors(){
  digitalWrite(pin_motors[0], HIGH);
  digitalWrite(pin_motors[1], HIGH);

  digitalWrite(pin_motors[2], HIGH);
  digitalWrite(pin_motors[3], HIGH);  
}
