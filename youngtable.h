#ifndef YOUNGTABLE_H
#define YOUNGTABLE_H

#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <cmath>

class YoungTable
{
public:
    YoungTable();
    YoungTable(std::vector<std::vector<int>> table);
    std::vector<int> GetReadingWord();
    std::vector<int> GetReversedReadingWord();
    std::vector<int> GetColumnReadingWord();
    std::string ConvTabInStr();

private:
    std::vector<int> Lambda;
    std::vector<std::vector<int>> Table;
};

#endif // YOUNGTABLE_H
