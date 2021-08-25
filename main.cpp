#include <iostream>

void swap(const char *text)
{
    //please swap the text
    for (int i = 0; i < strlen(text); ++i)
    {
        std::cout << text[i];
    }
}

int main()
{
    const char *text = "123456789";
    swap(text);
    return 0;
}
