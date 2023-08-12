class Solution {
public:
    string intToRoman(int num) {

        string res = "";

        map<int, string> mm;
        mm[0] = "";
        mm[1] = "I";
        mm[5] = "V";
        mm[10] = "X";
        mm[50] = "L";
        mm[100] = "C";
        mm[500] = "D";
        mm[1000] = "M";

        int tens = 1;
        while (num) {
            int rem = num % 10;
            if (rem == 4 || rem == 9) {
                res = mm[tens]+mm[rem * tens + tens] + res;
            } else {
                string tem = "";
                for(int i=0;i<(rem % 5);i++) tem += mm[tens];
                res = mm[(rem / 5)*5*tens] + tem + res;
            }
            tens *= 10;
            num /= 10;
        }

        return res;
    }
};