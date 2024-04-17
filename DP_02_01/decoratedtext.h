#ifndef DECORATEDTEXT_H
#define DECORATEDTEXT_H

class DecoratedText : public Text
{
public:
    explicit DecoratedText(Text* text) : text_(text) {}
    Text* text_;
};

#endif // DECORATEDTEXT_H
