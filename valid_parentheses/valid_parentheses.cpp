#include <fstream>
#include <iostream>
#include <map>
#include <vector>

bool process_line(std::string &line)
{
    if (line.length() % 2 != 0)
    {
        return false;
    }

    static std::map<char,char> pairs{{'(',')'}, {'[',']'}, {'{','}'}};
    std::vector<char> history;

    for (auto c : line)
    {
        switch(c)
        {
            case '{':
            case '[':
            case '(':
                history.push_back(pairs[c]);
                break;

            case ')':
            case ']':
            case '}':
                if (history.size() == 0 || history.back() != c)
                {
                    return false;
                }
                else
                {
                    history.pop_back();
                }
                break;
        }
    }
    return true;
}


int main(int argc, char* argv[])
{
    std::ifstream file(argv[1]);
    std::string line;

    while(getline(file, line))
    {
        std::cout << (process_line(line) ? "True" : "False") << std::endl;
    }

    return 0;
}

