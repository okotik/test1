#include <iostream>

void swap(const char *text)
{

    for (int i = 0; i < strlen(text); ++i)
        std::cout << text[i];

    for (int j = strlen(text); j >= 0; j--)
        std::cout <<text[j];
}


int main()
{
    const char *text = "taras";
    swap(text);
    return 0;
}
