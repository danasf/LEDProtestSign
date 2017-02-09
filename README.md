LED Protest Sign Scroller
================================

![LED scroller](http://i.giphy.com/gQoLZwt0bDpok.gif)

For use with ATMega328 compatible board and WS281x LED matrix (and probably easily adaptable to other microcontrollers, DotStar / APA LEDs)

Bill of Materials
------------

* [8x32 WS2812 "Neopixel" LED Matrix](https://www.adafruit.com/product/2294)
* Small Arduino-compatible board of your choice. [Metro Mini](https://www.adafruit.com/products/2590), [Trinket Pro](https://www.adafruit.com/products/2000), [Flora](https://www.adafruit.com/product/659), Arduino Nano work great here
* Old USB cable you don't mind chopping up (you're going to use it for power, not data)
* [USB Battery Pack](https://www.adafruit.com/product/1959) or lithium battery (be careful)
* Optional, but helpful, if you want to make everything detachable: extra [JST connectors](https://www.adafruit.com/products/1663)
* Posterboard, wire, solder and soldering iron, tape, glue, etc.

Cost: $50-120 Depending upon sourcing and parts you have on hand!

Software
------------
* [Arduino IDE](https://www.arduino.cc/en/main/software)
* [Adafruit NeoPixel library](https://github.com/adafruit/Adafruit_NeoPixel)
* [Adafruit NeoMatrix library](https://github.com/adafruit/Adafruit_NeoMatrix)

Instructions
------------
* Open the `protestsign.ino` in Arduino IDE
* Install the Adafruit libraries, `Sketch > Include Libraries > Manage Libraries`, or unzip into your `Arduino/libraries` folder
* In Arduino IDE, edit the protest messages in the config area (and colors if desired)
* Upload the sample sketch to your micro controller. 
* Cut off the end of the USB cable, strip the power and ground wires (red and black).
* Run power and ground to the LED matrix power and ground. Run power and ground to your microcontroler's power and ground pins. Solder. 
* Attach the `DATA` line of your LED matrix to your Arduino's `Digital Pin 6` -- if you'd like you can add a 300 to 500 Ohm resistor.
* Enjoy, create and share patterns of your own :-)

[NeoPixel/WS2812 Best Practices](https://learn.adafruit.com/adafruit-neopixel-uberguide/best-practices)

*NOTE* when you attempt to reprogram your Arduino, either unplug the LED matrix or make sure to connect your USB Battery, so all the power doesn't flow through the Ardunio to the matrix frying it. 

Other LED Sign Ideas
------------
* Static LED signs via [Overpass Light Brigade](https://www.dailykos.com/story/2011/11/18/1037625/--Make-Diary-DIY-LED-Signs-To-Light-Up-The-Night)
* [SMS Messenger Bag](https://learn.adafruit.com/smssenger-bag) via Adafruit
