#include "intent_recognition.h"
#include <unordered_map>

std::string recognizeIntent(const std::vector<std::string> &tokens) {
    std::unordered_map<std::string, std::string> responses = {
        {"hello", "Hi there! How can I assist you?"},
        {"bye", "Goodbye! Have a great day!"},
        {"help", "Sure, I'm here to help! What do you need assistance with?"}
    };

    for (const auto &token : tokens) {
        if (responses.find(token) != responses.end()) {
            return responses[token];
        }
    }

    return "I'm sorry, I didn't understand that.";
}
 
