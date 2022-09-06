#include "GameTime.h"
##include <chrono>
GameTime::GameTime()
{
    //ctor
}

GameTime::~GameTime()
{
    //dtor
}
float GameTime::GetCurrentTime(){
    using clock = std::chrono::system_clock;
    using sec = std::chrono::duration<double>;
    const sec _time = clock::now();
    float endResult = (float)_time;
    return endResult;

}
float GameTime::DeltaTime(){
    //use this function in the loop otherwise it won't work correctly
    float previousTime = GetCurrentTime();

}
