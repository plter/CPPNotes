#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <string>

int main() {
    boost::property_tree::ptree tree;
    boost::property_tree::read_json("data.json", tree);
    std::cout << "Name: " << tree.get<std::string>("name") << ", age: " << tree.get<int>("age") << std::endl;
    return 0;
}