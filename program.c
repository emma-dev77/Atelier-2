#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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
    
     printf("Choisissez la valeur a calculer :\n");
    printf("1) Altitude-pression\n");
    printf("2) Vitesse vraie (True Airspeed)\n");
    printf("3) Vitesse-sol (Ground Speed)\n");
    printf("4) Distance franchissable (Range)\n");
    printf("5) Distance de decollage (Takeoff)\n");
    printf("6) Charge alaire (Wing loading)\n");
    printf("7) Taux de montee (Rate of climb)\n");
    printf("8) Point de non-retour (No return)\n");
    printf("9) Vitesse de descente\n");
    printf("Votre choix (1-9) : ");
   
    int choix;
     scanf("%d", &choix);
   
    bool headwind = false;
    bool pressure_altitude = false;
    bool tas = false;
    bool ground_speed = false;
    bool range = false;
    bool takeoff = false;
    bool wing_loading = false;
    bool rate_of_climb = false;
    bool no_return = false;
    bool descent_speed = false;
 
         if (choix == 1) pressure_altitude = true;
    else if (choix == 2) tas = true;
    else if (choix == 3) ground_speed = true;
    else if (choix == 4) range = true;
    else if (choix == 5) takeoff = true;
    else if (choix == 6) wing_loading = true;
    else if (choix == 7) rate_of_climb = true;
    else if (choix == 8) no_return = true;
    else if (choix == 9) descent_speed = true;
    else {
        printf("Choix invalide.\n");
        return 0;
    }
 
     
  
    do
    {
        printf("Direction relative du vent [-3.14159265 à 3.14159265] : ");
        scanf("%lf", & wind_angle);
    } while(wind_angle<-3.14159265 || wind_angle > 3.14159265);

    do
    {
        printf("vitesse du vent [0 à 150] : ");
        scanf("%lf", & wind_speed);
    } while (wind_speed < 0 || wind_speed > 150);
    
    do
    {
        printf("carburant disponible [20 à 350000] : ");
        scanf("%lf", & fuel);
    } while (fuel < 20 || fuel > 350000);

    do
    {
        printf("Consommation [10 à 15000] : ");
        scanf("%lf", & consumption);
    } while (consumption < 10 || consumption > 15000);

    do
    {
        printf("surface alaire [5 à 900] : ");
        scanf("%lf", & wind_surface);
    } while (wind_surface < 5 || wind_surface > 900);
    
    do
    {
        printf("pression ambiante [300 à 1050] : ");
        scanf("%lf", & pressure);
    } while (pressure < 300 || pressure > 1050);

    do
    {
        printf("température extérieure [-50 à 50] : ");
        scanf("%int", & temperature);
    } while (temperature < -50 || temperature > 50);
    
    do
    {
        printf("altitude [0 à 19500] : ");
        scanf("%int", & altitude);
    } while (altitude < 0 || altitude > 19500);
    
    do
    {
        printf("Indicated Air Speed (vitesse) [0 à 500] : ");
        scanf("%lf", & ias );
    } while (ias < 0 || ias > 500);

    do
    {
        printf("Poids total [500 à 600000] : ");
        scanf("%lf", & weight);
    } while (weight < 500 || weight > 600000);
    


    if (need_headwind)
    {
        do
     {
        printf("Direction relative du vent [-3.14159265 à 3.14159265] : ");
        scanf("%lf", & wind_angle);
     } while(wind_angle<-3.14159265 || wind_angle > 3.14159265);

        do
     {
        printf("vitesse du vent [0 à 150] : ");
        scanf("%lf", & wind_speed);
     } while (wind_speed < 0 || wind_speed > 150);
    }

    if (need_pressure_altitude)
    





    headwind = wind_speed*cos(wind_angle);
    pressure_altitude = altitude+(1023-pressure)*30;
    tas = ias*(1+2*pressure_altitude/1000);
    ground_speed = tas - headwind;
    range = fuel*ground_speed*1.852/consumption;
    takeoff = 300*(1+pressure_altitude/1000)*(1-0.01*fmax(0, temperature-15))*(1-headwind/ground_speed)*((weight/1157)*(weight/1157));
    wing_loading = weight/wind_surface;
    rate_of_climb = 700*(1-pressure_altitude/10000)*(1-0.01*fmax(0,temperature-15));
    no_return = range/2;
    descent_speed = ground_speed*tan(3);












}

