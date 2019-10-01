#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> map;
    map["a"] = "a";
    map[""] = "Hello";
    std::cout << map[""] << std::endl;
    return 0;
}