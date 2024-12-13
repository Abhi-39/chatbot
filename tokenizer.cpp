#include "tokenizer.h"
#include <sstream>

std::vector<std::string> tokenize(const std::string &str) {
    std::stringstream ss(str);
    std::string word;
    std::vector<std::string> tokens;

    while (ss >> word) {
        tokens.push_back(word);
    }

    return tokens;
}
 
