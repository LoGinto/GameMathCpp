#ifndef GAMETIME_H
#define GAMETIME_H


class GameTime
{
    public:
        GameTime();
        virtual ~GameTime();
        static float GetCurrentTime();
        static float DeltaTime();

    protected:

    private:
};

#endif // GAMETIME_H
