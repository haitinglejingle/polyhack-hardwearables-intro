## Introduction to HardWearables — POLYHACK 2018
A beginner-friendly workshop for the meekly curious.

## Intro.

#### A microcontroller includes three main components: processor, memory, and input/output.


#### What can you do with a microcontroller?

<img src="https://lh5.googleusercontent.com/MoZTWYqeXCXPxxJSTU-itcAb25u2k8WHze-Gt9O0WEdT42MgIyQfebRGEhPLUEEn3CwO5_h36JI5pbGTqBTw-jtlHUQWccfkoL4l0ScXB8NDBdEEDgdWF0kbzq1rd_clFXAesTDW" alt="https://soomipark.com/main/wp-content/uploads/2011/12/soomiPARK_LED-Eyelash_02-copy.jpg" width="200"/><img src="https://lh6.googleusercontent.com/7qZ-NdyR3ff1M8Z9DhinE4HtYWSkotT0cthUjuSEcOeRyxEQ4x2ntXxy3WVyp4qoleEbRpzmcwTpUUBNJvk7qp7XCZDM19ykoxizKH3dvJD33JY7FTGKs1GUpA0QGHvU5sHe_IpP" alt="https://makezine.com/projects/led-matrix-handbag" width="200"/><img src="https://lh4.googleusercontent.com/CoBzl8XnT12sBe2KQMdbl17S2RXZCBdqxqsluWJzFQFaKjSeXrMGIyZDhMjFQ9-s7C2QX2ecRwOFhB1itmgjCsCGtY0ycpdr3wzkhYAZIXeP5TIGn5F2aEr7RGfdwL1seZ6JsJxi" alt="https://learn.adafruit.com/firewalker-led-sneakers/sew-sensors-to-flora" width="200"/><img src="https://lh4.googleusercontent.com/DWjoJK06fbHwwLScadQzmGMhQuCUySTaW3KW3CbhjZlbW2wMlNkl7Ed4C_mKPnoNi3DSXSuTqdBBJ67-9oEgqRm5f_FS_EiSzdspN6t0UHzlNL4Ay-G8Mv-VsHDYMZR0a-PEoE6G" alt="http://www.kobakant.at/DIY/?p=6730" width="200"/>

###### Images/Projects/Products from:  
1-https://soomipark.com/main/wp-content/uploads/2011/12/soomiPARK\_LED-Eyelash_02-copy.jpg    
2-https://makezine.com/projects/led-matrix-handbag  
3-https://learn.adafruit.com/firewalker-led-sneakers/sew-sensors-to-flora  
4-http://www.kobakant.at/DIY/?p=6730  

### Materials:

Each person has         
Hardware:   
1x a laptop/desktop  
1x Gemma 2.0 Wearable Platform    
1x Mini-USB to USB  
electrical wire(s) with stripped ends OR alligator clips  
1x breadboard (optional)  
1x small piece of conductive fabric (or other sensor; we used EKG electrodes)

## First.

Get your computer set up for microcontroller boards!

What you'll be doing:

Install the Arduino IDE (Integrated Development Environment)

Why?

The IDE allows you to compile programs for different microcontrollers and upload them to your board

Follow the directions here to set up the Arduino IDE for Gemma 2.0 and STOP when you reach the section that says "Manual Installation (super advanced!)":

<https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide>

## Second.

Let's upload a sketch onto our wearables microcontroller platform.

-   Plug Gemma into your machine using the USB cable.

-   Download the file in this Github repository called "simple_io.ino".
-   From the Arduino IDE, open the file "simple_io.ino". Verify the sketch using the check mark button in the top left corner.  
-   Now, notice the arrow button to the right of the check mark. That uploads code onto the board.   
Go to your Gemma and press the reset button two times with a second in between, trying that until it flashes rapidly. While it does that, upload your sketch. If it stops, try again. This is bootloader mode, which enables us to upload to the board.   
- After uploading your code, let's do a quick test! Put your fingers around the D0 pin. A red LED should come on when you are touching it.

## Third.

Once that's working, we can use a sensor as input to D0. You can cut out a small piece of conductive fabric to use as the sensor.

Then, we connect the sensor to the input pin on the board, which we set to D0 in the code. This platform is easily sewable, but we can use wire or alligator clips. 

## Hey guess what?
### You have all the basics to work on hardware now!

In this exercise, we have used memory, processing, and input/output. We received input data from a sensor, remembered the value of the input, and then used that value for outputting to an LED. The microprocessor handled the logic for all this. 

## Reflection
Did things go as expected? Were some parts troublesome? __Don't worry__, there is a lot to learn. Many things can and _will_ go wrong, but you will learn to troubleshoot. By observing the behavior, learning from experience, and collaborating with people online and in person, you can bring anything that you dream of to life.

## Ok then
Contact me at michellechan.htc@gmail.com if you want more resources for hardware hacking, programming, or anything else to do with computing! You can also send pictures of dogs, bring to my attention an issue that is important to you, or share your ideas.
