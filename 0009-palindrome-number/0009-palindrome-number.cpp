class Solution {
public:
    bool isPalindrome(int number) {
        if (number < 0) {
            return false;
        }

        int temp = number;
        long long the_opposite_of_the_number = 0;

        while (temp > 0) {
            int last_number = temp % 10;
            the_opposite_of_the_number = the_opposite_of_the_number * 10 + last_number;
            temp /= 10;
        }

        return the_opposite_of_the_number == number;
    }
};
