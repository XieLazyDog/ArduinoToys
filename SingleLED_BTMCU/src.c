void setup()  {
    Serial.begin(9600);
    pinMode(53,OUTPUT);
}

void loop()  {
    char c= Serial.read();
    if(c>=0)
    {
        if(c=='o')
            digitalWrite(53,HIGH);
        else
            digitalWrite(53,LOW);
    }
    delay(10);
}
