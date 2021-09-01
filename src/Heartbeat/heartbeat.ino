/* heartbeat
 *
 * output <n> sec have elapsed
 *
 */

void setup() {
  pinMode(13, OUTPUT);    // Set pin 13 to output
  Serial.begin(9600);
}

void loop() {
  double t = 0;
  while (true) {
    digitalWrite(13, HIGH);   // Turn on the LED
    delay(250);              // Wait for 1/4 seconds
    digitalWrite(13, LOW);    // Turn off the LED
    delay(750);              // Wait for 3/4 seconds
    Serial.print(t);
    Serial.println(" sec have elapsed");
    t++;
  }
}
