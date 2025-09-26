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

    

}

