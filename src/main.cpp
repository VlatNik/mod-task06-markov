#include <iostream>
#include <fstream>
#include"textgen.h"

using namespace std;
int main()
{
    string line;
    string text = "";
    ifstream in("text.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            text = text + line + ' ';
        }
    }
    in.close();
    Gen gn = Gen(text, 2, 1000);
    string output = gn.getText();
    ofstream out;
    out.open("output.txt");
    if (out.is_open())
    {
        out << output;
    }
    out.close();
}
