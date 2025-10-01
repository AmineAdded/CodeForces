#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    long long x;
    long long y;
} Point;

typedef struct
{
    Point p1;
    Point p2;
} Segment;

// Vérifier si les segments sont distincts
int distinct(Segment seg[])
{
    int distinct = ((seg[0].p1.x != seg[0].p2.x || seg[0].p1.y != seg[0].p2.y) &&
                    (seg[0].p1.x != seg[1].p1.x || seg[0].p1.y != seg[1].p1.y) &&
                    (seg[0].p1.x != seg[1].p2.x || seg[0].p1.y != seg[1].p2.y) &&
                    (seg[0].p2.x != seg[1].p1.x || seg[0].p2.y != seg[1].p1.y) &&
                    (seg[0].p2.x != seg[1].p2.x || seg[0].p2.y != seg[1].p2.y) &&
                    (seg[1].p1.x != seg[1].p2.x || seg[1].p1.y != seg[1].p2.y));
    return distinct;
}

// Calculer la distance au carré entre deux points
long long int distance(Point p1, Point p2)
{
    return ((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Vérifier si deux segments sont perpendiculaires
int is_perpendicular(Segment seg1, Segment seg2)
{
    return ((seg1.p2.x - seg1.p1.x) * (seg2.p2.x - seg2.p1.x) +
            (seg1.p2.y - seg1.p1.y) * (seg2.p2.y - seg2.p1.y));
}

// Vérifier que les segments sont parallèles aux axes
int checksides(Segment seg[])
{
    if ((seg[0].p2.x - seg[0].p1.x == 0 || seg[0].p2.y - seg[0].p1.y == 0) &&
        (seg[1].p2.x - seg[1].p1.x == 0 || seg[1].p2.y - seg[1].p1.y == 0) &&
        (seg[2].p2.x - seg[2].p1.x == 0 || seg[2].p2.y - seg[2].p1.y == 0) &&
        (seg[3].p2.x - seg[3].p1.x == 0 || seg[3].p2.y - seg[3].p1.y == 0))
        return 1;
    return 0;
}

// Vérifier que les segments ne sont pas des points
int checkSegments(Segment seg[])
{
    if ((seg[0].p1.x == seg[0].p2.x && seg[0].p1.y == seg[0].p2.y) ||
        (seg[1].p1.x == seg[1].p2.x && seg[1].p1.y == seg[1].p2.y) ||
        (seg[2].p1.x == seg[2].p2.x && seg[2].p1.y == seg[2].p2.y) ||
        (seg[3].p1.x == seg[3].p2.x && seg[3].p1.y == seg[3].p2.y))
        return 0;
    return 1;
}

// Vérifier que les segments sont correctement connectés aux points d'extrémité
int checkEndpoints(Segment seg[])
{
    int count = 0;
    Point points[8] = {seg[0].p1, seg[0].p2, seg[1].p1, seg[1].p2, seg[2].p1, seg[2].p2, seg[3].p1, seg[3].p2};

    for (int i = 0; i < 8; i++)
    {
        int occurrences = 0;
        for (int j = 0; j < 8; j++)
        {
            if (points[i].x == points[j].x && points[i].y == points[j].y)
            {
                occurrences++;
            }
        }
        if (occurrences == 2)
        {
            count++;
        }
    }

    return count == 8;
}

int main()
{
    Segment seg[4];
    for (int i = 0; i < 4; i++)
        scanf("%lld %lld %lld %lld", &seg[i].p1.x, &seg[i].p1.y, &seg[i].p2.x, &seg[i].p2.y);

    long long int d1 = distance(seg[0].p1, seg[0].p2);
    long long int d2 = distance(seg[1].p1, seg[1].p2);
    long long int d3 = distance(seg[2].p1, seg[2].p2);
    long long int d4 = distance(seg[3].p1, seg[3].p2);

    if (!checkSegments(seg) || !checkEndpoints(seg))
    {
        printf("NO\n");
        return 0;
    }

    if (distinct(seg))
    {
        if (d1 == d2 && d3 == d4 && checksides(seg))
        {
            if ((is_perpendicular(seg[0], seg[2]) == 0) &&
                (is_perpendicular(seg[2], seg[1]) == 0) &&
                (is_perpendicular(seg[1], seg[3]) == 0) &&
                (is_perpendicular(seg[3], seg[0]) == 0))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        if (d1 == d3 && d2 == d4 && checksides(seg))
        {
            if ((is_perpendicular(seg[0], seg[1]) == 0) &&
                (is_perpendicular(seg[1], seg[2]) == 0) &&
                (is_perpendicular(seg[2], seg[3]) == 0) &&
                (is_perpendicular(seg[3], seg[0]) == 0))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (d1 == d4 && d2 == d3 && checksides(seg))
        {
            if ((is_perpendicular(seg[0], seg[1]) == 0) &&
                (is_perpendicular(seg[1], seg[3]) == 0) &&
                (is_perpendicular(seg[3], seg[2]) == 0) &&
                (is_perpendicular(seg[2], seg[0]) == 0))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
}
