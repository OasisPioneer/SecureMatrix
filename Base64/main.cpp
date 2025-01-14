#include <iostream>
#include <string>

#include "Base64.HPP"

int main() {
    // 要编码的原始字符串
    std::string input;

    std::cout << "Please enter: ";

    std::cin >> input;

    // 使用 Base64 类的静态方法进行编码
    std::string Encoded_data = Base64::Encode(input);
    std::cout << "Encoded: " << Encoded_data << std::endl;

    // 使用 Base64 类的静态方法进行解码
    std::string Decoded_data = Base64::Decode(input);
    std::cout << "Decoded: " << Decoded_data << std::endl;

    return 0;
}
