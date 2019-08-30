//blinky wiringpi.7, BCM.4, GPIO.7, #7

#include <iostream>
#include <string>
#include <vector>
extern "C" {
#include "wiringPi/wiringPi.h"
}

using namespace std;

int main(int argc, char **argv)
{
    vector<int> vec;
    vec.push_back(10);

    string s = "Hell! O' world, why won't my c++ code run?\n\n";
    cout << s;

    millis();
    delay(1000);
    cout << vec[0];

//------------------------
  cout << "Hello, wiringPi!" << endl;
  piHiPri(1);
  wiringPiSetupGpio();
  pinMode(4, OUTPUT);
  
  while(1) {
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
  }

  return 0;
}

