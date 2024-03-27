#include<iostream>
#include<string>
#include<cstring>


std::string sub(std::string num1, std::string num2) {
    std::string result;
    int borrow = 0;
    int len1 = num1.length();
    int len2 = num2.length();
    int maxLen = std::max(len1, len2);
    
    num1 = std::string(maxLen - len1, '0') + num1;
    num2 = std::string(maxLen - len2, '0') + num2;
    
    bool ifNeg = false;
    
    if (num1 < num2) {
        swap(num1, num2);
        ifNeg = true;
    }
    
    for (int i = maxLen - 1; i >= 0; i--) {
        int subEach = (num1[i] - '0') - (num2[i] - '0') - borrow;
        if (subEach < 0) {
            subEach += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.insert(result.begin(), subEach + '0');
    }
    
    result.erase(0, std::min(result.find_first_not_of('0'), result.size()-1));
    
    if (ifNeg)
        result.insert(result.begin(), '-');
    
    return result;
}