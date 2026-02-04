# ARDUINO TASK 3


## OBJECTIVE :-
### TO DESIGN AND IMPLEMENT A CIRCUIT THAT USES A PUSH BUTTON TO TURN AN LED ON AND OFF, AND TO CONTROL THE LED BLINKING SPEED BY VARYING THE DELAY IN THE PROGRAM.
----
## SIMULATION USED:
TINKERCAD
----
## CONTENT:
- CODE
- BASICS OF ARDUINO USED
- EXPLANATION OF THE PROGRAM
----
### CODE
The code written to perform the following operation is listed below along with the connections.

<img width="1919" height="960" alt="Screenshot 2026-02-04 165809" src="https://github.com/user-attachments/assets/f9f3a7d9-8cb9-42f7-9ab3-16f07aae7846" />



----

### BASICS OF ARDUINO USED
There are two fuctions used in this program which are:
- void setup() function = Used for initialization
- void loop() function = Used for repeating a set of instructions
Terms related to Digital Pins:
- HIGH represents 5 V wrt ground.
- LOW represents 0 V .
- pinMode(component's_name,Act either as input or output) = This expression is used to specify the pin as either an input or an output.It is used in the setup() function.
- Serial.begin(9600) = It is used for serial communication.It is used in the setup() function.
- delay(milliseconds) = It is used for pausing the set of code for a stipulated millisecons listed inside the brackets.
- digitalRead(component's_name) = It is used for reading the logical state of the pin specified.
- digitalWrite(component's_name,Logical state) = It is used to make changes in the component by changing the logical state, either high or low.
- Serial.println("----") = It is used for printing a line on the serial monitor.

----

### EXPLANATION OF THE PROGRAM
A variable is declared as ledPin which stores the pin number where the LED is connected (digital pin 7).
A variable is declared as buttonPin which stores the pin number where the push button is connected (digital pin 4).

- Inside the setup() function :-
  Using the pinMode expression we have performed the following actions:-
  - LED will act as an output device.
  - BUTTON will act as an input device.
  Starting communication using the Serial.begin(9600) command.
- Inside the loop() function :-
  - I have used the condtion statement which is if....else statement .
  - In the if block:-
    -  The condition is that it reads the current logical state of the button and compares with HIGH .If the condition turns out to be true it procede withe block of code written under it.
  Now ,using the digitalWrite command to make changes in the LED.
  - Creating a blinking pattern using delay.
  - 1st blink (fast blink) :- LED ON AND OFF for 100 ms .
