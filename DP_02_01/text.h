#ifndef TEXT_H
#define TEXT_H

class Text
{
public:
    virtual void render(const std::string &data) const
    {
        std::cout << data;
    }
};

#endif // TEXT_H
