#ifndef PARAGRAPH_H
#define PARAGRAPH_H

class Paragraph : public TaggedText
{
public:
    explicit Paragraph(Text* text) : TaggedText(text, "p") {}
};


#endif // PARAGRAPH_H
