#include <iostream>
#include <math.h>

using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displaypoint()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }

    friend float distancep(point p, point q);
};
float distancep(point p, point q)
{
    return sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
}

int main()
{
    point p(1, 1);
    p.displaypoint();

    point q(2, 4);
    q.displaypoint();

    cout << distancep(p, q);

    return 0;
}