#include <iostream>

enum LedState
{
     LED_STATE_RED = 0,
     LED_STATE_BLUE = 1,
     LED_STATE_ORANGE = 2
};

void setLedState(LedState state)
{
    if(state == LED_STATE_RED)
    {
        std::cout << "LED RED ACTIVATED" << std::endl;
    }
    else if(state == LED_STATE_BLUE)
    {
        std::cout << "LED BLUE ACTIVATED" << std::endl;
    }
    else if(state == LED_STATE_ORANGE)
    {
        std::cout << "LED ORANGE ACTIVATED" << std::endl;
    }
    else
    {
        std::cout << "Invalid state." << std::endl;
    }
    
}
int main(int argc, char** argv)
{
    setLedState(LED_STATE_ORANGE);
    return 0;
}