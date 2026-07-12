# Arduino Temperature Monitoring System

## Core Function

An embedded system that measures ambient temperature in real time using the TMP36 temperature sensor and displays the readings on a 16×2 LCD screen.

## Main Components

- **Arduino Uno:** The microcontroller that processes sensor data and controls the LCD.
- **TMP36 Temperature Sensor:** Measures ambient temperature and outputs an analog voltage proportional to the temperature.
- **16×2 LCD Display:** Displays real-time temperature readings.
- **Breadboard & Jumper Wires:** Used for circuit connections and prototyping.

## Working Principle

The TMP36 continuously measures the ambient temperature and sends an analog voltage signal to the Arduino Uno. The Arduino converts the analog signal into a temperature value in degrees Celsius and displays the result on the LCD in real time.

## Future Improvements

- OLED display integration
- Wireless temperature monitoring
- Mobile application connectivity
- IoT-based environmental monitoring system
- Data logging using an SD card
