LED Protest Sign Scroller
================================

For use with ATMega328 compatible board and WS281x LED matrix (and probably easily adaptable to other microcontrollers, DotStar / APA LEDs)

Bill of Materials
------------

* [8x32 WS281X LED Matrix](https://www.adafruit.com/product/2294)
* Arduino board of your choice (Arduino Nano, Flora, other small boards work great here)
* Old USB cable you don't mind chopping up (you're going to use it for power, not data)
* Optional, but helpful: extra [JST connectors](https://www.adafruit.com/products/1663)
* [USB Battery Pack](https://www.adafruit.com/product/1959) or lithium battery (be careful)
* Posterboard, wire, solder and soldering iron, tape, glue, etc.

Software
------------
* Arduino IDE
* Adafruit NeoPixel library
* Adafruit NeoMatrix library

Instructions
------------
* Install the Adafruit libraries, Sketch > Include Libraries > Manage Libraries, or unzip into Arduino/libraries folder
* In Arduino IDE, edit the protest messages in the config area (and colors if desired)
* Upload the sample sketch to your micro controller. 
* Cut off USB cable, run power and ground wires to the LED matrix
* Run wire from the matrix to your microcontroler to proviee power and ground
* Attach your LED data line to Digital Pin 6
* Enjoy, create and share patterns of your own :-)

*NOTE* when you attempt to reprogram your Arduino, either unplug the LED matrix or make sure to connect your USB Battery, so all the power doesn't flow through the Ardunio to the matrix frying it. 

Other LED Sign Ideas
------------
* Static LED signs via [Overpass Light Brigade](https://www.dailykos.com/story/2011/11/18/1037625/--Make-Diary-DIY-LED-Signs-To-Light-Up-The-Night)
* [SMS Messenger Bag](https://learn.adafruit.com/smssenger-bag) via Adafruit
