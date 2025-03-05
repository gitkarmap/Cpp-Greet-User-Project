//This is the project of User Greet Program Using C++20
#include <iostream>
#include <string>

int main(){

    //This is going to print "Welcome" to the terminal with pattern
    std::cout << "********************" << std::endl;
    std::cout << "     WELCOME        " << std::endl;
    std::cout << "********************" << std::endl;

    //This is going to declare what is quality of "User greet program"
    std::cout << "Welcome to the our User Greet Program where you fill your information and program will greet you" << std::endl;

    //This is telling User that fill their information on down below
    std::cout << "*************************************" << std::endl;
    std::cout << "   FILL YOUR INFORMATION DOWN HERE   " << std::endl;
    std::cout << "*************************************" << std::endl;

    //User Greet Program here
    int age; 
    std::string full_name;

    std::cout << "Please type your full name and age" << std::endl;

    //Data with space
    std::cout << "Full Name : ";
    std::getline(std::cin,full_name);
    std::cout << "Age : ";
    std::cin >> age;

    //Greetings program
    std::cout << "Welcome " << full_name << " you are " << age << 
      " years old!" << std::endl;
    


    return 0;
}