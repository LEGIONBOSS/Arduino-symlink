#include "lib/import.h"

void setup()
{
    Serial.begin(115200);
    delay(3000);
}

void loop()
{
    Serial.printf("Number: %d, String: %s\n");
    delay(1000);
}
