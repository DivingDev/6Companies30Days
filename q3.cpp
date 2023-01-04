// Q3 Accepted Link
// https://leetcode.com/problems/bulls-and-cows/submissions/871156168/

// code:-
/*
class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0, cow=0;
        int charS[10] = {0}, charG[10] = {0};
        
        for (int i = 0; i <secret.length();i++)
        {
            if (secret[i] == guess[i])
                bull++;
            else
            {
                ++charS[secret[i] - '0'];
                ++charG[guess[i] - '0'];
            } 
        }
        for (int i = 0; i < 10;i++)
        {
            if (charS[i] == charG[i])
                cow += charS[i];
            else if (charS[i] > 0 && charG[i] > 0)
                cow += (charS[i] > charG[i] ? charG[i] : charS[i]);
        }
        string ret = to_string(bull)+"A"+to_string(cow)+"B";
        
        return ret;
    }
};
*/