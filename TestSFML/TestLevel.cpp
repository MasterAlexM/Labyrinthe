#include <TestLevel.h>

TestLevel::TestLevel()
{
    m_DateTest = ctime(0);
}

TestLevel::TestLevel(unsigned long LevelID)
{
    m_DateTest = ctime(0);
    m_LevelID = LevelID;
}

TestLevel::~TestLevel()
{

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