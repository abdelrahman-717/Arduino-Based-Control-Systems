int green_led = 13;
int yellow_led = 12;
int red_led = 11;


void setup() {

    pinMode(green_led , OUTPUT);
    pinMode(yellow_led , OUTPUT);
    pinMode(red_led, OUTPUT);

}

void loop() {

    digitalWrite(red_led, 1);
    digitalWrite(yellow_led, 0);
    digitalWrite(green_led, 0);
    delay(2000);

    digitalWrite(red_led, 0);
    digitalWrite(yellow_led, 1);
    digitalWrite(green_led, 0);
    delay(2000);

    digitalWrite(red_led, 0);
    digitalWrite(yellow_led, 0);
    digitalWrite(green_led, 1);
    delay(2000);

}
