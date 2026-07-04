![PicoFlasher logo](https://raw.githubusercontent.com/X360Tools/PicoFlasher/master/picoflasher.png)
Updated Pins based on this post below, and fixed the clocks on some RP2040 zero's.

https://github.com/X360Tools/PicoFlasher/issues/24#issuecomment-1666996348 <--- these guys did all of the hard work I just merged with the clock fix

<img width="786" height="745" alt="image" src="https://github.com/user-attachments/assets/a2de2d79-7a03-48c2-92f5-8372acb9ba86" />

Compiled here - [PicoFlasher - RP2040Zero - Clock Fix.pdf](https://github.com/user-attachments/files/29655187/PicoFlasher.-.RP2040Zero.-.Clock.Fix.pdf)



Hello. I have changed the pins in the source code, and I can confirm my rp2040-zero works with both 16mb and 4gb nands. Here is the file compiled for the zero just delete the ".pdf" from the file

The GPIO for 16mb are swapped from and to:
16 - 0
17 - 1
18 - 2
19 - 3
20 - 4
21 - 5
gnd - gnd (note the zero only has one gnd pin)

The GPIO for 4gb are swapped from and to:
6 - 26
7 - 27
8 - 28
9 - 29
21 - 5 (same as 16mb)
gnd - gnd

I just used my zero to program a 16mb and a 4gb today, both came out great, although the 4gb is too slow for my preference.
The LED was also reprogrammed, but does not work (I never got it working on the pico either), but besides the led, all seems to work.


