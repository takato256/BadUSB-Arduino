#include "Keyboard.h"

void setup() {

  delay(500);

  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.print("cmd");
  Keyboard.write(KEY_RETURN);
  delay(500);
  
  Keyboard.print("start https://takato256.github.io/PacketStreet/");
  Keyboard.write(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  Keyboard.print("exit");
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

void loop() {
  
}
