# Arduino Inverter

This Is an inverter for electric cars.
Written By Benjamin Brown.

Output pins are all the pins marked ~(PWM) or (11, 10, 9, 6, 5, 3). Attach to the posative set of IGBT's to pins (11, 10, 9) and the negatve set to pins (6, 5, 3,).

I used 650v IGBTs and suggest using an OP-AMP instaead of a Gate Driver you don't have to use an OP-AMP even though most IGBT's have a higher gate voltage than the Arduino can output so an OP-AMP but 

I do suggest using IGBT transistors instead of MOSFETS, This Should Also Work As An ESC, Bye changing the IGBT's with the correct MOSFETS

Warning: Only Use NPN Varients Of The Transistors! PNP Varients Will Not Work!

Any problems/questions please email blearb.Github@outlook.com
