#ifndef BOLDTEXT_H
#define BOLDTEXT_H

class BoldText : public TaggedText
{
public:
    explicit BoldText(Text* text) : TaggedText(text, "b") {}
};

#endif // BOLDTEXT_H
