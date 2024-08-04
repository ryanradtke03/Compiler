#ifndef __LEXER__H__
#define __LEXER__H__

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

//Token Types (names for keywords)
typedef enum{
    END_OF_FILE, INT, REAL, BOO, TR, FA, IF, WHILE, SWITCH, CASE, NOT, PLUS, MINUS,
    MULT, DIV, GTEQ, GREATER, LTEQ, LESS, NOT_EQUAL, EQUAL, LPARAEN, RPAREN, COLON,
    COMMA, SEMI_COLON, LBRACE, RBRACE, ID, ERROR, 
} TokenType;


//Token contains String, line num, token attributes, token type
class Token{
    public:
        std::string text;
        TokenType token_type;
        int lineNum;

        void print();
    private:

};

class LexicalAnalyzer{
    public:
        Token getToken();
        void tester();
    private:
};



#endif