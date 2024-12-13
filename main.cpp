 #include <iostream>
#include <vector>
#include <string>
#include "tokenizer.h"
#include "intent_recognition.h"

int main() {
    std::string input;
    std::cout << "Welcome to the AI Chatbot! Type 'exit' to end the chat." << std::endl;

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, input);

        if (input == "exit") break;

        std::vector<std::string> tokens = tokenize(input);
        std::string response = recognizeIntent(tokens);

        std::cout << "Bot: " << response << std::endl;
    }

    return 0;
}

