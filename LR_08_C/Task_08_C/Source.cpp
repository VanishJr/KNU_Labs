#include <stdio.h>    
#include <string.h>    
#include <conio.h>
#include <iostream>

using namespace std;

int palindrome(char* s)
{
    int beg = 0;                           // ������ �����                      
    int end = strlen(s) - 1;               // �����  �����        
    while (beg < end)
        if (s[beg++] != s[end--])
            return 0;                      // �� ���������                  

    return 1;                              // ���������    
}
int main()
{
    system("cls");
    char  str[100];
    cout << "Enter your line: " << endl;
    gets(str);
    char  tmp[100];                        // ������� ������
    char* delim = " ,.?!:-;+*=/<>(){}[]";// ����������� ����
    char* word;                            // ���������� �����
    char* p;                               // ��������� �� ������ �����
    puts(str);                             // �������� �������� ������
    strcpy(tmp, str);                      // �������� ������ � ������� ������
    word = strtok(tmp, delim);             // �������� ������ ����� � ������� ������
    // ���� ��������� ���� � ������� ������
    while (word)
    {
        if (palindrome(word))               // ���� ����� - ���������
        {
            p = strstr(str, word);         // ������� ��� � �������� ������        
            strcpy(p, p + strlen(word));   // ������� ��� �� �������� ������
        }
        word = strtok(NULL, delim);       // �������� ��������� ����� � ������� ������          
    }
    puts(str);                             // �������� ������ ��� �����������
    getch();
    return 0;
}