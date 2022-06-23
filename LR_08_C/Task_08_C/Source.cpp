#include <stdio.h>    
#include <string.h>    
#include <conio.h>
#include <iostream>

using namespace std;

int palindrome(char* s)
{
    int beg = 0;                           // начало слова                      
    int end = strlen(s) - 1;               // конец  слова        
    while (beg < end)
        if (s[beg++] != s[end--])
            return 0;                      // не палиндром                  

    return 1;                              // палиндром    
}
int main()
{
    system("cls");
    char  str[100];
    cout << "Enter your line: " << endl;
    gets(str);
    char  tmp[100];                        // рабочая строка
    char* delim = " ,.?!:-;+*=/<>(){}[]";// разделители слов
    char* word;                            // выделяемое слово
    char* p;                               // указатель на начало слова
    puts(str);                             // печатаем исходную строку
    strcpy(tmp, str);                      // копируем строку в рабочий массив
    word = strtok(tmp, delim);             // выделяем первое слово в рабочей строке
    // цикл обработки слов в рабочей строке
    while (word)
    {
        if (palindrome(word))               // если слово - палиндром
        {
            p = strstr(str, word);         // находим его в исходной строке        
            strcpy(p, p + strlen(word));   // удаляем его из исходной строки
        }
        word = strtok(NULL, delim);       // выделяем следующее слово в рабочей строке          
    }
    puts(str);                             // печатаем строку без палиндромов
    getch();
    return 0;
}