#include<iostream>
#include<string>
#include<cstring>


std::string sum(std::string num1, std::string num2) {
    std::string result;
    int carry = 0;
    int len1 = num1.length();
    int len2 = num2.length();
    int maxLen = std::max(len1, len2);
    
    num1 = std::string(maxLen - len1, '0') + num1;
    num2 = std::string(maxLen - len2, '0') + num2;
    
    for (int i = maxLen - 1; i >= 0; i--) {
        int addEach = (num1[i] - '0') + (num2[i] - '0') + carry;
        result.insert(result.begin(), addEach % 10 + '0');
        carry = addEach / 10;
    }
    
    if (carry)
        result.insert(result.begin(), carry + '0');
    
    return result;
}