#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Crypto.h"

int main()
{
    // Read file content to variable
    std::ifstream ifile;
    ifile.open("text.txt", std::ios::in);

    std::string content;
    ifile >> content;
    ifile.close();

    ByteArray plain_text(content.begin(), content.end());
    // create a key to cypher
    ByteArray key(8, 0xFF);
    // xor operator compares asci int with key!
    ByteArray cipher_text = hex_vector_xor(plain_text, key);

    for (std::size_t i = 0; i < cipher_text.size(); ++i)
    {
        std::cout << "Cipher[" << i << "] = " << cipher_text[i] << std::endl;
    }
    std::cout << std::endl;

    ByteArray decipher_text = hex_vector_xor(cipher_text, key);
    for (std::size_t i = 0; i < decipher_text.size(); ++i)
    {
        std::cout << "DECipher[" << i << "] = " << decipher_text[i] << std::endl;
    }

    std::cout << std::endl;

    return 0;
}