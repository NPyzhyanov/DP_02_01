#include <iostream>
#include <string>
#include <algorithm>

#include "text.h"
#include "decoratedtext.h"
#include "taggedtext.h"
#include "italictext.h"
#include "boldtext.h"
#include "paragraph.h"
#include "link.h"
#include "reversed.h"

int main()
{
    auto text_block_1 = new Paragraph(new Text());
    text_block_1->render("Hello world");
    
    std::cout << std::endl;
    
    auto text_block_2 = new Link(new Text());
    text_block_2->render("netology.ru", "Hello world");
    
    std::cout << std::endl;
    
    auto text_block_3 = new Reversed(new BoldText(new Text()));
    text_block_3->render("Hello world");
    
    std::cout << std::endl;
    
    delete text_block_1;
    delete text_block_2;
    delete text_block_3;
    
    return 0;
}
