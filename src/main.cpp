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
    std::cout << input << ": command not found" << std::endl;
    if(input == "exit 0") return 0;
}
