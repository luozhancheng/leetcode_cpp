//
// Created by lzc on 2021/8/27.
//

#pragma once

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) {
            return s.size();
        }
        int start = 0;
        int end = 0;
        int max = 0;

        while (end < s.size() - 1) {
            int index = string(s, start, end + 1).find_last_of(s.data() + end + 1, end - start, 1);
            if (index != -1) {
                start += index + 1;
            }
            end++;
            if (end - start > max) {
                max = end - start;
            }
        }

        return max + 1;
    }

public:
    static void run() {
        //string s = "4193 with words";
        //string s = "words and 987";
//        string s = "abcabcbb";
string s = "pwwkew";
//        int index = string(s, 2, 1).find_last_of("a", 2);
//        cout << "index = " << index << endl;
        cout << Solution().lengthOfLongestSubstring(s) << endl;
    }

};