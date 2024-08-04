#include "lexer.h"
#include <vector>
void Token::print(){
    std::cout << std::left << std::setw(20) << "Text:" << text << std::setw(20) << " | Line Number: " << lineNum << std::endl;
}

Token LexicalAnalyzer::getToken(){
    
}

void LexicalAnalyzer::tester(){
    std::string fileName = "example.txt";
    std::ifstream file(fileName);  //opens the file

    //error returned if file opens incorrectly
    if(!file.is_open()){
        std::cout << "File:" << fileName << " did not open correctly!" << std::endl; 
    }

    std::vector<Token> tokens;

    char ch;
    Token currToken;

    //read file character by character
    while(file.get(ch)){
        if(ch == ' '){
            tokens.push_back(currToken);
            currToken.text = "";
            continue;
        }
        currToken.text += ch;
    }
    file.close();

    //for each token in the vector of Tokens
    for(Token token: tokens){
        token.print();
    }



}