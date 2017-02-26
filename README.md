LED Protest Sign Scroller
================================

![LED scroller](http://i.giphy.com/gQoLZwt0bDpok.gif)

"Christmas Light" LED signs are now ubiquitous! This is my quick and dirty attempt to make signs out of lightweight semi-flexible, addressable LED matrix boards. For use with Arduino compatible board and WS281x (Neopixel) or APA102 (DotStar) LEDs, and probably easily adaptable to other microcontrollers and LEDs. 

Original is mounted on posterboard, it worked so well I'm working a water-resistant bag-mounted version too!

Bill of Materials
------------

* [8x32 WS2812 "Neopixel" LED Matrix](https://www.adafruit.com/product/2294) or [8x32 APA102 "DotStar" LED Matrix](https://www.adafruit.com/product/2736)
* Small Arduino-compatible board of your choice. [Feather 32u4](https://www.adafruit.com/products/2771), [Flora](https://www.adafruit.com/product/659), [Metro Mini](https://www.adafruit.com/products/2590), [Trinket Pro](https://www.adafruit.com/products/2000), Arduino Nano all work great here.
* Old USB cable you don't mind chopping up (you're going to use it for power, not data)
* [USB Battery Pack](https://www.adafruit.com/product/1959) or lithium battery (be careful)
* Optional, but helpful, if you want to make things detachable: extra [JST connectors](https://www.adafruit.com/products/1663)
* Posterboard, wire, solder and soldering iron, tape, glue, etc.

Cost: ~$120 if you buy all parts retail, significantly less if you can buy bulk, do your own sourcing, or have some of the parts on hand!

Software
------------
* [Arduino IDE](https://www.arduino.cc/en/main/software)
* [Adafruit NeoPixel library](https://github.com/adafruit/Adafruit_NeoPixel)
* [Adafruit NeoMatrix library](https://github.com/adafruit/Adafruit_NeoMatrix)

(Or DotStar variations if using APA102 LEDs)

Instructions
------------
These assume you are using WS2812 "Neopixels", but the process should be similar with an APA102 "Dotstar" Matrix and I've included a MVP sketch for those as well!

* Open the `neopixelsign.ino` (or `dotstarsign.ino` if using APA102 LEDs) in Arduino IDE
* Install the Adafruit libraries, `Sketch > Include Libraries > Manage Libraries`, or unzip into your `Arduino/libraries` folder
* In Arduino IDE, edit the protest messages in the config area (and colors if desired)
* Upload the sample sketch to your microcontroller. 
* Cut off the end of the USB cable, strip the power and ground wires (red and black).
* Run power and ground to the LED matrix power and ground. Run power and ground to your microcontroler's power and ground pins. Solder. 
* Attach the `DATA` line of your LED matrix to your Arduino's `Digital Pin 6` -- if you'd like you can add a 300 to 500 Ohm resistor.
* Enjoy, create and share patterns of your own :-)

[NeoPixel/WS2812 Best Practices](https://learn.adafruit.com/adafruit-neopixel-uberguide/best-practices)

*NOTE* when you attempt to reprogram your Arduino, I suggest either unplugging the LED matrix or making sure to connect your matrix to external power / USB Battery, so the matrix is not powered by your computer's USB through the Ardunio (could cause unintentional damage). 

Tips, Troubleshooting, & Improvements
------------

* Some LEDs might be wired a bit differently (RGB, BRG, GRB?). Take a look at the initialization params in `Adafruit_NeoMatrix()` if you're having trouble!
* If you're using APA102 and you want to use Hardware SPI omit the CLOCK and DATA pins from your `Adafruit_DotStarMatrix()` constructor.
* Boards like [Flora](https://www.adafruit.com/product/659) and [Feather 32u4](https://www.adafruit.com/products/2771) can handle a good amount of current and make working with Li-ion batteries a breeze. If you use one of these minimal hacking required!
* Add a bluetooth to serial dongle, wifi, or cellular connectivity and modify the code to remotely control the display. Sketches for this coming soon!

Other LED Sign Ideas
------------
* Static LED signs via [Overpass Light Brigade](https://www.dailykos.com/story/2011/11/18/1037625/--Make-Diary-DIY-LED-Signs-To-Light-Up-The-Night)
* [SMS Messenger Bag](https://learn.adafruit.com/smssenger-bag) via Adafruit
