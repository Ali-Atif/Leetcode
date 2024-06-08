class Solution {
public:
    int addDigits(int num) {
        // Jab tak number 10 se bada hai, hum digits ko repeatedly add karte rahenge loop chalta rahe ga
        while (num >= 10) {
            int sum = 0;
            // Digit ka sum find karna
            while (num > 0) {
                sum= sum+ num % 10; // Last digit add karna
                num /= 10; // Last digit ko hata dena
            }
            num = sum; // Sum ko num mein daal dena
        }
        return num; // Single digit return karna
    }
};