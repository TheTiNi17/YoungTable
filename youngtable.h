#ifndef YOUNGTABLE_H
#define YOUNGTABLE_H

#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

class YoungTable
{
public:
    YoungTable();
    YoungTable(std::vector<std::vector<int>> table);
    std::string GetReadingWord();
    std::string Draw();

private:
    std::vector<int> Lambda;
    std::vector<std::vector<int>> Table;
};

#endif // YOUNGTABLE_H
