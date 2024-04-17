#ifndef ITALICTEXT_H
#define ITALICTEXT_H

class ItalicText : public TaggedText
{
public:
    explicit ItalicText(Text* text) : TaggedText(text, "i") {}
};

#endif // ITALICTEXT_H
