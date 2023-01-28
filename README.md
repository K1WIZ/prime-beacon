# prime-beacon
Arduino sketch to create a simple prime number delayed beacon to key a RF or optical transmitter

THeory Of Operation:
1) key-down is set at 2 seconds, which occurs at the end of each delay period.
2) delay period is generated by iterating through prime numbers between 2 and 97.  To set the delay, the prime number value is multiplied by 1000ms (1 second) to create a delay period based on a prime number.  
3) connect the TX PIN contacts to an opto-isolator or relay to simply allow the arduino to key down the transmitter.  Use a transmitter that has at least 20 watts output and transmits (preferrably in the X-band microwave region - 2-4GHz) as this is the best spot in the "microwave window" in the cosmos.  If you are just trying to create a signal for the immediate low earth orbit area, try your luck on 452MHz (this is the hydrogen line divided by Pi:  1.420GHz/3.1482364839292 = 452MHz) and may be good enough for low earth orbit directly in your sky field of view.  Please listen to whatever frequency you may be thinking of using for a few weeks though to ensure it is clear in your region first!!!   Also please avoid transmitting between 1.300-1.540GHz  (this protects the frequency of 1.420GHz which is the frequency of hydrogen that is often used by astronomers to view with radio telescopes), but any other clear frequency between 2 and 4GHz should be ideal.  Another frequency based on the hydrogen line in the microwave X-band region would be 2.66GHz.  This is "Hydrogen times 2".

![](https://media.sciencephoto.com/image/r1600326/800wm)

Anyone watching such a transmission on a spectrum waterfall would see a straight line representing the transmission broken up by the "prime delays".  This would create a simple repeating signal that has obvious artificial characteristics and would stand out from natural EM or background noise.  It would be an unmistakeable sign that the signal was of intelligent origin.  Because we only transmit for 2 seconds after each prime delay, transmitter duty cycle is kept exceptionally low, which allows for much higher power levels at much lower expense over time.
![](https://nansupport.com/images/clearwaves/waterfall-800x275.png)
