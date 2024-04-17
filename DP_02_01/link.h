#ifndef LINK_H
#define LINK_H

class Link : public DecoratedText
{
public:
    explicit Link(Text* text) : DecoratedText(text) {}
    void render(const std::string &url, const std::string &data) const
    {
        std::cout << "<a href=" << url << ">";
        text_->render(data);
        std::cout << "</a>";
    }
};

#endif // LINK_H
