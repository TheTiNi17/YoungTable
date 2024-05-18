#include "youngtable.h"

YoungTable::YoungTable()
{

}

YoungTable::YoungTable(std::vector<std::vector<int>> table)
{
    Table = table;
}

std::vector<int> YoungTable::GetReadingWord()
{
    std::vector<int> ReadingWord;
    for (unsigned long long i = 0; i < Table.size(); i++)
    {
        for (unsigned long long j = 0; j < Table.at(i).size(); j++)
        {
            ReadingWord.push_back(Table.at(i).at(j));
        }
    }
    return ReadingWord;
}

std::vector<int> YoungTable::GetReversedReadingWord()
{
    std::vector<int> ReversedReadingWord;
    for (unsigned long long i = 0; i < Table.size(); i++)
    {
        for (unsigned long long j = 0; j < Table.at(i).size(); j++)
        {
            ReversedReadingWord.insert(ReversedReadingWord.begin(), Table.at(i).at(j));
        }
    }
    return ReversedReadingWord;
}

std::vector<int> YoungTable::GetColumnReadingWord()
{
    std::vector<int> ColumnReadingWord;
    //i < Таблица(индекс последней стоки).ширина строки()
    //i - индекс колонны
    for (unsigned long long i = 0; i < (Table.at(Table.size() - 1).size()); i++)
    {
        //перебор строк
        for (unsigned long long j = 0; j < Table.size(); j++)
        {
            if (Table.at(j).size() > i)
            //позиция j - индекс строки, i - индекс столбца
            ColumnReadingWord.push_back(Table.at(j).at(i));
        }
    }
    return ColumnReadingWord;
}

std::string YoungTable::ConvTabInStr()
{
    std::stringstream ss;
    //Вычисление максимального числа в таблице
    int max_number = 0;
    for (unsigned long long i = 0; i < Table.size(); i++)
    {
        //размер = сумма всех λ
        max_number += Table.at(i).size();
    }
    //кол-во знаков в наибольшем числе
    int max_digits_amount = (int)log10(max_number) + 1;
    int current_digits_amount = 0;

    for (unsigned long long i = 0; i < Table.size(); i++)
    {
        for (unsigned long long j = 0; j < Table.at(i).size(); j++)
        {
            current_digits_amount = (int)log10(Table.at(i).at(j)) + 1;
            while ( current_digits_amount < max_digits_amount)
            {
                current_digits_amount++;
                ss << ' ';
            }
            ss << Table.at(i).at(j) << "  ";
        }
        ss << '\n';
    }
    return ss.str();
}
