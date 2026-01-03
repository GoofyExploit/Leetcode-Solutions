// Last updated: 1/3/2026, 6:25:40 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int lastDigitPro = 1;
        int product = 1;
        int lastDigitAdd = 0;
        int sum = 0;
        int fake = n;
        int fake1 = n;
        while(fake > 0){
            lastDigitPro = fake % 10;
            fake = fake / 10;
            product = product * lastDigitPro;
        }
        while(fake1 > 0){
            lastDigitAdd = fake1 % 10;
            fake1 = fake1 / 10;
            sum = sum + lastDigitAdd;
        }
        return product - sum;
    }
};