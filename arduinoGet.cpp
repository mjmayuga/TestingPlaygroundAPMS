#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <libserial/SerialStream.h> // Install the SerialStream library for serial communication

int main() {
    using namespace LibSerial;
    
    // Serial configuration for Arduino connected via USB
    SerialStream arduinoUSB1;
    arduinoUSB1.Open("/dev/ttyUSB0");
    arduinoUSB1.SetBaudRate(SerialStreamBuf::BAUD_9600);
    
    SerialStream arduinoUSB2;
    arduinoUSB2.Open("/dev/ttyUSB1");
    arduinoUSB2.SetBaudRate(SerialStreamBuf::BAUD_9600);
    
    // Wifi communication with Arduino connected to Orange Pi
    // Replace these values with the actual IP and port
    std::string arduinoIP = "arduino_ip_address";
    int arduinoPort = 12345;
    
    // Setup networking to communicate with Arduino over WiFi
    // Implement networking code using sockets or a library like Boost.Asio
    
    while (true) {
        // Read data from USB Arduino 1
        std::string arduino1Data;
        getline(arduinoUSB1, arduino1Data);
        // Parse and process data from arduino1Data
        
        // Read data from USB Arduino 2
        std::string arduino2Data;
        getline(arduinoUSB2, arduino2Data);
        // Parse and process data from arduino2Data
        
        // Read data from WiFi-connected Arduino
        // Implement code to receive data from the Arduino over WiFi
        
        // Process and combine sensor data
        
        // Implement your processing logic here
        
        // Print or send data to another system (database, web server, etc.)
        // For now, let's just print the combined data
        std::cout << "Combined Sensor Data: " << combinedData << std::endl;
    }
    
    // Close the serial connections
    arduinoUSB1.Close();
    arduinoUSB2.Close();
    
    return 0;
}
