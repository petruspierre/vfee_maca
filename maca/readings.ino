int read_ultrassonic(){
  
  int timing = ultrasonic.read();

  return timing;
  
}

bool verify_obstacle(){

  int us = read_ultrassonic();
  bool ans = false;

  us < 15 ? ans = true : ans = false;
  return ans;
  
}
