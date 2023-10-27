/*
 * @lc app=leetcode id=504 lang=c
 *
 * [504] Base 7
 */

// @lc code=start
#include <string.h>
#include <stdio.h>
char * convertToBase7(int num){
    char result[32]; // Maximum 32 characters.

    if (num == 0)
    {
        result[0] = '0';
        return strdup(result);
    }

    char sign = ' ';
    if (num < 0)
    {
        sign = '-';
        num = -num;
    }

    int i = 0;
    while (num > 0)
    {
        result[i] = (num % 7) + '0';
        num /= 7;
        i++;
    }

    if (sign == '-')
    {
        result[i] = '-';
        i++;
    }
    
    result[i] = NULL;

    // Reverse the string.
    int start = 0;
    int end = i - 1; 
    while (start < end)
    {
        // Swap front and back.
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }

    return strdup(result);
    
}
// @lc code=end

