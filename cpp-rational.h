#pragma once
namespace cpp
{
    class Dot
    {
    private:
        double x,y;
    public:
        Dot();
        Dot(double a, double b);

        void get_data(char *s);
        double _x();
        double _y();
        void set(double a, double b);
    };

    class Line
    {
    private:
        double A,B,C;
    public:
        Line();
        Line(double a, double b, double c);

        void get_data(char *s);
        void set(const char i, double n);
        void set(double a, double b, double c);
        double _A();
        double _B();
        double _C();
        double angle_from_x();
        static double angle_from_x(Line s);
        double angle_from(Line s);
        int is_separating_dots(Dot a, Dot b);
        Dot is_crossing(Line s);
    };
}
