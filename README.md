# Glasses-For-blind
Sunglasses that serve an even more useful purpose than protecting the eyes of the blind. They can help them detect objects in front of them.
This device uses Arduino pro mini, Ultrasonic sensor, Buzzer and some jumper wires.

"How does it work?"
The ultrasonic sensor has a transmitter and a receiver in it the transmitter transmits the ultrasoinc waves and the receiver RECEIVES the waves and finds out the 
time taken for the ultrasonic wave to come back to the receiver and sends the data to the arduino pro mini. The pro mini calculates the distance based on the data 
given by the sensor.
According to the distance the buzzer creates sound .If the object is between 100 and 80 cm the frequency of the beeps is 1Hz i.e. it sound every 1 second.
If the object is between 80 and 30 cm the frequency of the beeps is 0.55Hz i.e. it sound every 0.55 second.
If the object is between 30 and 0 cm the frequency of the beeps is 0.11Hz i.e. it sound every 0.11 second.
