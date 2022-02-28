#include<stdio.h>

int main()
{
    int Category;
    int temperature; 
    int currency;
    int length;
    int mass;
    int Fahrenheit;
    int Celsius;
    int userINRtoUSD;
    int userINRtoEuro;
    int userINRtoPounds;
    int userINRtoAUD;
    int Meter_Cm;
    int Meter_Km;
    int FtoC;
    int CtoF;
    int Gram;
    int Ounce;
    float INRtoUSD;
    float INRtoEuro;
    float INRtoPounds;
    float INRtoAUD;
    float MtoCm;
    float MtoKm;
    float GramtoPounds;
    float OuncetoPounds;

    printf("Welcome to Unit Convertor !!!\n\n");
    printf("Choose from list\n");
    printf("Press 10 for Temperature\n");
    printf("Press 11 for Currency\n");
    printf("Press 12 for Length\n");
    printf("Press 13 for Mass\n");
    printf("Enter you want check conversion \n");
    scanf("%d",&Category);
 

    if(Category == 10)
    {
        printf("Entered in Temperature Conversion \n");
        printf("List\n");
        printf("Enter 1 for FtoC \n");
        printf("Enetr 2 for CtoF \n");
        scanf("%d",&temperature);
        if(temperature == 1){
            printf("Enter Fahrenheit degree: \n");
            scanf("%d",&Fahrenheit);
            FtoC = ((Fahrenheit-32)*(5.0/9.0));
            printf("Celcius: %d\n", FtoC);
        }
        else if(temperature == 2){
            printf("Enter Calsius defree: \n");
            scanf("%d",&Celsius);
            CtoF = ((9.0/5.0)*Celsius +32);
            printf("fahrenheit: %d\n", CtoF);
        }
        else
        printf("Please enter the correct choice \n");
    }
    else if( Category == 11){
        printf("Welcome to Currency Convertor!! \n");
        printf("List \n");
        printf("Enter 1 for INDtoUSD\n");
        printf("Enter 2 for INDtoEuro\n");
        printf("Enter 3 for INDtoPounds\n");
        printf("Enter 4 for INDtoAUD\n");
    scanf("%d\n",&currency);

        if(currency == 1)
        {
            printf("enter the INR amount \n");
            scanf("%d",&userINRtoUSD);
            INRtoUSD = userINRtoUSD * 0.013;
            printf("USD: %.2f",INRtoUSD);
        }
        else if(currency == 2)
        {
            printf("enter the INR amount \n");
            scanf("%d",&userINRtoEuro);
            INRtoEuro = userINRtoEuro * 0.012;
            printf("Euro %.2f",INRtoEuro);
        }
        else if(currency == 3)
        {
            printf("enter the INR amount \n");
            scanf("%d",&userINRtoPounds);
            INRtoPounds = userINRtoPounds * 0.0099;
            printf("Pounds %.2f",INRtoPounds);
        }
        else if(currency == 4){
            printf("enter the INR amount \n");
            scanf("%d",&userINRtoAUD);
            INRtoAUD = userINRtoAUD * 0.019;
            printf("AUD: %.2f", INRtoAUD);
        }
        else
        printf("Please enter the correct choice \n");

    }
    else if(Category == 12){
        printf("Welcome to Length convertor \n");
        printf("List \n") ;
        printf("Enter 1 for Meter to Centimeter \n");
        printf("Enter 2 for Meter to Kilometer \n");
        scanf("%d",&length);

        if(length == 1)
        {
            printf("Enter the Meter \n");
            scanf("%d",&Meter_Cm);
            MtoCm = Meter_Cm * 100;
            printf("Centimeter: %.2f",MtoCm);
        }   
        if(length == 2){
            printf("Enter the Meter \n");
            scanf("%d",&Meter_Km);
            MtoKm = Meter_Km * 0.001;
            printf("Kilometer: %.2f",MtoKm);
        }
        else
        printf("Please enter the correct value. \n");
    }

    if(Category == 13){
        printf("Welcome to Mass convertor \n");
        printf("List \n");
        printf("enter 1 for ounces to pounds \n");
        printf("Enter 2 for grams to pounds \n");
        scanf("%d",&mass);

        if(mass == 1)
        {
            printf("Enter the ounce amount \n");
            scanf("%d",&Ounce);
            OuncetoPounds = Ounce * 0.0625;
            printf("Pounds %.2f",OuncetoPounds);
        }

        if(mass == 2){
            printf("Enter the gram amount \n");
            scanf("%d",&Gram);
            GramtoPounds = Gram * 0.00220462;
            printf("Pounds %.2f",GramtoPounds);
        }
        else
        printf("Please enter the correct choice. \n");
        

    }
    else 
    printf(".");

return 0;

}