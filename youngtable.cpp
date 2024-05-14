#include "youngtable.h"

YoungTable::YoungTable()
{

}

YoungTable::YoungTable(std::vector<std::vector<int>> table)
{
    Table = table;
}

std::string YoungTable::GetReadingWord()
{
    std::stringstream ss;
    for (unsigned long long i = 0; i < Table.size(); i++)
    {
        for (unsigned long long j = 0; j < Table.at(i).size(); j++)
        {
            ss << Table.at(i).at(j) << ",";
        }
    }
    std::string ReadingWord = ss.str();
    ReadingWord.pop_back();
    return ReadingWord;
}

std::string YoungTable::Draw()
{
    std::stringstream ss;
    for (unsigned long long i = 0; i < Table.size(); i++)
    {
        for (unsigned long long j = 0; j < Table.at(i).size(); j++)
        {
            ss << Table.at(i).at(j) << " ";
        }
        ss << "\n";
    }
    return ss.str();
}
