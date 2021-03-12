/**
 * @file     guessNumber.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lower = 1;
        int higher = n;
        int result;

        while(lower <= higher) {
            int mid = lower + ((higher - lower) >> 1);
            if(guess(mid) == 0) {
                result = mid;
                break;
            }
            else if(guess(mid) == -1) {
                higher = mid - 1;
            }
            else {
                lower = mid + 1;
            }
        }

        return result;
    }
};