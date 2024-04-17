#ifndef REVERSED_H
#define REVERSED_H

class Reversed : public DecoratedText
{
public:
    explicit Reversed(Text* text) : DecoratedText(text) {}
    void render(std::string data) const
    {
        auto it_b = data.begin();
        auto it_e = data.end();
        std::reverse(it_b, it_e);
        text_->render(data);
    }
};

#endif // REVERSED_H
