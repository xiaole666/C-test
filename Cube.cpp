#include <iostream>
using namespace std;
class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;

public :
    void setlong(int l)
    {
        m_L = l;
    }
    int getlong()
    {
        return m_L;
    }

    void setwidth(int w)
    {
        m_W = w;
    }
    int getwidth()
    {
        return m_W;
    }

    void sethigh(int l)
    {
        m_H = l;
    }
    int gethigh()
    {
        return m_H;
    }

    int calculateS()
    {
        return 2 * m_L * m_W + 2 * m_W *m_H + 2 * m_H * m_L; 
    }

    int calculateV()
    {
        return m_L * m_W * m_W;
    }
};

int main ()
{
    Cube c1;
    c1.setlong(10);
    c1.setwidth(10);
    c1.sethigh(10);

    cout << "c1的面积为： " << c1.calculateS() << endl;
    cout << "c1的体积为： " << c1.calculateV() << endl; 

    system("pause");
    return 0;
}