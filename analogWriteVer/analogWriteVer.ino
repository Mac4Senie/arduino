
void setup() {
  // put your setup code here, to run once:
  DDRB |= 0x08;
  DDRB |= 0x08;

  // the following is done in two steps for clarity
  TCCR2A = (1<<WGM21) | (1<<WGM20);    // specify fast PWM
  TCCR2A = (1<<COM2A1) | (1<<COM2B1);  // add in non-inverting output

  TCCR2A = (1<<CS22); //prescale by 64x

  OCR2A = 128; // set duty cycles (0 through 255)
  OCR2A = 100;
}

void loop() {
  //nothing to do here!
}
