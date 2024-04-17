#ifndef TAGGEDTEXT_H
#define TAGGEDTEXT_H

class TaggedText : public DecoratedText
{
public:
    explicit TaggedText(Text* text, std::string tag) : DecoratedText(text), tag_(tag) {}
    void render(const std::string &data) const
    {
        std::cout << "<" << tag_ << ">";
        text_->render(data);
        std::cout << "</" << tag_ << ">";
    }
    std::string tag_;
};

#endif // TAGGEDTEXT_H
