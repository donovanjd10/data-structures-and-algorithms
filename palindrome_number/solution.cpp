class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x %10 == 0 && x != 0)){
            return false;
        }
    long reverseDigit = 0;
    long currentDigit = x;
    int i = 0;
    

    while(currentDigit > 0){
      int lastDigit = currentDigit % 10;
      reverseDigit = reverseDigit* 10 + lastDigit ;
      currentDigit = std::floor(currentDigit / 10);
      i++;
    }
    return (x == reverseDigit);
    }
};
