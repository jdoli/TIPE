#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// planete en cartesien
typedef struct planete{
    double r;
    double angle;
    double m;
} planete_t;;


typedef struct vecteur {
    float pos1_x;
    float pos1_y;
    float pos2_x;
    float pos2_y;
}vecteur_t;;

// renvoie les coordonnees cartesiennes des planetes
double* coordonnes_planete (planete_t * p1){
    double x1 = p1->r * cos(p1->angle);
    double y1= p1-> r* sin(p1-> angle);
    double* l = malloc (2*sizeof(double));
    l[0]=x1;
    l[1]=y1;
    return l;
}
double dist_2points (planete_t * p1, planete_t * p2){
    double* c1= coordonnes_planete(p1);
    double* c2= coordonnes_planete(p2);
    double x1,x2,y1,y2;


    free (c1);
    free(c2);
}


int main(){
    return 0;
}

