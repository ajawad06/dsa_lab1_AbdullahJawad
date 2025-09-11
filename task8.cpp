#include "task8.h"

int naiveSearch(string text,string pattern){
    if (pattern.empty()) {
        return -1;  
    }
    //comparing a substring of text to the pattern and returning starting index if found after inner loop finished
    for (int i=0;i<text.length();i++){
        int j;
        for (j=0;j<pattern.length();j++){
            if (text[i+j]!=pattern[j]) break;
        }
        if (j == pattern.length()) {
            return i; 
        }
    }
    //if not found, -1 returned
    return -1;
}