#pragma once
namespace c
{
    struct Dot
    {double x,y;};

    void get_data(Dot *d, char *s);

    struct Line
    {double A,B,C;};

    void get_data(Line *l, char *s);
    double angle_from_x(Line a);
    double angle_from(Line a, Line b);
    int is_separating_dots(Line l, Dot a, Dot b);
    Dot is_crossing(Line a, Line b);
}
