/* file "ReGex.h" */

/* Copyright 2013-2018 SoundHound, Incorporated.  All rights reserved. */

#ifndef REGEX_H
#define REGEX_H

#include <vector>
#include <string>
#include <sstream>

extern "C"
{
    #include "regular_expression.h"
}


class RegEx
{
    protected:

    regular_expression *re;

    public:

    /* Constructs a regular expression
     */
    RegEx(const std::string& expression){
        const char* expressionChars = expression.c_str();
        regular_expression_error regex_err;
        re = create_regular_expression_from_pattern(expressionChars, expression.length(), &regex_err);
    }

    RegEx(const RegEx& rhs) : re(rhs.re) {
        regular_expression_add_reference(re);
    }

    friend void swap(RegEx& lhs, RegEx& rhs) {
        using std::swap;
        swap(lhs.re, rhs.re);
    }

    RegEx& operator=(RegEx rhs)
    {
        swap(*this, rhs);
        return *this;
    }

    ~RegEx(){
        regular_expression_remove_reference(re);
    }

    /* Returns true if text matches regular expression, false if
     * it does not, or there is an error
     */
    boolean match(const std::string& text) const {
        boolean err;
        boolean match = matches(re, text.c_str(), true, &err);
        return (match && !err);
    }

    /* Replaces the first appearance of a regular expression with
     * the provided string. Replace is done on a pointer to the
     * text string
     */
    void replaceFirst(std::string* text, const std::string& replace) const {
        boolean err;
        size_t start;
        size_t leng;
        boolean match = longest_match(re, text->c_str(), true, &start, &leng, &err);
        if(match && !err){
            text->replace(start, leng, replace);
        }
    }

    /* Replaces all matches for a regular expression within the string text.
     */
    void replaceAll(std::string* text, const std::string& replace) const {
        int position = 0;
        boolean err;
        size_t start;
        size_t leng;
        std::string subText = text->substr(position);
        boolean match = longest_match(re, subText.c_str(), true, &start, &leng, &err);
        int count = 0;
        while(match && !err){
            position += start;
            text->replace(position, leng, replace);
            position += replace.length();
            subText = text->substr(position);
            match = longest_match(re, subText.c_str(), true, &start, &leng, &err);
            count++;
        }
    }

    /* Tokenizes text and returns a vector of strings.
     */
    std::vector<std::string> tokenize(std::string text) const {
        std::vector<std::string> toReturn;
        boolean err;
        size_t start;
        size_t leng;
        boolean match = longest_match(re, text.c_str(), true, &start, &leng, &err);
        while(match && !err){
            std::string sub = text.substr(0,start);
            toReturn.push_back(sub);
            text = text.substr(start+leng);
            match = longest_match(re, text.c_str(), true, &start, &leng, &err);
        }
        toReturn.push_back(text);
        return toReturn;
    }

};


#endif /* REGEX_H */
