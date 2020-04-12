#include <HID-Project.h>
#include <HID-Settings.h>

void setup()
{
  // Start Keyboard
  Keyboard.begin();

  // Start Payload
  delay(3000);

  // Open spotlight search
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();
  delay(1000);

  // Open terminal from Spotlight search
  Keyboard.print("terminal");
  delay(3000);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);

  // Open a website
  Keyboard.print("open https://www.youtube.com/watch?v=ew_oKrjAq5s");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
