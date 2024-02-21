#include<stdio.h>
int main()
{
    float surya_bp,surya_da,surya_net;
    float ramu_bp,ramu_da,ramu_net;
    float sri_bp,sri_da,sri_net;

    /*Calculation for Surya*/

    surya_bp = 10000;
    surya_da = surya_bp * 15.0/100;
    surya_net = surya_bp + surya_da;

    /*Calculation for Ramu*/
    ramu_bp = 10000;
    ramu_da = ramu_bp * 15.0/100;
    ramu_net = ramu_bp + ramu_da;

    /*Calculation for Sri*/
    sri_bp = 10000;
    sri_da = sri_bp * 15.0/100;
    sri_net = sri_bp + sri_da;

    printf("\n          Employee Table             ");
    printf("\n--------------------------------------------------------------------------");
    printf("\nSNo.      Name               Basic Pay        DA   Net Pay");
    printf("\n--------------------------------------------------------------------------");
    printf("\n%-4d  %-20s  %9.2f  %8.2f  %10.2f",1,"Surya",surya_bp,surya_da,surya_net);
    printf("\n%-4d  %-20s  %9.2f  %8.2f  %10.2f",2,"Ramu",ramu_bp,ramu_da,ramu_net);
    printf("\n%-4d  %-20s  %9.2f  %8.2f  %10.2f",3,"Sri",sri_bp,sri_da,sri_net);
    printf("\n--------------------------------------------------------------------------");
    printf("\n          Total            %9.2f  %8.2f  %10.2f",
    surya_bp+ramu_bp+sri_bp,
    surya_da+ramu_da+sri_da,
    surya_net+ramu_net+sri_net
    );
    printf("\n--------------------------------------------------------------------------");
    
    
}