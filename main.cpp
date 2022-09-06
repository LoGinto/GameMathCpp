#include <iostream>
#include "Vector3.h"
#include <chrono>
using namespace std;

float DeltaTime(){
    return 0.016; //mock value of deltatime at 60 fps
}
float Aprroach(float goal,float current,float dt){ //interpolation
    //run it in the loop
    float difference = goal-current;
    if(difference>dt){
        return current+dt;
    }
    if(difference<-dt){
        return current-dt;
    }
    return goal;
}
int main()
{


}
