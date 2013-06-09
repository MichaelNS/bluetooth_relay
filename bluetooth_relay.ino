/*
By Michael Nuro Spetås
Michael.Nuro.Spetas@gmail.com

feel free to use and modify
*/

int LED_PIN = 13;         // declaring which pins are used
int relayPin1 = 2;
int relayPin2 = 3;
int relayPin3 = 4;
int relayPin4 = 5;

boolean relay1on = false;  // declaring booleans for relay states
boolean relay2on = false; 
boolean relay3on = false;
boolean relay4on = false;

int val;

void setup()
{
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  Serial.begin(9600);
<<<<<<< HEAD
  delay(250); // wait a tiny bit
=======
  delay(250);
  Serial.println("Starting");
}
>>>>>>> added functionality

void loop() 
{ 
  if(Serial.available() );  // if data is available
  {
    val = Serial.read();   // declaring what the arduino reads as val
  }
  if(val == '0');          // if 0 is sent to serial read do this
  {
    if(relay1on == true)   // if the relays are on
    {
      Serial.println("Relay 1 is ON"); // send relay is on
    }
    if(relay2on == true)
    {
      Serial.println("Relay 2 is ON");
    }
    if(relay3on == true)
    {
      Serial.println("Relay 3 is ON");
    }
    if(relay4on == true)
    {
      Serial.println("Relay 4 is ON");
    }
    if(relay1on == false)
    {
      Serial.println("Relay 1 is OFF");
    }
    if(relay2on == false)
    {
      Serial.println("Relay 2 is OFF");
    }
    if(relay3on == false)
    {
      Serial.println("Relay 3 is OFF");
    }
    if(relay4on == false)
    {
      Serial.println("Relay 4 is OFF");
    }
  }
  if(val == '1')
  {
    digitalWrite(relayPin1, HIGH);
    Serial.println("Relay1 ON");
    relay1on = true;              // change the boolean so that its easy to check states
  }
  if(val == '2')
   {
     digitalWrite(relayPin1, LOW);
     Serial.println("Relay1 OFF");
     relay1on = false;
   }
   if(val == '3')
   {
     digitalWrite(relayPin2, HIGH);
     Serial.println("Relay2 ON");
     relay2on = true;
   }
   if(val == '4')
   {
     digitalWrite(relayPin2, LOW);
     Serial.println("Relay2 OFF");
     relay2on = false;
   }
   if(val == '5')
   {
     digitalWrite(relayPin3, HIGH);
     Serial.println("Relay3 ON");
     relay3on = true;
   }
   if(val == '6')
   {
     digitalWrite(relayPin3, LOW);
     Serial.println("Relay3 OFF");
     relay3on = false;
   }
   if(val == '7')
   {
     digitalWrite(relayPin4, HIGH);
     Serial.println("Relay4 ON");
     relay4on = true;
   }
   if(val == '8')
   {
     digitalWrite(relayPin4, LOW);
     Serial.println("Relay4 OFF");
     relay1on = false;
   }
    delay(500);
}
