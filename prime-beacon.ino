/*
 * THE PRIME DELAY BROADCASTING BEACON
 * 
 * This code is for using an arduino to create a simple controller that keys down any transmitter on desired frequency at an 
 * interval specified by a delay set by prime numbers.  Since prime numbers are not naturally occuring, this could conceivably 
 * be used to create a simple RF or optical beacon that is enough to call attention to nearby or low earth orbit extra-terrestrial
 * craft that may have the ability to detect simple radio transmissions.
 * 
 * This was created by John Rogers, K1WIZ on Jan 27, 2023 for UFO/SETI enthusiasts who may wish to try simple EM based 
 * communications for the purpose of saying "hey we're here!"
 * 
 * Permission is hereby granted to freely distribute, and re-use this code for whatever purpose, provided the above notice 
 * remains intact.  Good Luck!  
 * 
 */

const int TX_PIN = 13;   // set to be the pin output that will be coupled with your transmitter key-down (PTT) interface.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TX_PIN, OUTPUT);
}
// main control loop
void loop() {
  for (int i = 2; i <= 100; i++) {
    if (isPrime(i)) {
      Serial.println(i); // print the tx iteration to the serial console for monitoring
      digitalWrite(TX_PIN, HIGH);
      delay(2000);       // delay in ms to keep beacon transmitter keyed down
      digitalWrite(TX_PIN, LOW);
      delay(i * 1000UL); // delay in milliseconds
    }
  }
}
//  the maths to determine a prime number
bool isPrime(int num) {
  if (num <= 1) return false;
  if (num <= 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;
  for (int i = 5; i * i <= num; i = i + 6) {
    if (num % i == 0 || num % (i + 2) == 0)
      return false;
  }
  return true;
}
