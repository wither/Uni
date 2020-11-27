// Test Values
// Source IP: -1062731775, Destination IP: 167772168
// Source IP: -1398259455, Destination IP: 167772200

#include <iostream>
using namespace std;

void conversion(int binary_IP){
	//First numbers before .
    int IP_P1= (binary_IP >> 24) & 0xff;
    //Second numbers before .
    int IP_P2 = (binary_IP >> 16) & 0xff;
    //Third numbers before .
    int IP_P3 = (binary_IP >> 8) & 0xff;
    //Last numbers before .
    int IP_P4 = binary_IP & 0xff;
    //Outputs the converted IP
    std::cout << "Converted IP Address: " << IP_P1 << "." << IP_P2 << "." << IP_P3 << "." << IP_P4;
}

int main() {
    int source_IP;
    //Allows user to input source IP address
    cout << "Source IP: ";
    std::cin >> source_IP;
    //Runs conversion function with the entered source IP as an argument
    conversion(source_IP);
    int destination_IP;
    //Allows user to input destination IP address
    std::cout << "\nDestination IP: ";
    std::cin >> destination_IP;
    conversion(destination_IP);
    //Allows user to close program
    std::cout << "\n\nInsert a character to Close Program...";
    int da_exit;
    while (da_exit){std::cin >> da_exit;}
}
