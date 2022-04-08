#ifndef Position_h
#define Position_h
#include <string>
using namespace std;

class Position
{
private:
    string x;
    int xNum = 0;
    string y;
    int yNum = 0;
public:
    void setPosition(string s);
    int setNum();
    string getPositionX() const;
    string getPositionY() const;
    int getXNum() const;
    int getYNum() const;
};

#endif /* Position_h */
