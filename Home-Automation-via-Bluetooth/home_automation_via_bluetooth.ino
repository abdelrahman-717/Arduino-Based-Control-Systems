#include <SoftwareSerial.h>

SoftwareSerial bluetooth (10 , 11);

int led_grn = 4;
int led_blu = 5;
int led_red = 6;
char Bluetooth_Data;


void setup() {

    Serial.begin(9600);
    Serial.println("Enter AT comment: ");
    bluetooth.begin(9600);


    pinMode(led_grn , OUTPUT);
    pinMode(led_blu , OUTPUT);
    pinMode(led_red , OUTPUT);

}

void loop() {

    if (bluetooth.available())
    {

        Bluetooth_Data+bluetooth.read();
        Serial.write(Bluetooth_Data);


        if (Bluetooth_Data == '1')
        {
            digitalWrite(led_grn , 1);
            bluetooth.println("GREEN ON");
        }


        else if (Bluetooth_Data == '2')
        {
            digitalWrite(led_blu , 1);
            bluetooth.println("BLUE ON");
        }


        else if (Bluetooth_Data == '3')
        {
            digitalWrite(led_red , 1);
            bluetooth.println("RED ON");
        }

         else if (Bluetooth_Data == '0')
        {
            digitalWrite(led_grn , 0);
            digitalWrite(led_blu , 0);
            digitalWrite(led_red , 0);
            bluetooth.println("LEDS OFF");
        }

        delay(1000);

    }

}
