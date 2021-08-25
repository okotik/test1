#include <iostream>
#include <string.h>

void swap(const char *text)
{
    //please swap the text
    for (int i = 0; i < strlen(text); ++i)

        std::cout << text[i];
        std::cout << '\n';

    for (int j = strlen(text); j >= 0; --j )
        std::cout << text[j];

}

int main()
{
    const char *text = "123456789";
    swap(text);
    return 0;
}
