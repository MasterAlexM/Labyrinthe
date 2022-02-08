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

    void TimeToComplete();

    void set_CompleteLevel(bool CompleteLevel);
    void set_LevelID(unsigned long LevelID);

    bool get_CompleteLevel();
    unsigned long get_LevelID();
    char* get_DateTest();
    time_t get_TimeToComplete();
};

TestLevel::TestLevel()
{
    m_DateTest = ctime(0);
}

TestLevel::TestLevel(unsigned long LevelID)
{
    m_DateTest = ctime(0);
    m_LevelID = LevelID;
}

void TestLevel::TimeToComplete()
{
    m_TimeToComplete = ctime(0) - m_DateTest;
}

void TestLevel::set_CompleteLevel(bool CompleteLevel)
{
    m_CompleteLevel = CompleteLevel;
}

void TestLevel::set_LevelID(unsigned long LevelID)
{
    m_LevelID = LevelID;
}

bool TestLevel::get_CompleteLevel()
{
    return m_CompleteLevel;
}

unsigned long TestLevel::get_LevelID()
{
    return m_LevelID;
}

char* TestLevel::get_DateTest()
{
    return m_DT;
}

time_t TestLevel::get_TimeToComplete()
{
    return m_TimeToComplete;
}