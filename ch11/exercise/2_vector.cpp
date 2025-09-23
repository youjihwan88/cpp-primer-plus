// vect.cpp -- methods for the Vector class
#include <cmath>
#include "2_vector.h"

using std::atan, std::atan2;
using std::cout;
using std::sin, std::cos;
using std::sqrt;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector()
    {
        x = y = 0.0;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (form == POL)
        {
            double mag = n1;
            double ang = n2 / Rad_to_deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (form == POL)
        {
            double mag = n1;
            double ang = n2 / Rad_to_deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
        }
    }

    Vector::~Vector()
    {
    }

    double Vector::magval() const
    {
        return sqrt(x * x + y * y);
    }

    double Vector::angval() const
    {
        if (x == 0.0 && y == 0.0)
        {
            return 0.0;
        }
        else
        {
            return atan2(y, x);
        }
    }

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector &a)
    {
        return a * n;
    }

    std::ostream &operator<<(std::ostream &os, const Vector &v)
    {
        os << "(x,y) = (" << v.x << ", " << v.y << ")";
        return os;
    }
} // namespace VECTOR
