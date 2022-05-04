#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    FILE *fp1, *fp2;
    int flag = 0;
    char ch;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output1.txt", "w");
    while ((ch = fgetc(fp1)) != EOF)
    {
        if ((ch == '/') && (flag == 0))
        {
            flag = 1;
            continue;
        }
        else if ((ch == '/') && (flag == 1))
        {
            flag = 2;
            continue;
        }
        else if ((ch == '*') && (flag == 1))
        {
            flag = 3;
            continue;
        }
        if (flag == 2)
        {
            if (ch == '\n')
            {
                flag = 0;
            }
            continue;
        }
        if (flag == 3)
        {
            if (ch == '*')
            {
                flag = 4;
            }
            continue;
        }
        if (flag == 4)
        {
            if (ch == '/')
            {
                flag = 0;
            }
            continue;
        }
        if (flag == 0)
        {
            if (ch == '\n')
            {
                continue;
            }

            fputc(ch, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    string keywords[35] = {"auto", "break", "case", "char", "const", "continue", "default",
                           "do", "double", "else", "enum", "extern", "float", "for", "goto",
                           "if", "int", "long", "register", "return", "short", "signed",
                           "sizeof", "static", "struct", "switch", "typedef", "union",
                           "unsigned", "void", "volatile", "while", "printf", "scanf"};

    string operators[6] = {"+", "-", "*", "/", "%", "="};
    string identifier[50] = {"main", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    string delimiter[10] = {"{", "}", ",", ";", "(", ")"};
    ifstream file3("output1.txt");
    int i, ckey = 0, coper = 0, ciden = 0, cdelim = 0;
    if (file3.is_open())
    {
        string line;
        while (file3)
        {
            getline(file3, line, ' ');
            for (i = 0; i < 35; i++)
            {
                if (line == keywords[i])
                {
                    cout << "keyword: " << line << endl;
                    ckey++;
                }
            }
            for (i = 0; i < 6; i++)
            {
                if (line == operators[i])
                {
                    cout << "operator: " << line << endl;
                    coper++;
                }
            }
            for (i = 0; i < 10; i++)
            {
                if (delimiter[i] == line)
                {
                    cout << "delimiter: " << line << endl;
                    cdelim++;
                }
            }
            for (i = 0; i < 50; i++)
            {
                if (identifier[i] == line)
                {
                    cout << "identifier: " << line << endl;
                    ciden++;
                }
            }
            int check;
            check = isdigit(line[0]);
            if (check)
            {
                cout << "Identifier: " << line << "\n";
                ciden++;
            }
        }
    }
    cout << "Total no of keywords: " << ckey << endl;
    cout << "Total no of operators: " << coper << endl;
    cout << "Total no of identifier: " << ciden << endl;
    cout << "Total no of delimiter: " << cdelim << endl;
}

