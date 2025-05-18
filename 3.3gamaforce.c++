#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double EARTH_RADIUS = 6371000.0;
const double PI = 3.14159265358979323846;

double degToRad(double degree)
{
    return degree * (PI / 180.0);
}

double calculateDistance(double lat1, double lon1, double alt1,
                         double lat2, double lon2, double alt2)
{
    // convert to radian
    lat1 = degToRad(lat1);
    lon1 = degToRad(lon1);
    lat2 = degToRad(lat2);
    lon2 = degToRad(lon2);

    double dLat = lat2 - lat1;
    double dLon = lon2 - lon1;

    double a = sin(dLat / 2) * sin(dLat / 2) +
               cos(lat1) * cos(lat2) *
                   sin(dLon / 2) * sin(dLon / 2);

    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    double surfaceDistance = EARTH_RADIUS * c;

    double heightDiff = alt2 - alt1;

    double totalDistance = sqrt(pow(surfaceDistance, 2) + pow(heightDiff, 2));

    return totalDistance;
}

int main()
{
    double lat1, lon1, alt1, lat2, lon2, alt2;

    cin >> lat1 >> lon1 >> alt1 >> lat2 >> lon2 >> alt2;

    double distance = calculateDistance(lat1, lon1, alt1, lat2, lon2, alt2);

    cout << fixed << setprecision(3) << distance << " meter" << endl;

    return 0;
}