#include <iostream>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";
  
   std::string input;
   std::getline(std::cin, input);
    std::cout << input << ": command not found\n";
     while(true) {
    std::cout << "$ ";
    std::string input;
    std::getline(std::cin, input);
    if(input == "exit 0") return 0;
    while (std::getline(std::cin, input) && input.find("exit") != 0)
  {
    if (input.find("echo ") == 0)
    {
      const int ECHO_LEN = 5; // Including space
      std::string text = input.substr(ECHO_LEN);
      std::cout << text << std::endl;
      continue;
    }
  }
    std::cout << input << ": command not found" << std::endl;
    
   
}
}