# ARDUINO TASK 3


## OBJECTIVE :-
### TO DESIGN AND IMPLEMENT A CIRCUIT THAT USES A PUSH BUTTON TO TURN AN LED ON AND OFF, AND TO CONTROL THE LED BLINKING SPEED BY VARYING THE DELAY IN THE PROGRAM.
----
## SIMULATION USED:
### TINKERCAD
----
## CONTENT:
- CODE
- BASICS OF ARDUINO USED
- EXPLANATION OF THE PROGRAM
----
### CODE
The code written to perform the following operation is listed below along with the connections.

<img width="1918" height="969" alt="Screenshot 2026-02-04 165948" src="https://github.com/user-attachments/assets/076cfa7f-92e2-428b-9bdc-335e9991e8cd" />


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


