# Arduino Inverter
<p>This Is an inverter for electric cars. Written by Benjamin Brown. <br>
Output pins are all the pins marked ~(PWM) or (11, 10, 9, 6, 5, 3). Attach to the positive set of IGBT's to pins (11, 10, 9) and the negative set to pins (6, 5, 3,). <br>
I used 650v IGBTs and suggest using an OP-AMP instead of a gate driver. <i>you don't have to use an OP-AMP even though most IGBT's have a higher gate voltage than the Arduino can output so an OP-AMP is ideal </i>
I suggest using IGBT transistors instead of MOSFETS, but this code  should also work as an ESC, by changing the IGBT's with the correct MOSFETS. <br>
<b>Warning: ONLY USE NPN VARIANTS OF THE TRANSITORS, PNP VARIANTS WILL NOT WORK! </b> <br><br>
Any problems/questions please email blearb.Github@outlook.com
</p>
