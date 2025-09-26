#include <stdio.h>
#include <math.h>

int main() {   
    double wind_angle;
    double wind_speed;
    double fuel;
    double consumption;
    double wind_surface;
    double pressure;
    int temperature;
    int altitude;
    double ias;
    double weight;
    double headwind;
    double pressure_altitude;
    double tas;
    double ground_speed;
    double range;
    double takeoff;
    double wing_loading;
    double rate_of_climb;
    double no_return;
    double descent_speed;
     


    printf("Direction relative du vent [-3.14159265 à 3.14159265] : ");
    scanf("%lf", & wind_angle);

    printf("vitesse du vent [0 à 150] : ");
    scanf("%lf", & wind_speed);

    printf("carburant disponible [20 à 350000] : ");
    scanf("%lf", & fuel);

    printf("Consommation [10 à 15000] : ");
    scanf("%lf", & consumption);

    printf("surface alaire [5 à 900] : ");
    scanf("%lf", & wind_surface);

    printf("pression ambiante [300 à 1050] : ");
    scanf("%lf", & pressure);

    printf("température extérieure [-50 à 50] : ");
    scanf("%int", & temperature);

    printf("altitude [0 à 19500] : ");
    scanf("%int", & altitude);

    printf("Indicated Air Speed (vitesse) [0 à 500] : ");
    scanf("%lf", & ias );

    printf("Poids total [500 à 600000] : ");
    scanf("%lf", & weight);


    headwind = wind_speed*cos(wind_angle);
    pressure_altitude = altitude+(1023-pressure)*30;
    tas = ias*(1+2*pressure_altitude/1000);
    ground_speed = tas - headwind;
    range = fuel*ground_speed*1.852/consumption;
    takeoff = 300*(1+pressure_altitude/1000)*(1-0.01*fmax(0, temperature-15))*(1-headwind/ground_speed)*((weight/1157)²) ;
    wing_loading = weight/wing_surface;
    rate_of_climb = 700*(1-pressure_altitude/10000)*(1-0.01*fmax(0,temperature-15));
    no_return = range/2;
    descent_speed = ground_speed*tan(3);












}

