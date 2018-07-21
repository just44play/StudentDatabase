#pragma once

#include <iostream>
#include <string>


class Record
{
    std::string name;
    std::string surname;

public:
    Record(std::string, std::string);
    Record() {}
    ~Record() {}

    std::string getName() const;
    std::string getSurname() const;

};
