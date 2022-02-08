#pragma once

#include <iostream>
#include <ctime>

class TestLevel
{
    bool m_CompleteLevel = false;
    unsigned long m_LevelID;
    time_t m_DateTest;
    time_t m_TimeToComplete;
    char* m_DT = ctime(&m_DateTest); //Use to convert m_DateTest to string

public:
    TestLevel();
    TestLevel(unsigned long LevelID);
    ~TestLevel();

    void TimeToComplete();

    void set_CompleteLevel(bool CompleteLevel);
    void set_LevelID(unsigned long LevelID);

    bool get_CompleteLevel();
    unsigned long get_LevelID();
    char* get_DateTest();
    time_t get_TimeToComplete();
};