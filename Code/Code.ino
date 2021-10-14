//Swithc_blink
//
// Make the Led blink by plugging in the cable into pin7.
// Turn off the LED if the cable is unplugged.

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  //if pin2 plugged LED should be on
  if (digitalRead(7)  == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
  }
  
  // if pin2 unplugged LED should be off
  if (digitalRead(7) == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
