#pragma once

#include <iostream>
#include <string>


using namespace std;

class Employee{
private:
    const string _name;
    const string _surname;
    unsigned int _salary;
    Rank  _rank;

public:
    Employee(const string_view& name, const string_view& surname, unsigned int salary,Rank rank) 
        : _name(name), _surname(surname), _salary(salary), _rank(rank)
        {}

    const std::string& get_name() const { return _name; }
    const std::string& get_surname() const { return _surname; }

    unsigned int get_salary() const { return _salary; }
    void         increase_salary(unsigned int raise);

    Rank get_rank() const { return Rank::TopManagement; }

};
